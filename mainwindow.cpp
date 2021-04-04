#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"Nikhitha 212218106067","This is Information Box");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Nikhitha","Do you like apples?");
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Apple","Yes");
    }
    if(reply==QMessageBox::No)
    {
        QMessageBox::information(this,"Apple","No");
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Nikhitha","This is a Custom message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
        if(reply==QMessageBox::Yes)
        {
            qDebug()<<"Nothing Is Displayed";
        }
        if(reply==QMessageBox::YesToAll)
        {
            QMessageBox::warning(this,"Message Display","Display the message with warning as YesToAll");
        }
        if(reply==QMessageBox::NoToAll)
        {
            QMessageBox::warning(this,"No Message Display","Dont Display the message with warning as YesToAll");
        }
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::warning(this,"Critical Message","This is a Warning message!");
}


void MainWindow::on_pushButton_clicked(bool checked)
{
    QIcon *ico = new QIcon();
               ico->addPixmap(QPixmap("C:\\Users\\yeshu\\Downloads\\button1.jpg"),QIcon::Normal,QIcon::On);
               ui->pushButton->setIconSize(QSize(70,70));
               if(QIcon::On==true) {
                   qDebug() <<"Button Checked--ON--";
               }
               else
               {
                   qDebug() <<"Button Checked--OFF--";
               }
               ico->addPixmap(QPixmap("C:\\Users\\yeshu\\Downloads\\buttonoff.jpg"),QIcon::Normal,QIcon::Off);
               ui->pushButton->setIconSize(QSize(70,70));
               ui->pushButton->setIcon(*ico);
               ui->pushButton->setCheckable(true);
}
