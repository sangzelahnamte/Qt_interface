#include "cameleon_hero.h"

Cameleon_hero::Cameleon_hero(QObject *parent)
    : QObject{parent}
{
    qDebug() << this << "constructed";
}

Cameleon_hero::~Cameleon_hero()
{
    qDebug() << this << "destroyed";
}


bool Cameleon_hero::corruption_power()
{
    return true;
}

bool Cameleon_hero::heal_power()
{
    return true;
}

bool Cameleon_hero::fire_power()
{
    return true;
}
