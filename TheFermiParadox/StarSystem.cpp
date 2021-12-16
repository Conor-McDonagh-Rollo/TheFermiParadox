#include "StarSystem.h"
#include <iostream>
#include "Utilities.hpp"

std::string StarFuncs::generateName()
{
    const char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char num[] = "0123456789";;
    std::string s;
    int length = 1;
    while (length % 2 != 0) length = (rand() % (9 - 4)) + 4;
    if (length == 4)
    {
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += "-";
        s += num[rand() % (sizeof(num) - 1)];
        s += num[rand() % (sizeof(num) - 1)];
    }
    else if (length == 6)
    {
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += "-";
        s += num[rand() % (sizeof(num) - 1)];
        s += num[rand() % (sizeof(num) - 1)];
    }
    else if (length == 8)
    {
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += alpha[rand() % (sizeof(alpha) - 1)];
        s += "-";
        s += num[rand() % (sizeof(num) - 1)];
        s += num[rand() % (sizeof(num) - 1)];
        s += num[rand() % (sizeof(num) - 1)];
        s += num[rand() % (sizeof(num) - 1)];
    }

    return s;
}

void StarSystem::GenerateSys()
{
    SetSystem();
    for (int i = 0; i < StarCount; i++)
    {
        Star s;
        StarList.push_back(s);
    }
    for (int i = 0; i < PlanetCount; i++)
    {
        Planet p;
        PlanetList.push_back(p);
    }
    for (Star& s : StarList)
    {
        s.name = StarFuncs::generateName();
    }
    for (Planet& p : PlanetList)
    {
        p.name = StarFuncs::generateName();
    }
}

int main()
{
    while (true)
    {
        UnarySystem* u = new UnarySystem;
        u->GenerateSys();

        for (Star& s : u->StarList)
        {
            CU::PRINT("\nStar name: " + s.name);
        }
        for (Planet& p : u->PlanetList)
        {
            CU::PRINT("\nPlanet name: " + p.name);
        }
        CU::PAUSE();
    }
    return 0;
}