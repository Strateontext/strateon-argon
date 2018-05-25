#include <QApplication>
#include <QtWidgets>
#include "FenPrincipale.h"
#include <iostream>


QString readFile(const QString& filename)
{
    QFile file{filename};

    if (!filename.isEmpty() && file.open(QFile::ReadOnly)) {
        const QByteArray array{file.readAll()};

        file.close();

        return QString::fromUtf8(array);
    }

    return QString();
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FenPrincipale fenetre;
    fenetre.setWindowTitle("Straeon V1-(Argon)");
    fenetre.show();


    app.setStyleSheet(readFile(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/style.qss"));

    return app.exec();
}
