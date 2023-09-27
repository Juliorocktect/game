#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
        "background-image:url(\"/home/julio/Bilder/123.jpg\"); background-position: center;");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setCharacter(Mainchar *character) { this->character = character; }
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W)
    {
        QMessageBox message;
        message.setWindowTitle("Nachricht");
        message.setText("Du hast W Gedrückt");
        message.setStandardButtons(QMessageBox::Ok);
        message.exec();
    }
    if (event->key() == Qt::Key_D)
    {
        character->moveRight();
    }
    if (event->key() == Qt::Key_A)
    {
        character->moveLeft();
    }
}
void MainWindow::gravity(Mainchar *character)
{
    character->moveDown();
}