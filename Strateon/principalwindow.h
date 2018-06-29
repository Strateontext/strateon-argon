#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE
#include <QtWidgets>
#include <QSyntaxHighlighter>
#include <QHash>
#include <QTextCharFormat>
#include "syntaxic.h"
#include <QPrintDialog>
#include <QPrinter>


class FenPrincipale : public QMainWindow
{
    public:
        FenPrincipale();
        void SecondWindow();
        void SavingText();
        void BoldSet();
        void NormalSet();
        void changer_couleur();
        void mettreEnSouligne();
        void mettreEnItalique();
        void ouvrir();
        void fontChanged();
        void ToolBarCreate();
        void MenuFuction();
        void OpacitySlider(int);
        void GestionTaille(int);
        void printfile();

    private:
        QMessageBox *errordialog;
        QPrinter * imprimante;
        QPrintDialog * dialogue;
        QMdiArea* CentralZone;
        QToolBar *toolBar;
        QMdiSubWindow *SubWindowMake;
        QString *textsave;
        QTextEdit *TextWindow;
        QFontComboBox *PoliceChoice;
        QPushButton *floatbut;
        QMenu *File;
        QAction *actionNew;
        QAction *actionQuit;
        QAction *actionSave;
        QAction *actionOpen;
        QAction *HtmlOpen;
        QAction *HtmlView;
        QPushButton *ButtonWindow;
        QPushButton *ButtonQuit;
        QPushButton *ButtonSave;
        QPushButton *ButtonOpen;
        QPushButton *ButtonGras;
        QPushButton *ButtonNorm;
        QPushButton *ButtonColor;
        QPushButton *ButtonItal;
        QPushButton *ButtonSoul;
        QPushButton *ButtonRenderWindow;
        QPushButton *Buttonhtmlview;
        QPushButton *Printer;
        QProgressBar *progression;
        Highlighter *highlighter;
        HighlighterHtml *highlighter2;
        QSlider *slider;
        QSlider *sizeslider;

};

#endif
