#ifndef __I_AUTHENTICATOR_HPP__
#define __I_AUTHENTICATOR_HPP__

class QNetworkRequest;

#include "redmine-qt_global.hpp"

/* Authenticator interface.
 *
 * Handle the authentication for a given network request.
 */
class REDMINEQTSHARED_EXPORT IAuthenticator {
public:
	virtual ~IAuthenticator() {}

	virtual void addAuthentication(QNetworkRequest* request) = 0;
};

#endif // __I_AUTHENTICATOR_HPP__
