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


void MainWindow::on_pushButton_clicked()
{
    Esfera executar;

    executar.setRaio(ui->lineEdit_raio->text().toFloat());

    QString saida = "RESULTADO \n";
    saida+= "RAIO: " + QString::number(executar.getRaio()) + "\n";
    saida+= "AREA: " + QString::number(executar.calcular_area()) + "\n";
    saida+= "VOLUME: " + QString::number(executar.calcular_volume()) + "\n";

    ui->textEdit_resultado->setText(saida);

}
