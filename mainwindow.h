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
    QTimer* timer;
    int countdown;

private slots:
    void on_pushButtonCtoF_clicked();

    void on_pushButtonFtoC_clicked();
    void update();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
