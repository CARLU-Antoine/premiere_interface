#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void monAction();


private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    int compteur = 0;
};
#endif // MAINWINDOW_H
