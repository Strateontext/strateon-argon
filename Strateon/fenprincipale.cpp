#include "FenPrincipale.h"
#include <iostream>
#include <QWebEngineView>




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

    QAction *actionItalique = File->addAction("Mettre en italique");
    actionItalique->setShortcut(QKeySequence(""));
    File->addAction(actionItalique);

    QAction *actionsouligné = File->addAction("Mettre en souligné");
    actionsouligné->setShortcut(QKeySequence(""));
    File->addAction(actionsouligné);

    QAction *actionTaille = File->addAction("Choisir la taille");
    actionTaille->setShortcut(QKeySequence(""));
    File->addAction(actionTaille);

    QAction *actionOpen = File->addAction("Ouvrir");
    actionOpen->setShortcut(QKeySequence(""));
    File->addAction(actionOpen);

    QAction *newhtmlview = File->addAction("New Html View");
    newhtmlview->setShortcut(QKeySequence(""));
    File->addAction(newhtmlview);

    QAction *htmlview = File->addAction("New Html View");
    htmlview->setShortcut(QKeySequence(""));
    File->addAction(htmlview);



    connect(htmlview, &QAction::triggered, this, &FenPrincipale::openhtml);
    connect(newhtmlview, &QAction::triggered, this, &FenPrincipale::RenderWindow);
    connect(actionTaille, &QAction::triggered, this, &FenPrincipale::GestionTaille);
    connect(actionGras, &QAction::triggered, this, &FenPrincipale::mettreEnGras);
    connect(actionNormal, &QAction::triggered, this, &FenPrincipale::mettreEnNormal);
    connect(actionColor, &QAction::triggered, this, &FenPrincipale::changer_couleur);
    connect(actionItalique, &QAction::triggered, this, &FenPrincipale::mettreEnItalique);
    connect(actionsouligné, &QAction::triggered, this, &FenPrincipale::mettreEnSouligné);
    connect(actionOpen, &QAction::triggered, this, &FenPrincipale::ouvrir);


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
    QPushButton *ButtonWindow = new QPushButton("", this);
    QPushButton *ButtonQuit = new QPushButton("", this);
    QPushButton *ButtonSave = new QPushButton("", this);
    QPushButton *ButtonOpen = new QPushButton("", this);





    QPushButton *ButtonGras = new QPushButton("", this);
    QPushButton *ButtonNorm = new QPushButton("", this);
    QPushButton *ButtonColor = new QPushButton("", this);
    QPushButton *ButtonItal = new QPushButton("", this);
    QPushButton *ButtonSoul = new QPushButton("", this);
    QPushButton *ButtonSize = new QPushButton("", this);
    QPushButton *ButtonRenderWindow = new QPushButton("New Html View", this);
    QPushButton *Buttonhtmlview = new QPushButton("Html Open", this);
    QPushButton *UrlLoad = new QPushButton("URL Load", this);


    QFontComboBox *PoliceChoice = new QFontComboBox;
    QProgressBar *progression = new QProgressBar;



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


    progression->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");

    ButtonRenderWindow->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");

    Buttonhtmlview->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");

    UrlLoad->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");

    ButtonSave->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/save.png"));
    ButtonSave->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSave->setIconSize(QSize(25.6, 25.6));

    ButtonQuit->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/close.png"));
    ButtonQuit->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonQuit->setIconSize(QSize(25.6, 25.6));

    ButtonOpen->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/open-file.png"));
    ButtonOpen->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonOpen->setIconSize(QSize(25.6, 25.6));

    ButtonWindow->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/new-window.png"));
    ButtonWindow->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonWindow->setIconSize(QSize(25.6, 25.6));

    ButtonGras->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-bold-filled-50.png"));
    ButtonGras->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonGras->setIconSize(QSize(25.6, 25.6));

    ButtonNorm->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-typography-24.png"));
    ButtonNorm->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonNorm->setIconSize(QSize(25.6, 25.6));

    ButtonItal->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-italic-24.png"));
    ButtonItal->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonItal->setIconSize(QSize(25.6, 25.6));

    ButtonSize->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-lowercase-32.png"));
    ButtonSize->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSize->setIconSize(QSize(25.6, 25.6));

    ButtonSoul->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-underline-24.png"));
    ButtonSoul->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSoul->setIconSize(QSize(25.6, 25.6));

    ButtonColor->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/RGB_Circle_1-80_icon-icons.com_57282.png"));
    ButtonColor->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonColor->setIconSize(QSize(25.6, 25.6));



    connect(UrlLoad, &QPushButton::clicked, this, &FenPrincipale::SetUrl);
    connect(Buttonhtmlview, &QPushButton::clicked, this, &FenPrincipale::openhtml);
    connect(ButtonRenderWindow, &QPushButton::clicked, this, &FenPrincipale::RenderWindow);
    connect(ButtonWindow, &QPushButton::clicked, this, &FenPrincipale::SecondWindow);
    connect(ButtonQuit, &QPushButton::clicked, this, &QApplication::quit);
    connect(ButtonSave, &QPushButton::clicked, this, &FenPrincipale::SavingText);
    connect(ButtonOpen, &QPushButton::clicked, this, &FenPrincipale::ouvrir);
    connect(ButtonGras, &QPushButton::clicked, this, &FenPrincipale::mettreEnGras);
    connect(ButtonNorm, &QPushButton::clicked, this, &FenPrincipale::mettreEnNormal);
    connect(ButtonColor, &QPushButton::clicked, this, &FenPrincipale::changer_couleur);
    connect(ButtonItal, &QPushButton::clicked, this, &FenPrincipale::mettreEnItalique);
    connect(ButtonSoul, &QPushButton::clicked, this, &FenPrincipale::mettreEnSouligné);
    connect(ButtonSize, &QPushButton::clicked, this, &FenPrincipale::GestionTaille);


    PoliceChoice->setMinimumWidth(350);
    PoliceChoice->setMinimumHeight(25);
    PoliceChoice->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    toolBar->setMinimumHeight(70);
    progression->setMaximumWidth(100);
    progression->setMinimumHeight(20);






    setCentralWidget(m_CentralZone);
    setUnifiedTitleAndToolBarOnMac(true);




    QSpinBox* spinBox = new QSpinBox(parentWidget); // the spinbox is the parent of the popup,
    ctkPopupWidget* popup = new ctkPopupWidget(spinBox); // the popup is placed relative to the spinbox
    QHBoxLayout* popupLayout = new QHBoxLayout(popup);
    // populate the popup with a vertical QSlider:
    QSlider* popupSlider = new QSlider(Qt::Vertical, popup);
    // add here the signal/slot connection between the slider and the spinbox
    popupLayout->addWidget(popupSlider); // Control where to display the the popup relative to the parent
    popupSlider->setAlignment(Qt::Left | Qt::Top); // at the top left corner
    popupSlider->setHorizontalDirection( Qt::RightToLeft ); // open outside the parent
    popupSlider->setVerticalDirection(ctkBasePopupWidget::TopToBottom); // at the left of the spinbox sharing the top border
    // Control the animation
    popupSlider->setAnimationEffect(ctkBasePopupWidget::ScrollEffect); // could also be FadeEffect
    popupSlider->setOrientation(Qt::Horizontal); // how to animate, could be Qt::Vertical or Qt::Horizontal|Qt::Vertical
    popupSlider->setEasingCurve(QEasingCurve::OutQuart); // how to accelerate the animation, QEasingCurve::Type
    popupSlider->setEffectDuration(100); // how long in ms.
    // Control the behavior
    popupSlider->setAutoShow(true); // automatically open when the mouse is over the spinbox
    popupSlider->setAutoHide(true); // automatically hide when the mouse leaves the popup or the spinbox.


}



