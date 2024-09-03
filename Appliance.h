#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance
{
protected:
    int powerRating;
    bool isOn;
public:
    Appliance(int powerRating);
    Appliance();
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
    int getPowerRating();
    bool getIsOn();
    void setPowerRating(int powerRating);
};

#endif


