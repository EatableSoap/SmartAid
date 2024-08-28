# 语音识别 RESTFul API C++ sdk

1. 安装必要的依赖，curl（必须带ssl） jsoncpp openssl

2. 首先拷贝整个speech目录内容，务必包含assets目录下的文件

3. sh build.sh 编译并执行

**接口文档**
https://ai.baidu.com/ai-doc/SPEECH/dlbxfrs5o

**环境配置**
sudo apt install libssl-dev libcur14-openssl-dev libcurl4  
sudo apt install python  
sudo apt-get install scons  
sudo apt install libjsoncpp-dev  
sudo apt-get install jsoncpp  
wget https://github.com/open-source-parsers/jsoncpp/archive/master.tar.gz  

**注意事项**
1. 安装依赖库curl(需要支持ssl) openssl jsoncpp(>1.6.2版本，0.x版本将不被支持)。

2. 编译工程时添加 C++11 支持 (gcc/clang 添加编译参数 -std=c++11), 添加第三方库链接参数 lcurl, lcrypto, ljsoncpp。

3. 在源码中include需要使用的交互类头文件（face.h image_censor.h image_classify.h kg.h nlp.h ocr.h speech.h等），引入压缩包中的头文即可使用aip命名空间下的类和方法。
