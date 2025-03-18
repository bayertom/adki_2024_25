#include "mainform.h"
#include "ui_mainform.h"
#include "algorithms.h"

MainForm::MainForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainForm)
{
    ui->setupUi(this);
}

MainForm::~MainForm()
{
    delete ui;
}


void MainForm::on_actionOpen_triggered()
{

}


void MainForm::on_actionMBR_triggered()
{
    //Create minimum bounding rectangle

    //Get data
    QPolygonF building = ui->Canvas->getBuilding();

    //Run function data
    QPolygonF maer = Algorithms::createMAER(building);

    //Set results
    ui->Canvas->setER(maer);

    //Repaint
    repaint();
}


void MainForm::on_actionPCA_triggered()
{
    //Create bounding rectangle using PCA

    //Get data
    QPolygonF building = ui->Canvas->getBuilding();

    //Run function data
    QPolygonF er = Algorithms::createERPCA(building);

    //Set results
    ui->Canvas->setER(er);

    //Repaint
    repaint();
}

