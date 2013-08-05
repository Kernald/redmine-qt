#include "RedmineClient.hpp"

#include "KeyAuthenticator.hpp"
#include "PasswordAuthenticator.hpp"

RedmineClient::RedmineClient(QUrl url, QString apiKey, bool checkSsl, QObject* parent) : QObject(parent), _url(url) {
	_authenticator = new KeyAuthenticator(apiKey.toAscii());
}

RedmineClient::RedmineClient(QUrl url, QString login, QString password, bool checkSsl, QObject* parent) : QObject(parent), _url(url) {
	_authenticator = new PasswordAuthenticator(login, password);
}

RedmineClient::~RedmineClient() {
}
