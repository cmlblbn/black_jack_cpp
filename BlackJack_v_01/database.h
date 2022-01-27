#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>


class Database: QSqlDatabase{
private:
    QSqlDatabase db;

public:
    Database(QString dataBaseName = "deneme.sqlite",QString app_name = "db1");
    ~Database();
    // constructor tarafindan cagrilir
    QString setPath();

    // metodlar
    QString getData();
    void insertData(QString player_name, int score, int time_second);

};



#endif // DATABASE_H
