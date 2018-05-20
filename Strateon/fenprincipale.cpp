#include "FenPrincipale.h"
#include "mafenetre.h"



void FenPrincipale::NouvelleFen() {

    QTextEdit *zoneTexte = new QTextEdit;
    QMdiSubWindow *sousFenetre = m_zoneCentrale->addSubWindow(zoneTexte);

}




FenPrincipale::FenPrincipale()
{

    m_zoneCentrale = new QMdiArea(this);


    //Création des pages de texte
    QMdiArea *zoneCentrale = new QMdiArea;
    QTextEdit *zoneTexte1 = new QTextEdit;
    QMdiSubWindow *sousFenetre1 = zoneCentrale->addSubWindow(zoneTexte1);



    //Création du menu
    QMenu *a = menuBar()->addMenu("Fichier");


    //Nouvelle action

    QAction *actionNouv = a->addAction("Nouvelle fenêtre");
    actionNouv->setShortcut(QKeySequence("Ctrl+N"));
    a->addAction(actionNouv);


    connect(actionNouv, &QAction::triggered, this, &FenPrincipale::NouvelleFen);

    //--------------------------------------------------------------------------


    QAction *actionTest = a->addAction("Nouveau test");
    actionTest->setShortcut(QKeySequence("Ctrl+T"));
    a->addAction(actionTest);


    connect(actionTest, SIGNAL(triggered()), qApp, SLOT(NouvelleFen()));

    //--------------------------------------------------------------------------

    QAction *actionLeave = a->addAction("Fermer");
    actionLeave->setShortcut(QKeySequence("Ctrl+Q"));
    a->addAction(actionLeave);


    connect(actionLeave, SIGNAL(triggered()), qApp, SLOT(quit()));



        QMenu *Nouveau = a->addMenu("Nouveau");
            Nouveau->addAction("Projet");
            Nouveau->addAction("Fichier");
        QAction *Enregistrer = a->addAction("Enregistrer");
        QMenu *Enregistrersous = a->addMenu("Enregistrer sous...");
        QMenu *Ouvrir = a->addMenu("Ouvrir...");
        QMenu *Récent = a->addMenu("Récent");
        QMenu *Partager = a->addMenu("Partager");



    //-------------------------------------------------------------------------//


    QMenu *b = menuBar()->addMenu("Éditer");
    b->addAction("Police");

    QMenu *c = menuBar()->addMenu("Affichage");
    c->addAction("Nouveau");

    QMenu *d = menuBar()->addMenu("Fenêtre");
    d->addAction("Plein écran");

    //Création de la toolbar
    QToolBar *toolBarFichier = addToolBar("Fichier");

    toolBarFichier->addAction(actionNouv);

    setUnifiedTitleAndToolBarOnMac(true);
    QFontComboBox *choixPolice = new QFontComboBox;
    toolBarFichier->addWidget(choixPolice);
    setCentralWidget(zoneCentrale);

}



