/*
#Digital Clock v.3 Copyright (c) 2018 JJ Posti <techtimejourney.net>
#Digital Clock comes with ABSOLUTELY NO WARRANTY;
#for details see: http://www.gnu.org/copyleft/gpl.html.
#This is free software, and you are welcome to redistribute it under
#GPL Version 2, June 1991
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Make frameless window.
     MainWindow::setWindowFlags(Qt::FramelessWindowHint);

     //Setup timer that watches the clock and updates it.
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();
}

//The actual timer function.
void MainWindow::showTime(){

   QTime time = QTime::currentTime();
   QString text = time.toString("hh: mm");
   ui->time->setText(text);
}

MainWindow::~MainWindow()
{
    delete ui;
}
