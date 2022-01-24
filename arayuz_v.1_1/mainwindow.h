#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "playedgame.h"
#include <QMainWindow>
#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_playButton_clicked();

private:
    QString player_name = "UNKNOWN";
    Ui::MainWindow *ui;
    PlayedGame *play;
};
#endif // MAINWINDOW_H
