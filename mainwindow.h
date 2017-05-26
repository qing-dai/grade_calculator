#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
signals:
    
    public slots:
    void update_overall(int);
    
    private slots:
    void on_hw1_slider_valueChanged(int value);
    void on_hw2_slider_valueChanged(int value);
    void on_hw3_slider_valueChanged(int value);
    void on_hw4_slider_valueChanged(int value);
    void on_hw5_slider_valueChanged(int value);
    void on_hw6_slider_valueChanged(int value);
    void on_hw7_slider_valueChanged(int value);
    void on_hw8_slider_valueChanged(int value);
    
    void on_mid1slider_valueChanged(int value);
    void on_mid2slider_valueChanged(int value);
    void on_finalslider_valueChanged(int value);
    
    void on_hw1_score_valueChanged(double arg1);
    void on_hw2_score_valueChanged(double arg1);
    void on_hw3_score_valueChanged(double arg1);
    void on_hw4_score_valueChanged(double arg1);
    void on_hw5_score_valueChanged(double arg1);
    void on_hw6_score_valueChanged(double arg1);
    void on_hw7_score_valueChanged(double arg1);
    void on_hw8_score_valueChanged(double arg1);
    
    void on_mid1_score_valueChanged(double arg1);
    void on_mid2_score_valueChanged(double arg1);
    void on_final_score_valueChanged(double arg1);
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
