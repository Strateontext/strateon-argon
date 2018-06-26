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

    ButtonSave->setIcon(QIcon(":/icons/save"));
    ButtonSave->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSave->setIconSize(QSize(25, 25));

    ButtonQuit->setIcon(QIcon(":/icons/close"));
    ButtonQuit->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonQuit->setIconSize(QSize(25, 25));

    ButtonOpen->setIcon(QIcon(":/icons/open"));
    ButtonOpen->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonOpen->setIconSize(QSize(25, 25));

    ButtonWindow->setIcon(QIcon(":/icons/newwin"));
    ButtonWindow->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonWindow->setIconSize(QSize(25, 25));

    ButtonGras->setIcon(QIcon(":/icons/bold"));
    ButtonGras->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonGras->setIconSize(QSize(25, 25));

    ButtonNorm->setIcon(QIcon(":/icons/normal"));
    ButtonNorm->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonNorm->setIconSize(QSize(25, 25));

    ButtonItal->setIcon(QIcon(":/icons/italic"));
    ButtonItal->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonItal->setIconSize(QSize(25, 25));

    ButtonSize->setIcon(QIcon(":/icons/size"));
    ButtonSize->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSize->setIconSize(QSize(25, 25));

    ButtonSoul->setIcon(QIcon(":/icons/underline"));
    ButtonSoul->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonSoul->setIconSize(QSize(25, 25));

    ButtonColor->setIcon(QIcon(":/icons/color"));
    ButtonColor->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonColor->setIconSize(QSize(25, 25));
    
    ButtonRenderWindow->setIcon(QIcon(":/icons/browsewin"));
    ButtonRenderWindow->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    ButtonRenderWindow->setIconSize(QSize(25, 25));
    
    Buttonhtmlview->setIcon(QIcon(":/icons/htmlopen"));
    Buttonhtmlview->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    Buttonhtmlview->setIconSize(QSize(25, 25));
    
    UrlLoad->setIcon(QIcon(":/icons/urlopen"));
    UrlLoad->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    UrlLoad->setIconSize(QSize(25, 25));



    PoliceChoice->setMinimumWidth(350);
    PoliceChoice->setMinimumHeight(25);
    PoliceChoice->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    toolBar->setMinimumHeight(70);
    progression->setMaximumWidth(100);
    progression->setMinimumHeight(20);


    QImage img(":/images/background");
    CentralZone->setBackground(QBrush(img));

    setCentralWidget(CentralZone);
    setUnifiedTitleAndToolBarOnMac(true);
}






