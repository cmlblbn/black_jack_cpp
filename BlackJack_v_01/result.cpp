#include "result.h"
#include "ui_result.h"
#include <unistd.h>
#include <QString>
Result::Result(int mainScore,int second,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);
    this->mainScore = mainScore;
    this->second = second;
    ui->message_label->setText("Tebrikler! Saniye:" + QString::number(this->second) +" Score:" + QString::number(this->mainScore) + "\nOyunu yeniden başlatmak için Restart buttonuna basınız");
    this->setWindowTitle(QString("Result"));
}

Result::~Result()
{
    delete ui;

}

