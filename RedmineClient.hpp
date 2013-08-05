#ifndef __REDMINE_CLIENT_HPP__
#define __REDMINE_CLIENT_HPP__

class IAuthenticator;

#include "redmine-qt_global.hpp"

#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QUrl>

/* Base management class.
 *
 * Handles the connexions to a Redmine instance.
 */
class REDMINEQTSHARED_EXPORT RedmineClient : public QObject {

	Q_OBJECT

public:
	/* Creates a client using an API key authenticator.
	 */
	RedmineClient(QUrl url, QString apiKey, bool checkSsl = true, QObject* parent = NULL);

	/* Creates a client using a login/password authenticator.
	 */
	RedmineClient(QUrl url, QString login, QString password, bool checkSsl = true, QObject* parent = NULL);
	virtual ~RedmineClient();

private:
	QUrl			_url;
	IAuthenticator*	_authenticator;
};

#endif // __REDMINE_CLIENT_HPP__
