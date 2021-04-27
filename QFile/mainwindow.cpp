#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QFileDialog>

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



void MainWindow::on_read_clicked()
{
    QFile file("C:/Users/lakshmi pathi.R/OneDrive/Documents/sample.txt");
           if(!file.open(QFile::ReadOnly|QFile::Text))
           {
               QMessageBox::warning(this,"Lakshmi pathi","File not open");
           }
           QTextStream in(&file);
           QString text=in.readAll();
           ui->plainTextEdit->setPlainText(text);
           file.close();
}

void MainWindow::on_write_clicked()
{
    QFile file("C:/Users/lakshmi pathi.R/OneDrive/Documents/sample.txt");
         if(!file.open(QFile::WriteOnly|QFile::Text))
           {
               QMessageBox::warning(this,"Lakshmi pathi","File not open");
           }
           QTextStream out(&file);
           QString text=ui->plainTextEdit->toPlainText();
           out<<text;
           file.flush();
           file.close();
}
