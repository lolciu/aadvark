#ifndef SETTING_H
#define SETTING_H

#include "heder.h"

class Setting{

    Setting(QString file="config.ini"){
        EXIST=1;
        _current=this;
    }

    static bool EXIST;
    static Setting* _current;


    QSettings* _ustawienia;

public:
   Setting* GetInstance(){
        if(EXIST){
            return _current;
        }
       else Setting();
   }

   ~Setting(){ EXIST=0; _current=NULL; }

};

#endif // SETTING_H
