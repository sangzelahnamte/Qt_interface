#ifndef CAMELEON_HERO_H
#define CAMELEON_HERO_H

#include <QObject>
#include <QDebug>
#include "Mage.h"
#include "Priest.h"
#include "Warlock.h"

class Cameleon_hero : public QObject, public Mage, public Priest, public Warlock
{
    Q_OBJECT
public:
    explicit Cameleon_hero(QObject *parent = nullptr);
    ~Cameleon_hero();
    void weapon_class();
signals:

    // Warlock interface
public:
    bool corruption_power();

    // Priest interface
public:
    bool heal_power();

    // Mage interface
public:
    bool fire_power();
};

#endif // CAMELEON_HERO_H
