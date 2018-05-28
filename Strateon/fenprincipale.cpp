#include "FenPrincipale.h"
#include <iostream>


void FenPrincipale::SecondWindow() {

    TextWindow = new QTextEdit;
    QMdiSubWindow *SubWindowMake = m_CentralZone->addSubWindow(TextWindow);
    SubWindowMake->show();
    SubWindowMake->setWindowTitle("fen");
    SubWindowMake->setStyleSheet("background:white;");
    QString maketest = "test";

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

    QAction *actionSave = File->addAction("Sauvegarder");
    actionSave->setShortcut(QKeySequence("Ctrl+S"));
    File->addAction(actionSave);

    QAction *actionGras = File->addAction("Mettre en gras");
    actionGras->setShortcut(QKeySequence(""));
    File->addAction(actionGras);

    QAction *actionNormal = File->addAction("Mettre en normal");
    actionNormal->setShortcut(QKeySequence(""));
    File->addAction(actionNormal);

    QAction *actionColor = File->addAction("Mettre en couleur");
    actionColor->setShortcut(QKeySequence(""));
    File->addAction(actionColor);


    connect(actionGras, &QAction::triggered, this, &FenPrincipale::mettreEnGras);
    connect(actionNormal, &QAction::triggered, this, &FenPrincipale::mettreEnNormal);
    connect(actionColor, &QAction::triggered, this, &FenPrincipale::changer_couleur);


    connect(actionNouv, &QAction::triggered, this, &FenPrincipale::SecondWindow);
    //connect(actionTest, &QAction::triggered, this, &FenPrincipale::function);
    connect(actionLeave, &QAction::triggered, this, &QApplication::quit);
    connect(actionSave, &QAction::triggered, this, &FenPrincipale::SavingText);




    //Création des pages de texte
    m_CentralZone = new QMdiArea;


    //Création du menu

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
    QPushButton *ButtonSave = new QPushButton("Sauvegarder", this);
    QFontComboBox *PoliceChoice = new QFontComboBox;
    toolBar->addWidget(PoliceChoice);
    toolBar->addWidget(ButtonWindow);
    toolBar->addWidget(ButtonQuit);
    toolBar->addWidget(ButtonSave);
    connect(ButtonWindow, &QPushButton::clicked, this, &FenPrincipale::SecondWindow);
    connect(ButtonQuit, &QPushButton::clicked, this, &QApplication::quit);
    connect(ButtonSave, &QPushButton::clicked, this, &FenPrincipale::SavingText);



    ButtonWindow->setMinimumWidth(70);
    ButtonQuit->setMinimumWidth(70);
    ButtonWindow->setMinimumHeight(25);
    ButtonQuit->setMinimumHeight(25);
    PoliceChoice->setMinimumWidth(350);
    PoliceChoice->setMinimumHeight(25);
    toolBar->setMinimumHeight(50);


    setCentralWidget(m_CentralZone);
    setUnifiedTitleAndToolBarOnMac(true);


}


void FenPrincipale::SavingText() {


    QString textsave = TextWindow->toHtml();
    QString chemin = "/Users/LaurentBESSEL/Desktop/text.html";
    QFile fichier(chemin);
    fichier.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream flux(&fichier);
    flux << textsave;
    fichier.close();
}

void FenPrincipale::mettreEnGras()
{

   TextWindow->setFontWeight(QFont::Bold);
}

void FenPrincipale::mettreEnNormal()
{

   TextWindow->setFontWeight(QFont::Normal);
}

void FenPrincipale::changer_couleur()
{
    QColor couleur = QColorDialog::getColor(Qt::white, this); // Ici ta variable va donc stocker la réponse du dialogue qui renverra un QColor

    TextWindow->setTextColor(couleur); // Lequel nous passons à la fonction setTextColor qui définit la couleur du texte
}
