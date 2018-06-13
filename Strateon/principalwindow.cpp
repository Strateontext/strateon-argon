#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>




FenPrincipale::FenPrincipale()
{


    ToolBarCreate();
    MenuFuction();

    //Création des pages de texte
    CentralZone = new QMdiArea;



    progression->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");

    ButtonRenderWindow->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");

    Buttonhtmlview->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");

    UrlLoad->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");


    ButtonSave->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/save.png"));
    ButtonSave->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSave->setIconSize(QSize(25, 25));

    ButtonQuit->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/close.png"));
    ButtonQuit->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonQuit->setIconSize(QSize(25, 25));

    ButtonOpen->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/open-file.png"));
    ButtonOpen->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonOpen->setIconSize(QSize(25, 25));

    ButtonWindow->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/new-window.png"));
    ButtonWindow->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonWindow->setIconSize(QSize(25, 25));

    ButtonGras->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-bold-filled-50.png"));
    ButtonGras->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonGras->setIconSize(QSize(25, 25));

    ButtonNorm->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-typography-24.png"));
    ButtonNorm->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonNorm->setIconSize(QSize(25, 25));

    ButtonItal->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-italic-24.png"));
    ButtonItal->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonItal->setIconSize(QSize(25, 25));

    ButtonSize->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-lowercase-32.png"));
    ButtonSize->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSize->setIconSize(QSize(25, 25));

    ButtonSoul->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/icons8-underline-24.png"));
    ButtonSoul->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSoul->setIconSize(QSize(25, 25));

    ButtonColor->setIcon(QIcon("/Users/LaurentBESSEL/Desktop/build-Editeo-Desktop_Qt_5_10_1_clang_64bit-Debug/icones/RGB_Circle_1-80_icon-icons.com_57282.png"));
    ButtonColor->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonColor->setIconSize(QSize(25, 25));



    PoliceChoice->setMinimumWidth(350);
    PoliceChoice->setMinimumHeight(25);
    PoliceChoice->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    toolBar->setMinimumHeight(70);
    progression->setMaximumWidth(100);
    progression->setMinimumHeight(20);






    setCentralWidget(CentralZone);
    setUnifiedTitleAndToolBarOnMac(true);
}






