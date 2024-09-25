#include "connector.h"

Connector::Connector(QObject *parent)
    : QObject{parent}
{
    _socket = new QTcpSocket(this);
    connect(_socket, &QTcpSocket::connected, this, &Connector::connected);
    connect(_socket, &QTcpSocket::readyRead, this, &Connector::readyRead);
    connect(_socket, &QTcpSocket::errorOccurred, this, &Connector::errorOccurred);
}

void Connector::readyRead()
{

}

void Connector::errorOccurred(QAbstractSocket::SocketError socketError)
{
    QMessageBox msgBox;
    msgBox.setText("Ошибка сети");
    msgBox.exec();
}
