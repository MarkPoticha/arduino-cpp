#ifndef ABSTRACTDRIVER_H
#define ABSTRACTDRIVER_H
class abstractDriver
{
private:

public:
    abstractDriver(void);
    virtual bool driverFn1() = 0;
    virtual bool driverFn2() = 0;;
    virtual bool driverFn3() = 0;;
};

#endif