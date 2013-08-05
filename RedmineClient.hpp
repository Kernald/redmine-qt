#ifndef __REDMINE_CLIENT_HPP__
#define __REDMINE_CLIENT_HPP__

class IAuthenticator;

#include "redmine-qt_global.hpp"

#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QUrl>

class REDMINEQTSHARED_EXPORT RedmineClient : public QObject {

	Q_OBJECT

public:
	RedmineClient(QUrl url, QString apiKey, bool checkSsl = true, QObject* parent = NULL);
	RedmineClient(QUrl url, QString login, QString password, bool checkSsl = true, QObject* parent = NULL);
	virtual ~RedmineClient();

private:
	QUrl			_url;
	IAuthenticator*	_authenticator;
};

#endif // __REDMINE_CLIENT_HPP__
