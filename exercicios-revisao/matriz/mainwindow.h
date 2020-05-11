#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<Matriz.h>

#include <QMainWindow>

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
    void on_pushButton_Criar_clicked();

private:
    Ui::MainWindow *ui;
    TP2::Matriz *matA;
    TP2::Matriz *matB;
};
#endif // MAINWINDOW_H
