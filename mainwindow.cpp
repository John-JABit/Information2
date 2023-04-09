#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>

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

//Covid vaccine information button
void MainWindow::on_commandLinkButton_clicked()
{
    QString link="https://covid19.govt.nz/covid-19-vaccines/get-your-covid-19-vaccination/";
    QDesktopServices::openUrl(QUrl(link));
}

//Boosters information button
void MainWindow::on_commandLinkButton_2_clicked()
{
    QString link="https://covid19.govt.nz/covid-19-vaccines/covid-19-vaccine-boosters/";
    QDesktopServices::openUrl(QUrl(link));
}

//Updates button
void MainWindow::on_commandLinkButton_3_clicked()
{
    QString link="https://covid19.govt.nz/news-and-data/latest-news/";
    QDesktopServices::openUrl(QUrl(link));
}

//Symptoms button
void MainWindow::on_commandLinkButton_4_clicked()
{
    QString link="https://covid19.govt.nz/prepare-and-stay-safe/about-covid-19/covid-19-symptoms/";
    QDesktopServices::openUrl(QUrl(link));
}

