#include "heder.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap xpm(":/image/aadvark.gif");
    xpm.load( "test.xpm", 0, Qt::DiffuseDither | Qt::DiffuseAlphaDither | Qt::AvoidDither );
    QPixmap pixmap(":/image/aadvard.gif");
    QSplashScreen  *splash = new QSplashScreen(xpm);
    splash->setMask( xpm.createHeuristicMask());
    splash->show();
    system("sleep 5s");
    MainWindow w;
    w.show();
    qApp->processEvents();
    splash->hide();
    return a.exec();
}
