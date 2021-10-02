#include <Arduino.h>
#include <theDriver2.h>

theDriver2::theDriver2(void)
{

}
bool theDriver2::driverFn1()
{
    Serial.println("theDriver2->Fn1");
    return true;
}
bool theDriver2::driverFn2()
{
    Serial.println("theDriver2->Fn2");
    return true;
}
bool theDriver2::driverFn3()
{
    Serial.println("theDriver2->Fn3");
    return true;
}
