#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>

void FenPrincipale::RenderWindow() {

    view = new  QWebEngineView;
    QMdiSubWindow *SubWindowMake = CentralZone->addSubWindow(view);
    SubWindowMake->show();
    SubWindowMake->setWindowTitle("Visualisteur de code");

}
void FenPrincipale::openhtml()
{
    RenderWindow();
    QUrl nomFichier = QFileDialog:: getOpenFileUrl(this, "Ouvrir un fichier", QUrl());
    view -> load (nomFichier);
}
