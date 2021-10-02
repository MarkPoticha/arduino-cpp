#include <abstractDriver.h>
#include <mqttHeandler.h>

mqttHeandler::mqttHeandler(abstractDriver *ad)
{
    this->ad = ad;
}    

void mqttHeandler::fn1(void)
{
    ad->driverFn1();
}
void mqttHeandler::fn2(void)
{
    ad->driverFn2();
}
void mqttHeandler::fn3(void)
{
    ad->driverFn3();
}
