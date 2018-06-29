#include "principalwindow.h"
#include <iostream>

void FenPrincipale::BoldSet()
{    if (CentralZone->subWindowList().isEmpty()){
        errordialog = new QMessageBox;
        errordialog->setText("Vous devez d'abord créer une fenêtre !");
        errordialog->setIcon(QMessageBox::Warning);
        errordialog->show();
    }
    else
    {
    TextWindow->setFontWeight(QFont::Bold);
    }
}

void FenPrincipale::NormalSet()
{
    if (CentralZone->subWindowList().isEmpty()){
        errordialog = new QMessageBox;
        errordialog->setText("Vous devez d'abord créer une fenêtre !");
        errordialog->setIcon(QMessageBox::Warning);
        errordialog->show();
    }
    else
    {
    TextWindow->setFontWeight(QFont::Normal);
    TextWindow->setTextColor(Qt::black);
    TextWindow->setFontUnderline(0);
    TextWindow->setFontItalic(0);
    }
}

void FenPrincipale::mettreEnSouligne()
{
    if (CentralZone->subWindowList().isEmpty()){
        errordialog = new QMessageBox;
        errordialog->setText("Vous devez d'abord créer une fenêtre !");
        errordialog->setIcon(QMessageBox::Warning);
        errordialog->show();
    }
    else
    {
    TextWindow->setFontUnderline(1);
    }
}

void FenPrincipale::mettreEnItalique()
{
    if (CentralZone->subWindowList().isEmpty()){
        errordialog = new QMessageBox;
        errordialog->setText("Vous devez d'abord créer une fenêtre !");
        errordialog->setIcon(QMessageBox::Warning);
        errordialog->show();
    }
    else
    {
    TextWindow->setFontItalic(1);
    }
}

void FenPrincipale::GestionTaille(int textsize)
{
    if (CentralZone->subWindowList().isEmpty()){
        errordialog = new QMessageBox;
        errordialog->setText("Vous devez d'abord créer une fenêtre !");
        errordialog->setIcon(QMessageBox::Warning);
        errordialog->show();
    }
    else
    {
    TextWindow->setFontWeight(QFont::Normal);
    TextWindow->setFontPointSize(textsize);
    }
}

void FenPrincipale::changer_couleur()
{
    if (CentralZone->subWindowList().isEmpty()){
        errordialog = new QMessageBox;
        errordialog->setText("Vous devez d'abord créer une fenêtre !");
        errordialog->setIcon(QMessageBox::Warning);
        errordialog->show();
    }
    else
    {
    QColor couleur = QColorDialog::getColor(Qt::white, this);
    TextWindow->setTextColor(couleur);
    }
}
