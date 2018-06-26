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


    ButtonSave->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/save.png"));
    ButtonSave->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSave->setIconSize(QSize(25, 25));

    ButtonQuit->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/close.png")));
    ButtonQuit->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonQuit->setIconSize(QSize(25, 25));

    ButtonOpen->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/open.png"));
    ButtonOpen->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonOpen->setIconSize(QSize(25, 25));

    ButtonWindow->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/newwin.png"));
    ButtonWindow->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonWindow->setIconSize(QSize(25, 25));

    ButtonGras->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/bold.png"));
    ButtonGras->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonGras->setIconSize(QSize(25, 25));

    ButtonNorm->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/normal.png"));
    ButtonNorm->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonNorm->setIconSize(QSize(25, 25));

    ButtonItal->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/italic.png"));
    ButtonItal->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonItal->setIconSize(QSize(25, 25));

    ButtonSize->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/size.png"));
    ButtonSize->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSize->setIconSize(QSize(25, 25));

    ButtonSoul->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/underline.png"));
    ButtonSoul->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSoul->setIconSize(QSize(25, 25));

    ButtonColor->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/color.png"));
    ButtonColor->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonColor->setIconSize(QSize(25, 25));
    
    /*ButtonColor->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/color.png"));
    ButtonColor->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonColor->setIconSize(QSize(25, 25));
    
    ButtonColor->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/color.png"));
    ButtonColor->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonColor->setIconSize(QSize(25, 25));
    
    ButtonColor->setIcon(QIcon(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/color.png"));
    ButtonColor->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonColor->setIconSize(QSize(25, 25));*/



    PoliceChoice->setMinimumWidth(350);
    PoliceChoice->setMinimumHeight(25);
    PoliceChoice->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    toolBar->setMinimumHeight(70);
    progression->setMaximumWidth(100);
    progression->setMinimumHeight(20);


    QImage img(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+ "/Users/LaurentBESSEL/Desktop/Strateon/icons/color.png");
    CentralZone->setBackground(QBrush(img));

    setCentralWidget(CentralZone);
    setUnifiedTitleAndToolBarOnMac(true);
}






