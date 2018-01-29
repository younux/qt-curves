#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "renderarea.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAstroid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Astroid);
    this->ui->renderArea->setBackgroundColor(Qt::red);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::Cycloid);
    this->ui->renderArea->setBackgroundColor(Qt::green);
    this->ui->renderArea->repaint();

}

void MainWindow::on_btnHuygens_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::HuygensCycloid);
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHypo_clicked()
{
    this->ui->renderArea->setShape(RenderArea::ShapeType::HypoCycloid);
    this->ui->renderArea->setBackgroundColor(Qt::yellow);
    this->ui->renderArea->repaint();
}
