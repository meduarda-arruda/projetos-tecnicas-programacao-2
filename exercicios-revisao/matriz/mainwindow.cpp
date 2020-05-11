#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Matriz.h"
#include "QInputDialog"


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


void MainWindow::on_pushButton_Criar_clicked()
{
   int a,b;
   a=ui->line_linhasMatA->text().toInt();
   b=ui->line_colunasMatA->text().toInt();
    matA = new TP2::Matriz(a,b);
   for (int l=0; l< a; l++){
       for (int c=0; c<b;c++){
           int elemento = QInputDialog::getInt(this , "Leitura", "Matriz A ["+ QString::number(l)+","+QString::number(c)+"] = ");
           matA->setElemento(elemento,l,c);
       }
       ui->textEdit_MatA->setText(matA->getMatriz());
   }
}
