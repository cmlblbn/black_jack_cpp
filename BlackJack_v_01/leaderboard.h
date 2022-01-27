#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QWidget>

namespace Ui {
class leaderboard;
}

class leaderboard : public QWidget
{
    Q_OBJECT

public:
    explicit leaderboard(QString database_data,QWidget *parent = nullptr);
    ~leaderboard();

    //Verileri düzgün şekilde ekrana yükleyecek
    bool loadData(QString data);

private:

    Ui::leaderboard *ui;

};

#endif // LEADERBOARD_H
