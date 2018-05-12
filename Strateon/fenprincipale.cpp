#include "FenPrincipale.h"
#include <QMainWindow>
#include <QtGui>
#include <QMenu>
#include <QMenuBar>


FenPrincipale::FenPrincipale()
{

    //Création des pages de texte
    QMdiArea *zoneCentrale = new QMdiArea;
    QTextEdit *zoneTexte1 = new QTextEdit;
    QTextEdit *zoneTexte2 = new QTextEdit;
    QMdiSubWindow *sousFenetre1 = zoneCentrale->addSubWindow(zoneTexte1);
    QMdiSubWindow *sousFenetre2 = zoneCentrale->addSubWindow(zoneTexte2);


    //Création du menu
    QMenu *a = menuBar()->addMenu("Fichier");

        QMenu *Nouveau = a->addMenu("Nouveau");
        QAction *Enregistrer = a->addAction("Enregistrer");
        QMenu *Enregistrersous = a->addMenu("Enregistrer sous...");
        QMenu *Ouvrir = a->addMenu("Ouvrir...");
        QMenu *Récent = a->addMenu("Récent");
        QMenu *Partager = a->addMenu("Partager");
        QMenu *Fermer = a->addMenu("Fermer");
    Nouveau->addAction("Projet");
    Nouveau->addAction("Fichier");


    //-------------------------------------------------------------------------//


    QMenu *b = menuBar()->addMenu("Éditer");
    b->addAction("Police");

    QMenu *c = menuBar()->addMenu("Affichage");
    c->addAction("Nouveau");

    QMenu *d = menuBar()->addMenu("Fenêtre");
    d->addAction("Plein écran");

    //Création de la toolbar
    QToolBar *toolBarFichier = addToolBar("Fichier");
    toolBarFichier->addAction("Affichage");
    toolBarFichier->addSeparator();
    setUnifiedTitleAndToolBarOnMac(true);



    setCentralWidget(zoneCentrale);
}

