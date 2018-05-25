#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE

#include <QtWidgets>

class FenPrincipale : public QMainWindow
{
    public:
    FenPrincipale();
    void SecondWindow();

    private:
    QMdiArea* m_CentralZone;

};

#endif
