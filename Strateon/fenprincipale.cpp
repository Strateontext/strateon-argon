#include "FenPrincipale.h"



void FenPrincipale::SecondWindow() {

    QTextEdit *TextWindow = new QTextEdit;
    QMdiSubWindow *SubWindowMake = m_CentralZone->addSubWindow(TextWindow);
    SubWindowMake->show();
    SubWindowMake->setWindowTitle("fen");



}




FenPrincipale::FenPrincipale()
{

    QMenu *File = menuBar()->addMenu("Fichier");


    //Creating actions

    QAction *actionNouv = File->addAction("Nouvelle fenêtre");
    actionNouv->setShortcut(QKeySequence("Ctrl+N"));
    File->addAction(actionNouv);

    QAction *actionTest = File->addAction("Nouveau test");
    actionTest->setShortcut(QKeySequence("Ctrl+T"));
    File->addAction(actionTest);

    QAction *actionLeave = File->addAction("Fermer");
    actionLeave->setShortcut(QKeySequence("Ctrl+Q"));
    File->addAction(actionLeave);




    connect(actionNouv, &QAction::triggered, this, &FenPrincipale::SecondWindow);
    //connect(actionTest, &QAction::triggered, this, &FenPrincipale::function);
    connect(actionLeave, &QAction::triggered, this, &QApplication::quit);





    //Création des pages de texte
    m_CentralZone = new QMdiArea;
    QMdiSubWindow *SubWindow = m_CentralZone->addSubWindow(new QTextEdit);
    SubWindow->setWindowTitle("fen");

    //Création du menu

                                                /*
                                                    QMenu *Nouveau = File->addMenu("Nouveau");
                                                        Nouveau->addAction("Projet");
                                                        Nouveau->addAction("Fichier");
                                                    QAction *Enregistrer = File->addAction("Enregistrer");
                                                    QMenu *Enregistrersous = File->addMenu("Enregistrer sous...");
                                                    QMenu *Ouvrir = File->addMenu("Ouvrir...");
                                                    QMenu *Récent = File->addMenu("Récent");
                                                    QMenu *Partager = File->addMenu("Partager");
                                                */



    QMenu *Edit = menuBar()->addMenu("Éditer");

    Edit->addAction("Police");

    QMenu *View = menuBar()->addMenu("Affichage");
    View->addAction("Nouveau");

    QMenu *Window = menuBar()->addMenu("Fenêtre");
    Window->addAction("Plein écran");

    //Création de la toolbar

    QToolBar *toolBar = addToolBar("ToolBar");


    //ToolBar Widgets
    QPushButton *ButtonWindow = new QPushButton("Fenêtre", this);
    QPushButton *ButtonQuit = new QPushButton("Quitter", this);
    QFontComboBox *PoliceChoice = new QFontComboBox;
    toolBar->addWidget(PoliceChoice);
    toolBar->addWidget(ButtonWindow);
    toolBar->addWidget(ButtonQuit);
    connect(ButtonWindow, &QPushButton::clicked, this, &FenPrincipale::SecondWindow);
    connect(ButtonQuit, &QPushButton::clicked, this, &QApplication::quit);

    setCentralWidget(m_CentralZone);
    setUnifiedTitleAndToolBarOnMac(true);
}



