#include "KeyAuthenticator.hpp"

#include <QtNetwork/QNetworkRequest>

KeyAuthenticator::KeyAuthenticator(QByteArray apiKey) : _apiKey(apiKey) {
}

void KeyAuthenticator::addAuthentication(QNetworkRequest* request) {
	request->setRawHeader("X-Redmine-API-Key", _apiKey);
}
