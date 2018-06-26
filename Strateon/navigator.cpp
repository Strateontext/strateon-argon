#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>

void FenPrincipale::RenderWindow() {

    view = new  QWebEngineView;
    QMdiSubWindow *SubWindowMake = CentralZone->addSubWindow(view);



    SubWindowMake->show();
    SubWindowMake->setWindowTitle("Visualisteur de code");

    UrlEdit = new QLineEdit;

    UrlEdit->show();

}

void FenPrincipale::SetUrl()
{
    QUrl UrlSearch = UrlEdit->text();
    view -> load (UrlSearch);
}

void FenPrincipale::openhtml()
{


    RenderWindow();
    QUrl nomFichier = QFileDialog:: getOpenFileUrl(this, "Ouvrir un fichier", QUrl());


        view -> load (nomFichier);


}
