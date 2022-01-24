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
    explicit leaderboard(QWidget *parent = nullptr);
    ~leaderboard();


private:

    Ui::leaderboard *ui;

};

#endif // LEADERBOARD_H
