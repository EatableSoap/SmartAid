QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Incommon/chatdialog.cpp \
    Incommon/dpchat.cpp \
    Incommon/enroll.cpp \
    SharedValue.cpp \
    doctor/doctor.cpp \
    doctor/doctorcase.cpp \
    doctor/doctorinfor.cpp \
    doctor/doctorseeregister.cpp \
    lib/DataBaseInterface.cpp \
    lib/FileOperate.cpp \
    lib/MyQtJson.cpp \
    lib/RequestOperate.cpp \
    lib/socketClient.cpp \
    main.cpp \
    mainwindow.cpp \
    patient/hap.cpp \
    patient/patient.cpp \
    patient/patientcase.cpp \
    patient/patientinfor.cpp \
    patient/patientregister.cpp \
    patient/patientseedoc.cpp

HEADERS += \
    Incommon/chatdialog.h \
    Incommon/dpchat.h \
    Incommon/enroll.h \
    SharedValue.h \
    doctor/doctor.h \
    doctor/doctorcase.h \
    doctor/doctorinfor.h \
    doctor/doctorseeregister.h \
    lib/DataBaseInterface.h \
    lib/FileOperate.h \
    lib/MyQtJson.h \
    lib/RequestOperate.h \
    lib/socketClient.h \
    mainwindow.h \
    patient/hap.h \
    patient/patient.h \
    patient/patientcase.h \
    patient/patientinfor.h \
    patient/patientregister.h \
    patient/patientseedoc.h

FORMS += \
    chatdialog.ui \
    doctor.ui \
    doctorcase.ui \
    doctorinfor.ui \
    doctorseeregister.ui \
    dpchat.ui \
    enroll.ui \
    hap.ui \
    mainwindow.ui \
    patient.ui \
    patientcase.ui \
    patientinfor.ui \
    patientregister.ui \
    patientseedoc.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pitcure/pic.qrc
