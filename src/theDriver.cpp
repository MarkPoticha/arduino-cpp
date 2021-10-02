#include <Arduino.h>
#include <theDriver.h>

theDriver::theDriver(void)
{

}
bool theDriver::driverFn1()
{
    Serial.println("theDriver->Fn1");
    return true;
}
bool theDriver::driverFn2()
{
    Serial.println("theDriver->Fn2");
    return true;
}
bool theDriver::driverFn3()
{
    Serial.println("theDriver->Fn3");
    return true;
}
