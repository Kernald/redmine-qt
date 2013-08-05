#-------------------------------------------------
#
# Project created by QtCreator 2013-08-03T20:21:26
#
#-------------------------------------------------

QT       += network xml

QT       -= gui

TARGET = redmine-qt
TEMPLATE = lib

DEFINES += REDMINEQT_LIBRARY

SOURCES += RedmineClient.cpp \
    PasswordAuthenticator.cpp \
    KeyAuthenticator.cpp

HEADERS += RedmineClient.hpp\
        redmine-qt_global.hpp \
    PasswordAuthenticator.hpp \
    IAuthenticator.hpp \
    KeyAuthenticator.hpp

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
