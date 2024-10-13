#include <QCoreApplication>
#include <QTcpServer>
#include <QSslCipher>
#include <QtSql>
#include <QSqlDriver>
#include <QSqlResult>
#include <QSqlQuery>
#include <QVariant>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTcpServer tcp_server;
    QSslCipher cipher;

    QSqlDatabase db = QSqlDatabase::database("first_db");
    QSqlQuery query("SELECT NAME, DOB FROM EMPLOYEES", db);
    QVariant v = query.result()->handle();

    return a.exec();
}
