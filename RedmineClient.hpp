#ifndef __REDMINE_CLIENT_HPP__
#define __REDMINE_CLIENT_HPP__

class IAuthenticator;
class QNetworkAccessManager;

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
	enum EMode {
		GET,
		POST,
		PUT,
		DELETE
	};

	/* Creates a client using an API key authenticator.
	 */
	RedmineClient(QUrl url, QString apiKey, bool checkSsl = true, QObject* parent = NULL);

	/* Creates a client using a login/password authenticator.
	 */
	RedmineClient(QUrl url, QString login, QString password, bool checkSsl = true, QObject* parent = NULL);
	virtual ~RedmineClient();

	/* Defines the user agent for the client.
	 */
	void setUserAgent(QByteArray ua);

private:
	/* Commont initialization steps.
	 *
	 * Creates the network access manager.
	 */
	void					init();

	/* Sends a request to the Redmine endpoint.
	 */
	void					sendRequest(QUrl url, EMode mode = GET, const QByteArray& requestData = "");

	QUrl					_url;
	IAuthenticator*			_authenticator;
	QNetworkAccessManager*	_nma;
	QByteArray				_ua;
};

#endif // __REDMINE_CLIENT_HPP__
