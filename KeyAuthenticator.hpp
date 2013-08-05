#ifndef __KEY_AUTHENTICATOR_HPP__
#define __KEY_AUTHENTICATOR_HPP__

#include "IAuthenticator.hpp"
#include "redmine-qt_global.hpp"

#include <QtCore/QByteArray>

/* API key authenticator.
 *
 * Adds an "X-Redmine-API-Key" header, with API key.
 */
class REDMINEQTSHARED_EXPORT KeyAuthenticator : public IAuthenticator {
public:
	KeyAuthenticator(QByteArray apiKey);
	virtual ~KeyAuthenticator() {}

	virtual void addAuthentication(QNetworkRequest* request);

private:
	QByteArray	_apiKey;
};

#endif // __KEY_AUTHENTICATOR_HPP__
