#include <QCoreApplication>
#include "cameleon_hero.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cameleon_hero* hero = new Cameleon_hero();
    hero->setObjectName("Avira");
    qInfo() << "Fire power: " << hero->fire_power();
    qInfo() << "Healing power: " << hero->heal_power();
    qInfo() << "Corruption power: " << hero->corruption_power();

    delete hero; // manually destroying memory
    hero = nullptr;

    return a.exec();
}
