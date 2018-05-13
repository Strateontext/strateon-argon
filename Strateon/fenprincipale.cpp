#include "FenPrincipale.h"
#include "mafenetre.h"



void NouvelleFen() {
    QTextEdit *zoneTexte1 = new QTextEdit;    // ...

}



FenPrincipale::FenPrincipale()
{


    //Création des pages de texte
    QMdiArea *zoneCentrale = new QMdiArea;
    QTextEdit *zoneTexte1 = new QTextEdit;
    QMdiSubWindow *sousFenetre1 = zoneCentrale->addSubWindow(zoneTexte1);



    //Création du menu
    QMenu *a = menuBar()->addMenu("Fichier");

    QAction *actionQuitter = a->addAction("&Quitter");
    actionQuitter->setShortcut(QKeySequence("Ctrl+Q"));
    a->addAction(actionQuitter);


    connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));


        QMenu *Nouveau = a->addMenu("Nouveau");
            Nouveau->addAction("Projet");
            Nouveau->addAction("Fichier");
        QAction *Enregistrer = a->addAction("Enregistrer");
        QMenu *Enregistrersous = a->addMenu("Enregistrer sous...");
        QMenu *Ouvrir = a->addMenu("Ouvrir...");
        QMenu *Récent = a->addMenu("Récent");
        QMenu *Partager = a->addMenu("Partager");
        QMenu *Fermer = a->addMenu("Fermer");


    //-------------------------------------------------------------------------//


    QMenu *b = menuBar()->addMenu("Éditer");
    b->addAction("Police");

    QMenu *c = menuBar()->addMenu("Affichage");
    c->addAction("Nouveau");

    QMenu *d = menuBar()->addMenu("Fenêtre");
    d->addAction("Plein écran");

    //Création de la toolbar
    QToolBar *toolBarFichier = addToolBar("Fichier");
    toolBarFichier->addAction(actionQuitter);
    setUnifiedTitleAndToolBarOnMac(true);
    QFontComboBox *choixPolice = new QFontComboBox;
    toolBarFichier->addWidget(choixPolice);
    setCentralWidget(zoneCentrale);

}



