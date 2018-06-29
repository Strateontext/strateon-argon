#include "principalwindow.h"
#include <iostream>
#include <qframe.h>

void FenPrincipale::ToolBarCreate() {

    //Toolbar Creating

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
    Printer = new QPushButton("", this);
    PoliceChoice = new QFontComboBox;
    progression = new QProgressBar;
    sizeslider = new QSlider(Qt::Horizontal);
    sizeslider->setMinimumWidth(70);
    sizeslider->setMaximumWidth(70);
    sizeslider->setMaximum(100);
    slider = new QSlider(Qt::Horizontal);
    slider->setMinimumWidth(200);
    slider->setMaximumWidth(200);
    slider->setMaximum(200);

    toolBar->addWidget(PoliceChoice);
    toolBar->addWidget(ButtonNorm);
    toolBar->addWidget(ButtonGras);
    toolBar->addWidget(ButtonItal);
    toolBar->addWidget(ButtonSoul);
    toolBar->addWidget(sizeslider);
    toolBar->addWidget(ButtonColor);
    toolBar->addWidget(ButtonWindow);
    toolBar->addWidget(ButtonQuit);
    toolBar->addWidget(ButtonSave);
    toolBar->addWidget(ButtonOpen);
    toolBar->addWidget(Printer);

    statusBar()->addWidget(slider);

    connect(slider, &QSlider::valueChanged, this, &FenPrincipale::OpacitySlider);
    connect(sizeslider, &QSlider::valueChanged, this, &FenPrincipale::GestionTaille);
    connect(ButtonWindow, &QPushButton::clicked, this, &FenPrincipale::SecondWindow);
    connect(ButtonQuit, &QPushButton::clicked, this, &QApplication::quit);
    connect(ButtonSave, &QPushButton::clicked, this, &FenPrincipale::SavingText);
    connect(ButtonOpen, &QPushButton::clicked, this, &FenPrincipale::ouvrir);
    connect(ButtonGras, &QPushButton::clicked, this, &FenPrincipale::BoldSet);
    connect(ButtonNorm, &QPushButton::clicked, this, &FenPrincipale::NormalSet);
    connect(ButtonColor, &QPushButton::clicked, this, &FenPrincipale::changer_couleur);
    connect(ButtonItal, &QPushButton::clicked, this, &FenPrincipale::mettreEnItalique);
    connect(ButtonSoul, &QPushButton::clicked, this, &FenPrincipale::mettreEnSouligne);
    connect(Printer, &QPushButton::clicked, this, &FenPrincipale::printfile);


}

