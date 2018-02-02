#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "renderarea.h"
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    update_ui();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_ui(){
    this->ui->spinScale->setValue(this->ui->renderArea->getScale());
    this->ui->spinInterval->setValue(this->ui->renderArea->getIntervalLength());
    this->ui->spinCount->setValue(this->ui->renderArea->getStepCount());
}

void MainWindow::on_btnAstroid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Astroid);
    update_ui();
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Cycloid);
    update_ui();
    this->ui->renderArea->repaint();

}

void MainWindow::on_btnHuygens_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::HuygensCycloid);
    update_ui();
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHypo_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::HypoCycloid);
    update_ui();
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnLine_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Line);
    update_ui();
    this->ui->renderArea->repaint();
}

void MainWindow::on_spinScale_valueChanged(double scale)
{
    this->ui->renderArea->setScale(scale);
    this->ui->renderArea->repaint();
}

void MainWindow::on_spinInterval_valueChanged(double intervalLength)
{
    this->ui->renderArea->setIntervalLength(intervalLength);
    this->ui->renderArea->repaint();

}

void MainWindow::on_spinCount_valueChanged(int stepCount)
{
    this->ui->renderArea->setStepCount(stepCount);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnBackgroundColor_clicked()
{
    QColor color = QColorDialog::getColor(this->ui->renderArea->getBackgroundColor(), this, "Select Background Color");
    this->ui->renderArea->setBackgroundColor(color);
}

void MainWindow::on_btnLineColor_clicked()
{
    QColor color = QColorDialog::getColor(this->ui->renderArea->getShapeColor(), this, "Select Background Color");
    this->ui->renderArea->setShapeColor(color);
}

void MainWindow::on_btnCircle_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Circle);
    update_ui();
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnEllipse_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Ellipse);
    update_ui();
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnFunny_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Funny);
    update_ui();
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnStar_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Star);
    update_ui();
    this->ui->renderArea->repaint();
}
