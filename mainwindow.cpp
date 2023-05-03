#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamegraph.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    game =new GameGraph(this) ;
    this->hide();
    game->show();

}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox box;
    box.setText("旅行者，前面的区域，以后再探索吧！");
    box.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox box;
    box.setText("你离开了蒙德，现在也要踏上自己的旅途了");
    box.exec();
    exit(-1);
}
