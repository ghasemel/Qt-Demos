#include "mainview.h"
#include "ui_mainview.h"

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    //ui->w_exitBtn->setText("Exit Now");
    //connect(ui->w_exitBtn, SIGNAL(clicked()), SLOT(close()));
}

MainView::~MainView()
{
    delete ui;
}

void MainView::on_w_exitBtn_clicked()
{

}
