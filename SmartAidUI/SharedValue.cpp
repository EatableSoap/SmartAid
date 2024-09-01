#include "SharedValue.h"

SharedValue::SharedValue(QTcpSocket* socket,
                         int         iden,
                         QString     SavePath = "./tmp/",
                         QString     DBPath = "./tmp/DataBase/")
    : sharedsocket(socket),
      identity(iden),
      SavePath(SavePath),
      DataBasePath(DBPath){};

SharedValue::SharedValue(){};

SharedValue::~SharedValue()
{
    delete sharedsocket;
};
