#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE
#include <QtWidgets>
#include <QWebEngineView>
#include <QSyntaxHighlighter>
#include <QHash>
#include <QTextCharFormat>
#include "syntaxic.h"


class FenPrincipale : public QMainWindow
{
    public:
    FenPrincipale();
    void SecondWindow();
    void SavingText();
    void BoldSet();
    void NormalSet();
    void changer_couleur();
    void mettreEnSouligné();
    void mettreEnItalique();
    //void GestionTaille();
    void ouvrir();
    void fontChanged();
    void RenderWindow();
    void openhtml();
    void SetUrl();
    void ToolBarCreate();
    void MenuFuction();
    void OpacitySlider(int);
    void GestionTaille(int);

    private:
    QMdiArea* CentralZone;
    QToolBar *toolBar; 
    QMdiSubWindow *SubWindowMake;
    QString *textsave;
    QTextEdit *TextWindow;
    QFontComboBox *PoliceChoice;
    QWebEngineView  *view;
    QUrl *nomFichier;
    QLineEdit *UrlEdit;
    QUrl *UrlSearch;
    QPushButton *floatbut;
    QMenu *File;
    //-------------------------------------------------
    QAction *actionNew;
    QAction *actionQuit;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *HtmlOpen;
    QAction *HtmlView;
    //-------------------------------------------------
    QPushButton *ButtonWindow;
    QPushButton *ButtonQuit;
    QPushButton *ButtonSave;
    QPushButton *ButtonOpen;
    QPushButton *ButtonGras;
    QPushButton *ButtonNorm;
    QPushButton *ButtonColor;
    QPushButton *ButtonItal;
    QPushButton *ButtonSoul;
    QPushButton *ButtonSize;
    QPushButton *ButtonRenderWindow;
    QPushButton *Buttonhtmlview;
    QPushButton *UrlLoad;
    QProgressBar *progression;
    Highlighter *highlighter;
    QSlider *slider;
    QSlider *sizeslider;

};


#endif
