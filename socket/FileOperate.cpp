#include "FileOperate.h"

//判断路径是否存在，不存在则创建
bool FileOperate::isDirExist(QString FullPath){
    QDir dir(FullPath);

    if(dir.exists()){
        return true;
    }
    else{
        bool result = dir.mkpath(FullPath);
        return result;
    }
}
