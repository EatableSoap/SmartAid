## 默认看这个的都知道怎么使用魔法梯子、有自己的Github账号并且已经在本地安装了Git这个软件。如果没有请自行解决。

-----------------
### Git基本配置

- 首先我们需要对你的本地Git进行配置，这一步主要就是告诉你的电脑和软件接下来的操作会在哪个账号上进行。

- 打开你的Git Bash（这个安装Git的时候默认安装，虽然CMD也能用就是了）,键入以下命令:

- ```cmd
  git config --global user.name "YOUR_USERNAME"
  git config --global user.email "YOUR_EMAIL"
  ```
  在对应位置替换你的用户名和邮箱即可，注意此处的用户名不一定和Github账户名相同，只要方便使用即可。对于任意仓库，当未指定当前用户配置时，默认使用全局配置。上述代码块中删去***--global***则是为当前仓库指定用户。


### Git使用

简要介绍下Git，存放在你自身设备上的代码之类的地方称为工作区，初始化仓库后产生的.git文件夹里面存放的就是缓冲区，Github上的仓库称为远程仓库

Git的基本原理就是在本地建立一个缓冲区，当你在你的工作区操作完成并提交后，就会更新你的文件变化并添加记录和日志，必要时利用这些记录来回滚，其实和数据库差不多。

#### Git初始化

##### 方法一    ssh协议

- 转到你需要初始化仓库的根目录

  ```cmd
  ## 可使用相对路径，也可以使用绝对路径，基础操作同cmd
  cd YOUR_FileDirectory
  ```

- 初始化本地仓库

  ```cmd
  ## 如果是大文件仓库的话，就在git后加上lfs，这又是一个很复杂的玩意，建议非必要别用
  git init
  ```

  此处可单独为仓库指定用户

- 连接到远程仓库

  - 创建ssh-key，我是用rsa格式的，所以输入

    ```cmd
    ssh-keygen -t rsa -C "YOUR_EMAIL"
    ```

  - 然后复制所得公钥

    ```cmd
    cd ~/.ssh
    cat ./id_rsa.pub
    ```

    不出意外会得到一个以ssh-rsa开头的字符串

  - 打开Github主页，点击右上角头像->Settings->左侧Access->SSH and GPG keys->右上角New SSH key->命名然后在Key栏输入刚才复制的公钥，保存

  - 测试能否连接到Github，输入

    ```cmd
    ## 不出意外应该会出现以下提示：
    ## Hi $YOUR_USERNAME$! You've successfully authenticated, but GitHub does not provide shell access.
    ssh -T git@github.com
    ```

    如果报错的话，或许是没有将私钥加入ssh-agent中，尝试

    ```cmd
    ssh-agent bash
    ssh-add ~/.ssh/id_rsa ## 默认地址，如果你在生成key的时候修改过地址，此处亦然
    ssh-add -l ## 此处会显示你加入的私钥
    ```

  - 建立一个新仓库（这个应该都会吧）

    - 假如你没有使用README.md初始化

      执行前记得确保你的工作区里有东西可以提交

      ```cmd
      git remote add origin git@github.com:YOUR_REPO_ADDRESS
      git branch -M main
      git push -u origin main
      ```

      这一步相当于将你的远程仓库连接到本地的origin，就是换了个名字，然后将本地仓库合并到远程仓库并推送。

    - 使用README.md初始化

      ```cmd
      ## 如果你自己有个README.md的话，可以使用git stash
      ## git stash
      git pull origin main
      ## git stash apply
      ## 此处或许会需要你解决冲突
      git commit -m "MESSAGE"
      git push origin main
      ```

      或者你可以先保存你自己的README.md然后覆盖原本仓库，提交并推送

##### 方法二    http协议

特别简单，直接跳到法一的建立仓库，创建仓库后直接

```cmd
git clone YOUR_REPO_ADDRESS.git
```

