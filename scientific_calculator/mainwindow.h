#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnMainPage_clicked();

    void on_BtnNormCalc_clicked();

    void on_BtnComplexCalc_clicked();

    void on_BtnVectorCalc_clicked();

    void on_BtnMatrixCalc_clicked();

    void on_BtnStatCalc_clicked();

    void on_BtnCalculusCalc_clicked();

    void on_BtnFuncCalc_clicked();

private:
    Ui::MainWindow *ui;


private:
    void ConnectBtn();

};
#endif // MAINWINDOW_H
