QT       += network xml
QT       -= gui

TARGET = qtredmine
TEMPLATE = lib

DEFINES += REDMINEQT_LIBRARY

SOURCES += \
	RedmineClient.cpp \
	PasswordAuthenticator.cpp \
	KeyAuthenticator.cpp

HEADERS += \
        redmine-qt_global.hpp \
	RedmineClient.hpp \
	PasswordAuthenticator.hpp \
	IAuthenticator.hpp \
	KeyAuthenticator.hpp

