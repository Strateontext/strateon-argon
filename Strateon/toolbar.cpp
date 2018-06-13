#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>

void FenPrincipale::ToolBarCreate() {


    //Création de la toolbar
    toolBar = addToolBar("ToolBar");

    //ToolBar Widgets
    ButtonWindow = new QPushButton("", this);
    ButtonQuit = new QPushButton("", this);
    ButtonSave = new QPushButton("", this);
    ButtonOpen = new QPushButton("", this);
    ButtonGras = new QPushButton("", this);
    ButtonNorm = new QPushButton("", this);
    ButtonColor = new QPushButton("", this);
    ButtonItal = new QPushButton("", this);
    ButtonSoul = new QPushButton("", this);
    ButtonSize = new QPushButton("", this);
    ButtonRenderWindow = new QPushButton("New Html View", this);
    Buttonhtmlview = new QPushButton("Html Open", this);
    UrlLoad = new QPushButton("URL Load", this);
    PoliceChoice = new QFontComboBox;
    progression = new QProgressBar;

    statusBar()->addWidget(progression);
    toolBar->addWidget(PoliceChoice);
    toolBar->addWidget(ButtonNorm);
    toolBar->addWidget(ButtonGras);
    toolBar->addWidget(ButtonItal);
    toolBar->addWidget(ButtonSoul);
    toolBar->addWidget(ButtonSize);
    toolBar->addWidget(ButtonColor);
    toolBar->addWidget(ButtonWindow);
    toolBar->addWidget(ButtonQuit);
    toolBar->addWidget(ButtonSave);
    toolBar->addWidget(ButtonOpen);
    toolBar->addWidget(ButtonRenderWindow);
    toolBar->addWidget(Buttonhtmlview);
    toolBar->addWidget(UrlLoad);

    connect(UrlLoad, &QPushButton::clicked, this, &FenPrincipale::SetUrl);
    connect(Buttonhtmlview, &QPushButton::clicked, this, &FenPrincipale::openhtml);
    connect(ButtonRenderWindow, &QPushButton::clicked, this, &FenPrincipale::RenderWindow);
    connect(ButtonWindow, &QPushButton::clicked, this, &FenPrincipale::SecondWindow);
    connect(ButtonQuit, &QPushButton::clicked, this, &QApplication::quit);
    connect(ButtonSave, &QPushButton::clicked, this, &FenPrincipale::SavingText);
    connect(ButtonOpen, &QPushButton::clicked, this, &FenPrincipale::ouvrir);
    connect(ButtonGras, &QPushButton::clicked, this, &FenPrincipale::BoldSet);
    connect(ButtonNorm, &QPushButton::clicked, this, &FenPrincipale::NormalSet);
    connect(ButtonColor, &QPushButton::clicked, this, &FenPrincipale::changer_couleur);
    connect(ButtonItal, &QPushButton::clicked, this, &FenPrincipale::mettreEnItalique);
    connect(ButtonSoul, &QPushButton::clicked, this, &FenPrincipale::mettreEnSouligné);
    connect(ButtonSize, &QPushButton::clicked, this, &FenPrincipale::GestionTaille);


}
