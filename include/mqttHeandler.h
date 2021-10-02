#ifndef MQTTHAENDLER_H
#define MQTTHAENDLER_H
#include "abstractDriver.h"

class mqttHeandler
{
private:
    abstractDriver *ad;
public:
    mqttHeandler(abstractDriver*);
    void fn1();
    void fn2();
    void fn3();    
};

#endif