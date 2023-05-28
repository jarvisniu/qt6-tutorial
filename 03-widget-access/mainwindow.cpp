#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_calcButton_clicked()
{
    QString numAStr = ui->numAEdit->text();      // 从文本框中获取数字 A 的字符串值
    QString numBStr = ui->numBEdit->text();      // 从文本框中获取数字 B 的字符串值
    double numA = numAStr.toDouble();            // 转换数字 A 的值类型为数字
    double numB = numBStr.toDouble();            // 转换数字 B 的值类型为数字
    double numSum = numA + numB;                 // 计算两数之和
    QString numSumStr = QString::number(numSum); // 将和的类型转换为字符串
    ui->ansLabel->setText(numSumStr);            // 将和字符串显示到标签中
}
