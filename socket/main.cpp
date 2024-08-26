#include "RequestOperate.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    char ch[]="good";
    RequestOperate::UserLogin(123,&ch[0]);
}