void FenPrincipale::SavingText()
    {
        QString texteEnHtml = TextWindow->toHtml();
        QString nomFichier = QFileDialog::getSaveFileName(this, "Enregistrer...", "Sans titre 1.txt");

        QFile fichier(nomFichier);

        if (fichier.open(QIODevice::WriteOnly))
        {
            QTextStream out(&fichier);
            out << texteEnHtml;
            setWindowTitle(nomFichier + " - Strateon V1 - Argon ");

        }
    }

void FenPrincipale::mettreEnGras()
{

   TextWindow->setFontWeight(QFont::Bold);
}

void FenPrincipale::mettreEnNormal()
{

   TextWindow->setFontWeight(QFont::Normal);
   TextWindow->setTextColor(Qt::black);

}

void FenPrincipale::mettreEnSouligné()
{

   TextWindow->setFontUnderline(QFont::Normal);

}

void FenPrincipale::mettreEnItalique()
{

   TextWindow->setFontItalic(QFont::Normal);
}

void FenPrincipale::GestionTaille()
{

   TextWindow->setFontWeight(QFont::Normal);


   QTextEdit *bigEditor = new QTextEdit;
       bigEditor->setPlainText(tr("This widget takes up all the remaining space "
                                  "in the top-level layout."));
       bigEditor->show();
   QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
   connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
   connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
   buttonBox->show();



}




void FenPrincipale::changer_couleur()
{
    QColor couleur = QColorDialog::getColor(Qt::white, this);

    TextWindow->setTextColor(couleur);
}

void FenPrincipale::ouvrir()
{

    SecondWindow();
    QString nomFichier = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString());

    QFile fichier(nomFichier);
    if (fichier.open(QIODevice::ReadOnly))
    {
        TextWindow->setText(fichier.readAll());

        setWindowTitle(nomFichier + " - Strateon V1 - Argon ");
    }
}

void FenPrincipale::SecondWindow() {

    TextWindow = new QTextEdit;
    QMdiSubWindow *SubWindowMake = m_CentralZone->addSubWindow(TextWindow);
    SubWindowMake->show();
    SubWindowMake->setWindowTitle("fenêtre");
    SubWindowMake->setStyleSheet("background:white;");
    SubWindowMake->setMinimumHeight(623);
    SubWindowMake->setMinimumWidth(803);

    //floatbut = new QPushButton("URL Load", this);
    //testingbut->show();

}

void FenPrincipale::RenderWindow() {

    view = new  QWebEngineView;
    QMdiSubWindow *SubWindowMake = m_CentralZone->addSubWindow(view);



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
