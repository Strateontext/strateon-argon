#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>

void FenPrincipale::SavingText()
    {
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
    QMdiSubWindow *SubWindowMake = CentralZone->addSubWindow(TextWindow);
    SubWindowMake->show();
    SubWindowMake->setWindowTitle("fenêtre");
    SubWindowMake->setStyleSheet("background:white;");
    SubWindowMake->setMinimumHeight(623);
    SubWindowMake->setMinimumWidth(803);

    //floatbut = new QPushButton("URL Load", this);
    //testingbut->show();

}
