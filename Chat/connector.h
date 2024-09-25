#ifndef CONNECTOR_H
#define CONNECTOR_H

#include <QObject>
#include <QTcpSocket>
#include <QMessageBox>

class Connector : public QObject
{
    Q_OBJECT
public:
    explicit Connector(QObject *parent = nullptr);

signals:
    void connected();

private slots:
    void readyRead();
    void errorOccurred(QAbstractSocket::SocketError socketError);

private:
    QTcpSocket* _socket{};
};

#endif // CONNECTOR_H