然后把你的代码啥的复制进去并提交推送，如此轻松，当然后续提交代码啥的操作可能需要你输入账密（笔者没试过），对于跑别人的代码就适合用这个

### Git的基本操作

此处仅介绍几个最常用的，具体参数作用建议自学，估计够我们学习使用了

#### Git status

查看当前哪些文件未纳入版本控制，哪些提交未成功，哪些提交未推送，出问题的时候多看看

#### Git commit -m “MESSAGE”

将工作区的更改提交到缓冲区，并附上更新日志“***MESSAGE***”

#### Git branch

最常用的应该是

```cmd
## 列出当前所有分支
git branch -l
## 删除某一分支
git branch -d branch_name
## 删除远程分支
git push origin -delete branch_name
## 可以将分支命名
git branch -m old_branch_name new_branch_name
## 切换到主分支
git branch -m MAIN_BRANCH_NAME
```

#### Git remote

这个指令主要就是负责操作远程仓库与本地仓库的连接的

```cmd
## 显示远程仓库的本地名及实际url
git remote -v
## 添加远程仓库
git remote add REPO_NAME REPO_URL
## 重命名远程仓库
git remote rename OLD NEW
## 删除本地中远程仓库（Github上的并没有删除）
git remote remove remote_name 
```

#### Git push/pull BRANCH_NAME

最常用的指令之一

如果追踪远程分支的话，那么需要指定将当前修改合并到哪一个分支

#### Git checkout

用来切换分支和关联远程分支，也可用作丢弃修改

```cmd
## 切换到名为BEANCK_NAME的分支，在checkout后加上-b就会新建并切换到该名称的分支
## 如果此时在BRANCH_NAME后加上指定的远程分支名，那么就会关联到该远程分支
git checkout BRANCH_NAME [Remote BRANCH_NAME]
## 放弃当前工作区的修改，但无法对增删文件起效。比如部分代码太烂了，不想要了可以撤回
git checkout [.|-- filename] ## .表示放弃所有修改，后者表示指定某一文件
## 指定commit提交内容还原到工作区
git checkout HEAD^ [-- filename] ## 这个表示转到上一次提交的工作区状态，如果在这个状态下进行修改，那么push时需要加上-f参数
## 还原指定分支指定内容
git checkout BRANCH_NAME -- filename
```

#### Git restore

```cmd
## 放弃当前某个文件在工作区的修改，如果加入了暂存区那么就会还原到暂存区，否则还原到上一次commit
## 如果在restore后加上--staged参数，表示仅将该文件移出暂存区
git restore filename
```

#### Git reset/revert

用于回滚内容

```cmd
## 使用reset后，版本管理中将不会出现reset之后的所有版本，相当于时间上直接回溯到了该版本，并且push时也需要加上-f参数
git reset --hard VERSION_ID
## 使用revert可以撤销特定版本的操作但保留该版本之后的操作，并且会留下还原记录，提交时不用额外参数，但是可能需要解决文件冲突的问题，个人感觉会更好
git revert -n VERSION_ID
git commit -m "MESSAGE"
```

#### 关联远程分支

关联远程分支后，可以直接push/pull对应关联分支的文件，比较方便

```cmd
 ## 创建一个本地分支并将其关联到一个远程分支
 git checkout -b LOCAL_BRANCH_NAME REMOTE_BRANCH_NAME
 ## 将已有本地分支关联到一个远程分支
 git branch --set-upstream-to=REMOTE_BRANCH_NAME LOCAL_BRANCH_NAME
 ## 上传当前本地分支到一个远程分支并关联
 git push --set-upstream origin LOCAL_BRANCH_NAME:REMOTE_BRANCH_NAME
 
 ## 其中的REMOTE_BRANCH_NAME都应该是origin/branch的格式
```



#### IDE内Git使用

一般来说，ide中的git都是可视化的，操作起来也有不同，但是调用的指令其实都是Git上的，学习如何使用git方便处理之后版本控制中会遇到的问题，遇到实在不会处理的问题可以上网搜索
