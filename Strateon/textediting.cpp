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

}

void FenPrincipale::mettreEnSouligné()
{

   TextWindow->setFontUnderline(QFont::Normal);

}

void FenPrincipale::mettreEnItalique()
{

   TextWindow->setFontItalic(QFont::Normal);
}

void FenPrincipale::GestionTaille()
{

   TextWindow->setFontWeight(QFont::Normal);


   QTextEdit *bigEditor = new QTextEdit;
       bigEditor->setPlainText(tr("This widget takes up all the remaining space "
                                  "in the top-level layout."));
       bigEditor->show();
   QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
   connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
   connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
   buttonBox->show();



}

void FenPrincipale::changer_couleur()
{
    QColor couleur = QColorDialog::getColor(Qt::white, this);

    TextWindow->setTextColor(couleur);
}
