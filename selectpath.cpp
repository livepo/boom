#include "selectpath.h"
#include "ui_selectpath.h"

SelectPath::SelectPath(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectPath)
{
    ui->setupUi(this);
    filemodel = new QFileSystemModel(this);
    QString spath = "/home/ishamo";
    filemodel->setRootPath(spath);
    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    ui->treeView->setModel(filemodel);
}

SelectPath::~SelectPath()
{
    delete ui;
}
