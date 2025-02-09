#ifndef MAGE_H
#define MAGE_H

#include <QDebug>

class Mage
{
public:
    virtual bool fire_power() = 0; // virtual function for interface
    void weapon_class() // class method
    {
        qInfo() << "Staff";
    }
};

#endif // MAGE_H
