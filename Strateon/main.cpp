#include <QApplication>
#include <QtWidgets>
#include "FenPrincipale.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FenPrincipale fenetre;
    fenetre.setWindowTitle("Straeon V1-(Argon)");
    fenetre.show();

    return app.exec();
}
