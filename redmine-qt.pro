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

SOURCES += src/RedmineClient.cpp \
    src/PasswordAuthenticator.cpp \
    src/KeyAuthenticator.cpp

HEADERS += src/RedmineClient.hpp\
        src/redmine-qt_global.hpp \
    src/PasswordAuthenticator.hpp \
    src/IAuthenticator.hpp \
    src/KeyAuthenticator.hpp

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
