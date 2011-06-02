#ifndef CREATEWIN_H
#define CREATEWIN_H

#include "heder.h"

class CreateWin
{
protected:
   virtual void createAct()=0;
   virtual void createUi()=0;
   virtual void createApp()=0;

   virtual void create(){
        createAct();
        createUi();
        createApp();
    }



};



#endif // CREATEWIN_H
