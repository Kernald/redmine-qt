#ifndef __PASSWORD_AUTHENTICATOR_HPP__
#define __PASSWORD_AUTHENTICATOR_HPP__

#include "IAuthenticator.hpp"
#include "redmine-qt_global.hpp"

#include <QtCore/QString>

class REDMINEQTSHARED_EXPORT PasswordAuthenticator : public IAuthenticator {
public:
	PasswordAuthenticator(QString login, QString password);
	virtual ~PasswordAuthenticator() {}

	virtual void addAuthentication(QNetworkRequest* request);

private:
	QString	_login;
	QString	_password;
};

#endif // __PASSWORD_AUTHENTICATOR_HPP__
