#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE
#include <QtWidgets>
#include <QWebEngineView>



class FenPrincipale : public QMainWindow
{
    public:
    FenPrincipale();
    void SecondWindow();
    void SavingText();
    void mettreEnGras();
    void mettreEnNormal();
    void changer_couleur();
    void mettreEnSouligné();
    void mettreEnItalique();
    void GestionTaille();
    void ouvrir();
    void fontChanged();
    void RenderWindow();
    void openhtml();
    void SetUrl();



    private:
    QMdiArea* m_CentralZone;
    QString *textsave;
    QTextEdit *TextWindow;
    QFontComboBox *PoliceChoice;
    QWebEngineView  *view;
    QUrl *nomFichier;
    QLineEdit *UrlEdit;
    QUrl *UrlSearch;
    QPushButton *floatbut;


};

#endif
