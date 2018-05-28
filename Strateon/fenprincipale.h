#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE
#include <QtWidgets>

class FenPrincipale : public QMainWindow
{
    public:
    FenPrincipale();
    void SecondWindow();
    void SavingText();
    void mettreEnGras();
    void mettreEnNormal();
    void changer_couleur();



    private:
    QMdiArea* m_CentralZone;
    QString *textsave;
    QTextEdit *TextWindow;


};

#endif
