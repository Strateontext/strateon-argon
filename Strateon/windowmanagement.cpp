#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>

void FenPrincipale::SavingText()
    {
        SecondWindow();
        QString texteEnHtml = TextWindow->toHtml();
        QString nomFichier = QFileDialog::getSaveFileName(this, "Enregistrer...", "Sans titre 1.txt");
        QFile fichier(nomFichier);

        if (fichier.open(QIODevice::WriteOnly))
        {
            QTextStream out(&fichier);
            out << texteEnHtml;
            setWindowTitle(nomFichier + " - Strateon V1 - Argon ");

        }
    }

void FenPrincipale::ouvrir()
{
    SecondWindow();
    QString nomFichier = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString());
    QFile fichier(nomFichier);
    if (fichier.open(QIODevice::ReadOnly))
    {
        TextWindow->setText(fichier.readAll());
        setWindowTitle(nomFichier + " - Strateon V1 - Argon ");
    }
}

void FenPrincipale::SecondWindow() {

    TextWindow = new QTextEdit;
    SubWindowMake = CentralZone->addSubWindow(TextWindow);
    SubWindowMake->show();
    SubWindowMake->setWindowTitle("fenêtre");
    SubWindowMake->setMinimumHeight(623);
    SubWindowMake->setMinimumWidth(803);
    highlighter = new Highlighter(TextWindow->document());
    slider->setValue(61);
    slider->setValue(60);
    sizeslider->setValue(21);
    sizeslider->setValue(20);

}

void FenPrincipale::OpacitySlider(int value) {

    int valeur = value*100/200;
    SubWindowMake->setStyleSheet(QString{"background-color: rgba(255, 255, 255, "} + QString::number(valeur) + "%); border: 1px solid grey; border-radius: 4px");

}








