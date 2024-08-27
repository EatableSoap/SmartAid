QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatdialog.cpp \
    doctor.cpp \
    doctorcase.cpp \
    doctordpcp.cpp \
    doctorinfor.cpp \
    doctorpap.cpp \
    doctorseeregister.cpp \
    dpchat.cpp \
    enroll.cpp \
    framelessWidget.cpp \
    hap.cpp \
    main.cpp \
    mainwindow.cpp \
    patient.cpp \
    patientcase.cpp \
    patientdpcp.cpp \
    patientinfor.cpp \
    patientpap.cpp \
    patientregister.cpp \
    patientseedoc.cpp \
    scrolltext.cpp

HEADERS += \
    chatdialog.h \
    doctor.h \
    doctorcase.h \
    doctordpcp.h \
    doctorinfor.h \
    doctorpap.h \
    doctorseeregister.h \
    dpchat.h \
    enroll.h \
    framelessWidget.h \
    hap.h \
    mainwindow.h \
    patient.h \
    patientcase.h \
    patientdpcp.h \
    patientinfor.h \
    patientpap.h \
    patientregister.h \
    patientseedoc.h \
    scrolltext.h

FORMS += \
    chatdialog.ui \
    doctor.ui \
    doctorcase.ui \
    doctordpcp.ui \
    doctorinfor.ui \
    doctorpap.ui \
    doctorseeregister.ui \
    dpchat.ui \
    enroll.ui \
    framelessWidget.ui \
    hap.ui \
    mainwindow.ui \
    patient.ui \
    patientcase.ui \
    patientdpcp.ui \
    patientinfor.ui \
    patientpap.ui \
    patientregister.ui \
    patientseedoc.ui \

    

# Default rules for deployment.

//导入组件库的源文件
SOURCES += \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialappbar.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialautocomplete.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialautocomplete_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialavatar.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialbadge.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialcheckbox.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialcircularprogress.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialcircularprogress_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdialog.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdialog_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdrawer.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdrawer_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialfab.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialflatbutton.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialflatbutton_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialiconbutton.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmateriallist.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmateriallistitem.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialmenu.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialmenu_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialpaper.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialprogress.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialprogress_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialradiobutton.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialraisedbutton.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialscrollbar.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialscrollbar_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialslider.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialslider_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialsnackbar.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialsnackbar_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtable.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtabs.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtabs_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtextfield.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtextfield_internal.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtoggle.cpp \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtoggle_internal.cpp \

//导入组件库的头文件
HEADERS += \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialappbar.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialappbar_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialautocomplete.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialautocomplete_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialautocomplete_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialavatar.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialavatar_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialbadge.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialbadge_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialcheckbox.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialcheckbox_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialcircularprogress.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialcircularprogress_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialcircularprogress_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdialog.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdialog_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdialog_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdrawer.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdrawer_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialdrawer_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialfab.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialfab_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialflatbutton.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialflatbutton_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialflatbutton_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialiconbutton.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialiconbutton_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmateriallist.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmateriallist_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmateriallistitem.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmateriallistitem_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialmenu.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialmenu_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialmenu_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialpaper.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialpaper_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialprogress.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialprogress_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialprogress_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialradiobutton.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialradiobutton_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialraisedbutton.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialraisedbutton_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialscrollbar.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialscrollbar_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialscrollbar_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialslider.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialslider_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialslider_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialsnackbar.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialsnackbar_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialsnackbar_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtable.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtable_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtabs.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtabs_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtabs_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtextfield.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtextfield_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtextfield_p.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtoggle.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtoggle_internal.h \
    /home/linux/1/SDK/MaterialSDK/components/qtmaterialtoggle_p.h \

#import Material SDK(导入Material组件库的SDK)
LIBS += /home/linux/1/SDK/MaterialSDK/staticlib/libcomponents.a
INCLUDEPATH += /home/linux/1/SDK/MaterialSDK/components
PRE_TARGETDEPS += /home/linux/1/SDK/MaterialSDK/staticlib/libcomponents.a


//subdirs模板告诉qmake生成一个makefile，它可以进入到特定子目录并为这个目录中的项目文件生成makefile并且为它调用make。
SUBDIRS += \
    /home/linux/1/SDK/MaterialSDK/components/components.pro

RESOURCES += \
    background.qrc

