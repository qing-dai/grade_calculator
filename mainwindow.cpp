#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->dropdown_box, SIGNAL(currentIndexChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->hw1_slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->hw2_slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->hw3_slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->hw4_slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->hw5_slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->hw6_slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->hw7_slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->hw8_slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->mid1slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->mid2slider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    QObject::connect(ui->finalslider, SIGNAL(valueChanged(int)), this, SLOT(update_overall(int)));
    
    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_overall(int) {
    double overall_score = 0.0;
    
    std::vector<double>hw_scores = {ui->hw1_score->value(), ui->hw2_score->value(), ui->hw3_score->value(), ui->hw4_score->value(), ui->hw5_score->value(), ui->hw6_score->value(), ui->hw7_score->value(), ui->hw8_score->value()};
    double hw_score_sum = 0.0;
    for (auto x: hw_scores)
        hw_score_sum += x;
    
    double higher_mid_score = ui->mid1_score->value();
    if (ui->mid2_score->value() > higher_mid_score)
        higher_mid_score = ui->mid2_score->value();
    
    // Schema A
    if(ui->dropdown_box->currentText()=="Schema A") {
        overall_score = (25*hw_score_sum/800) + (0.20*ui->mid1_score->value()) + (0.20*ui->mid2_score->value()) + (0.35*ui->final_score->value());
    }
    // Schema B
    else if(ui->dropdown_box->currentText()=="Schema B") {
        overall_score = (25*hw_score_sum/800) + (0.30*higher_mid_score) + (0.44*ui->final_score->value());
    }
    
    ui->score_output_label->setText(QString::number(overall_score));
    return;
}

void MainWindow::on_hw1_slider_valueChanged(int value)
{
    ui->hw1_score->setValue(value);
}
void MainWindow::on_hw2_slider_valueChanged(int value)
{
    ui->hw2_score->setValue(value);
}
void MainWindow::on_hw3_slider_valueChanged(int value)
{
    ui->hw3_score->setValue(value);
}
void MainWindow::on_hw4_slider_valueChanged(int value)
{
    ui->hw4_score->setValue(value);
}
void MainWindow::on_hw5_slider_valueChanged(int value)
{
    ui->hw5_score->setValue(value);
}
void MainWindow::on_hw6_slider_valueChanged(int value)
{
    ui->hw6_score->setValue(value);
}
void MainWindow::on_hw7_slider_valueChanged(int value)
{
    ui->hw7_score->setValue(value);
}
void MainWindow::on_hw8_slider_valueChanged(int value)
{
    ui->hw8_score->setValue(value);
}


void MainWindow::on_mid1slider_valueChanged(int value)
{
    ui->mid1_score->setValue(value);
}
void MainWindow::on_mid2slider_valueChanged(int value)
{
    ui->mid2_score->setValue(value);
}
void MainWindow::on_finalslider_valueChanged(int value)
{
    ui->final_score->setValue(value);
}


void MainWindow::on_hw1_score_valueChanged(double arg1)
{
    ui->hw1_slider->setValue(arg1);
}
void MainWindow::on_hw2_score_valueChanged(double arg1)
{
    ui->hw2_slider->setValue(arg1);
}
void MainWindow::on_hw3_score_valueChanged(double arg1)
{
    ui->hw3_slider->setValue(arg1);
}
void MainWindow::on_hw4_score_valueChanged(double arg1)
{
    ui->hw4_slider->setValue(arg1);
}
void MainWindow::on_hw5_score_valueChanged(double arg1)
{
    ui->hw5_slider->setValue(arg1);
}
void MainWindow::on_hw6_score_valueChanged(double arg1)
{
    ui->hw6_slider->setValue(arg1);
}
void MainWindow::on_hw7_score_valueChanged(double arg1)
{
    ui->hw7_slider->setValue(arg1);
}
void MainWindow::on_hw8_score_valueChanged(double arg1)
{
    ui->hw8_slider->setValue(arg1);
}


void MainWindow::on_mid1_score_valueChanged(double arg1)
{
    ui->mid1slider->setValue(arg1);
}
void MainWindow::on_mid2_score_valueChanged(double arg1)
{
    ui->mid2slider->setValue(arg1);
}
void MainWindow::on_final_score_valueChanged(double arg1)
{
    ui->finalslider->setValue(arg1);
}
