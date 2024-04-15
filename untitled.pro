QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    imnotarobot.cpp \
    login.cpp \
    main.cpp \
    popup.cpp \
    signup.cpp \
    splashpage.cpp

HEADERS += \
    imnotarobot.h \
    login.h \
    popup.h \
    signup.h \
    splashpage.h

FORMS += \
    imnotarobot.ui \
    login.ui \
    popup.ui \
    signup.ui \
    splashpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    back.qrc \
    background.qrc \
    coworkers.qrc \
    designn.qrc \
    jiib.qrc \
    logoo.qrc
