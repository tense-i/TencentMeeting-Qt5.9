#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
   // this->setStyleSheet("background-color:white");
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinMaxButtonsHint);

    //btnSet
    ui->btnSet->setText("");
    ui->btnSet->setStyleSheet("QPushButton{background-image:url(:/metting/resources/set.png);border:none}  \ QPushButton::hover{background-color:rgb(99,99,99)} ");
   //btnQuit
    ui->btnQuit->setText("");
    ui->btnQuit->setStyleSheet("QPushButton{background-image:url(:/metting/resources/close.png);border:none}  \ QPushButton::hover{background-color:rgb(99,99,99)} ");
    //btnMin
    ui->btnMin->setText("");
    ui->btnMin->setStyleSheet("QPushButton{background-image:url(:/metting/resources/min.png);border:none}  \ QPushButton::hover{background-color:rgb(99,99,99)} ");

    //labLog
    ui->labLog->clear();
    QPixmap *pix=new QPixmap(":/metting/resources/Snipaste_2023-09-17_12-39-47.png");
    pix->scaled(ui->labLog->size(),Qt::KeepAspectRatio);
    ui->labLog->setScaledContents(true);
    ui->labLog->setPixmap(*pix);

    //bntWeichatLogin
    ui->btnWechatLogin->setText("");
    ui->btnWechatLogin->setStyleSheet("QPushButton{background-image:url(:/metting/resources/weichatlogin.png);border:none}  \ QPushButton::hover{background-color:rgb(99,99,99)} ");

//toolbtnphone
    ui->toolBtnPhone->setIcon(QIcon(":/metting/resources/phonelogin.png"));
    ui->toolBtnPhone->setIconSize(QSize(60,60));
    ui->toolBtnPhone->setText("手机号");
    ui->toolBtnPhone->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->toolBtnPhone->setStyleSheet("border:none");

    //toolbtnENpriseZWeichat
    ui->toolBtnEnpriseWeichat->setIcon(QIcon(":/metting/resources/enpriseweichat.png"));
    ui->toolBtnEnpriseWeichat->setIconSize(QSize(60,60));
    ui->toolBtnEnpriseWeichat->setText("微信登录");
    ui->toolBtnEnpriseWeichat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->toolBtnEnpriseWeichat->setStyleSheet("border:none");

    //toolbtnsso
    ui->toolBtnSso->setIcon(QIcon(":/metting/resources/sso.png"));
    ui->toolBtnSso->setIconSize(QSize(60,60));
    ui->toolBtnSso->setText("SSO");
    ui->toolBtnSso->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    ui->toolBtnSso->setStyleSheet("border:none");

    //lie
   // ui->line->setStyleSheet()
}


Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnQuit_clicked()
{
    this->close();
}


void Dialog::on_btnMin_clicked()
{
    this->showMinimized();
}

