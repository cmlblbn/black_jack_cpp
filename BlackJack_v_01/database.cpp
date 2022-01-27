#include "database.h"
#include <QCoreApplication>
#include <QDebug>


Database::Database(QString dataBaseName, QString app_name):
    QSqlDatabase()
{
    QSqlQuery s;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString absolutePath = this->setPath() + app_name +"/" + dataBaseName;
    qDebug() << absolutePath;
    db.setDatabaseName(absolutePath);

    if(!db.open()){
        qDebug() << "has failed..";
    }


}

Database::~Database(){
    if(db.open())
    {
        db.close();
    }
}

QString Database::setPath()
{
    //Database için path oluştur.

    QString absolute_path = "";
    QString executable_path = QDir::currentPath();
    QStringList pieces_path =  executable_path.split("/");
    pieces_path.pop_back();
    for(int i = 0; i < pieces_path.length(); i++)
    {
        absolute_path = absolute_path + pieces_path[i] + "/";
    }

    qDebug() << absolute_path;
    return absolute_path;
}

QString Database::getData()
{
    /*
        Tum databaseyi string halinde doner.
        @Parameter:
            None
        @Return:
            QString: "araf/7/25|enes/3/56|faruk/99/1..."
    */
    QString data="";
    int counter = 1;
    QString qselect = "SELECT * FROM LeaderBoard ORDER BY Score DESC,Time_second ASC;";
    QSqlQuery query_getdata;

    query_getdata.exec(qselect);
    while (query_getdata.next()) {
        QString order = QString::number(counter);
        QString name = query_getdata.value(1).toString();
        QString salary = query_getdata.value(2).toString();
        QString time = query_getdata.value(3).toString();
        data.push_back(order + "/" +name + "/" +  salary + "/" + time + "|");
        if(counter == 10)
        {
            break;
        }
        counter++;
    }

    return data;
}

void Database::insertData(QString player_name, int score, int time_second)
{
    QSqlQuery query_insertdata;
    query_insertdata.prepare("INSERT INTO Leaderboard (player_name, score, time_second) "
                   "VALUES (:player_name, :score, :time_second)");
    query_insertdata.bindValue(":player_name", player_name);
    query_insertdata.bindValue(":score", score);
    query_insertdata.bindValue(":time_second", time_second);
    query_insertdata.exec();
}
