#ifndef RESULT_H
#define RESULT_H

#include <QWidget>

namespace Ui {
class Result;
}

class Result : public QWidget
{
    Q_OBJECT

public:
    explicit Result(int mainScore,int second,QWidget *parent = nullptr);
    ~Result();

private:
    Ui::Result *ui;
    int mainScore;
    int second;
};

#endif // RESULT_H
