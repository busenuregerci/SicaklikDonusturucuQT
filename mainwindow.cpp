#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,timer(new QTimer(this))
    ,countdown(0)

{
    ui->setupUi(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::update);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update()
{
    countdown--; // geri sayım için

    if(countdown>0)
    {
        ui->labelSonuc->setText("Geçersiz bir sayı girdiniz! (" + QString::number(countdown)+")");
    }
    else
    {
        ui->labelSonuc->clear(); // labelı temizle
        timer->stop(); // timerı durdur
    }
}

void MainWindow::on_pushButtonCtoF_clicked()
{
    bool ok;

    float celcius = ui->textEdit->toPlainText().toFloat(&ok); //textEditin içindeki değeri al string değeri floata çevir
    if(ok)
    {
        float fahr = (celcius*9/5)+32;

        ui->labelSonuc->setText("Sonuç: "+ QString::number(fahr)+ " F");
    }
    else
    {
        countdown = 3;
        ui->labelSonuc->setText("Geçersiz bir sayı girdiniz! (3)");
        timer->start(1000); // 1 saniyede bir update çağrılır
    }
    ui->textEdit->setPlainText("");
}


void MainWindow::on_pushButtonFtoC_clicked()
{
    bool ok;

    float fahr = ui->textEdit->toPlainText().toFloat(&ok);
    if(ok)
    {
        float celsius =(fahr-32)*5/9;
        ui->labelSonuc->setText("Sonuç: "+ QString::number(celsius)+" C");
    }
    else
    {
        countdown = 3;
        ui->labelSonuc->setText("Geçersiz bir sayı girdiniz! (3)");
        timer->start(1000); // 1 saniyede bir update çağrılır
    }
    ui->textEdit->setPlainText("");
}

