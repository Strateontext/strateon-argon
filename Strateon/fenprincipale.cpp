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
    QPushButton *ButtonWindow = new QPushButton("Fenêtre", this);
    QPushButton *ButtonQuit = new QPushButton("Quitter", this);
    QPushButton *ButtonSave = new QPushButton("Sauvegarder", this);
    QPushButton *ButtonOpen = new QPushButton("Ouvrir", this);
    QPushButton *ButtonGras = new QPushButton("Gras", this);
    QPushButton *ButtonNorm = new QPushButton("Normal", this);
    QPushButton *ButtonColor = new QPushButton("Couleur", this);
    QPushButton *ButtonItal = new QPushButton("Italique", this);
    QPushButton *ButtonSoul = new QPushButton("Souligné", this);
    QPushButton *ButtonSize = new QPushButton("Taille", this);
    QPushButton *ButtonRenderWindow = new QPushButton("New Html View", this);
    QPushButton *Buttonhtmlview = new QPushButton("Html Open", this);



    QFontComboBox *PoliceChoice = new QFontComboBox;



    toolBar->addWidget(PoliceChoice);
    toolBar->addWidget(ButtonWindow);
    toolBar->addWidget(ButtonQuit);
    toolBar->addWidget(ButtonSave);
    toolBar->addWidget(ButtonOpen);
    toolBar->addWidget(ButtonGras);
    toolBar->addWidget(ButtonNorm);
    toolBar->addWidget(ButtonColor);
    toolBar->addWidget(ButtonItal);
    toolBar->addWidget(ButtonSoul);
    toolBar->addWidget(ButtonSize);
    toolBar->addWidget(ButtonRenderWindow);
    toolBar->addWidget(Buttonhtmlview);


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
    SubWindowMake->setWindowTitle("fen");
    SubWindowMake->setStyleSheet("background:white;");
    QString maketest = "test";

}

void FenPrincipale::RenderWindow() {

    view = new  QWebEngineView;
    QMdiSubWindow *SubWindowMake = m_CentralZone->addSubWindow(view);
    view -> load ( QUrl ( "file:///Users/LaurentBESSEL/Desktop/test.html" ));

    SubWindowMake->show();
    SubWindowMake->setWindowTitle("Visualisteur de code");



}

void FenPrincipale::openhtml()
{

    RenderWindow();
    QString nomFichier = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString());

    QFile fichier(nomFichier);
    if (fichier.open(QIODevice::ReadOnly))
    {
        view -> load ( QUrl (fichier.readAll()));

        setWindowTitle(nomFichier + " - Strateon V1 - Argon ");
    }
}
