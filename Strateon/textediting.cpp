#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>

void FenPrincipale::BoldSet()
{
   TextWindow->setFontWeight(QFont::Bold);
}

void FenPrincipale::NormalSet()
{
   TextWindow->setFontWeight(QFont::Normal);
   TextWindow->setTextColor(Qt::black);
   TextWindow->setFontUnderline(0);
   TextWindow->setFontItalic(0);
}

void FenPrincipale::mettreEnSouligne()
{
   TextWindow->setFontUnderline(1);
}

void FenPrincipale::mettreEnItalique()
{
   TextWindow->setFontItalic(1);
}

void FenPrincipale::GestionTaille(int textsize)
{
   TextWindow->setFontWeight(QFont::Normal);
   TextWindow->setFontPointSize(textsize);
}

void FenPrincipale::changer_couleur()
{
    QColor couleur = QColorDialog::getColor(Qt::white, this);
    TextWindow->setTextColor(couleur);
}
