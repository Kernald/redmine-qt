#include "PasswordAuthenticator.hpp"

#include <QtNetwork/QNetworkRequest>

PasswordAuthenticator::PasswordAuthenticator(QString login, QString password) : _login(login), _password(password) {
}

void PasswordAuthenticator::addAuthentication(QNetworkRequest* request) {
	request->setRawHeader("Authorization", "Basic " + QByteArray(QString("%1:%2").arg(_login).arg(_password).toAscii().toBase64()));
}
