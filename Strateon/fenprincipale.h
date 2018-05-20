#ifndef HEADER_FENPRINCIPALE
#define HEADER_FENPRINCIPALE

#include <QtWidgets>

class FenPrincipale : public QMainWindow
{
    public:
    FenPrincipale();
    void NouvelleFen();

    private:
    QMdiArea* m_zoneCentrale;

};

#endif
