#include <Arduino.h>
#include <mqttHeandler.h>
#include <theDriver.h>
#include <theDriver2.h>
theDriver d;
theDriver2 d2;


void setup()
{
    Serial.begin(9600);
    
    mqttHeandler m[] = {&d,&d2};

    for (int i = 0; i<2; i++)
    {
        m[i].fn1();
        m[i].fn2();
        m[i].fn3();        
    }    

}
void loop() 
{

}