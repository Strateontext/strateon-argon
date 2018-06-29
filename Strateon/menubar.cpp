#include "principalwindow.h"
#include <iostream>


void FenPrincipale::MenuFuction() {

    File = menuBar()->addMenu("Fichier");
    //Creating actions
    actionNew = File->addAction("Nouvelle fenêtre");
    actionNew->setShortcut(QKeySequence("Ctrl+N"));
    File->addAction(actionNew);

    actionQuit = File->addAction("Fermer");
    actionQuit->setShortcut(QKeySequence("Ctrl+Q"));
    File->addAction(actionQuit);

    actionSave = File->addAction("Sauvegarder");
    actionSave->setShortcut(QKeySequence("Ctrl+S"));
    File->addAction(actionSave);

    actionOpen = File->addAction("Ouvrir");
    actionOpen->setShortcut(QKeySequence(""));
    File->addAction(actionOpen);

    connect(actionOpen, &QAction::triggered, this, &FenPrincipale::ouvrir);
    connect(actionNew, &QAction::triggered, this, &FenPrincipale::SecondWindow);
    connect(actionQuit, &QAction::triggered, this, &QApplication::quit);
    connect(actionSave, &QAction::triggered, this, &FenPrincipale::SavingText);

    QMenu *Edit = menuBar()->addMenu("Éditer");
    Edit->addAction("Police");
    QMenu *View = menuBar()->addMenu("Affichage");
    View->addAction("Nouveau");
    QMenu *Window = menuBar()->addMenu("Fenêtre");
    Window->addAction("Plein écran");

}
