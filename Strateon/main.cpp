#include <QApplication>
#include <QtWidgets>
#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>


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
    fenetre.setWindowTitle("Strateon V1-(Argon)");
    fenetre.resize(1600,900);
    fenetre.setMinimumSize(1000,562.5);
    fenetre.setMaximumSize(1920,1080);

    fenetre.show();

    app.setStyleSheet(readFile(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "style.css"));

    return app.exec();
}
