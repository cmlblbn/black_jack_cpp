#include "leaderboard.h"
#include "ui_leaderboard.h"
#include <QDebug>
leaderboard::leaderboard(QString database_data,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::leaderboard)
{
    ui->setupUi(this);
    if(!this->loadData(database_data))
    {
        ui->leaderBoardName->setText("Bir sorun oluştu!");
        ui->leaderBoardName->repaint();
        this->setWindowTitle(QString("BlackJack"));
    }
}

leaderboard::~leaderboard()
{
    delete ui;
}

bool leaderboard::loadData(QString data)
{
    if(data.length() != 0)
    {
        QStringList dataList = data.split("|");
        QString ui_mergedNameData = "\n  ";
        QString ui_mergedScoreData = "\n";
        QString ui_mergedTimeData = "\n";
        for (auto data: dataList)
        {
            QStringList data_pieces = data.split("/");
            if(data_pieces[0] == "")
            {
                break;
            }
            ui_mergedNameData = ui_mergedNameData + data_pieces[0] + ". " + data_pieces[1] + "\n\n  ";
            ui_mergedScoreData = ui_mergedScoreData + data_pieces[2] + "\n\n";
            ui_mergedTimeData  = ui_mergedTimeData  + data_pieces[3] + " sn" + "\n\n";
        }
        ui->leaderBoardName->setText(ui_mergedNameData);
        ui->leaderBoardName->repaint();
        ui->leaderBoardScore->setText(ui_mergedScoreData);
        ui->leaderBoardScore->repaint();
        ui->leaderBoardTime->setText(ui_mergedTimeData);
        ui->leaderBoardName->repaint();
        return true;
    }
    else
    {
        return false;
    }


}
