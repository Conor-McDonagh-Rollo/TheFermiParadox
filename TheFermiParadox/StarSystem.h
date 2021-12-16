#pragma once
#include <vector>
#include <string>

class StarFuncs
{
public:
	static std::string generateName();
};

struct TimeMeasure
{
	int years;
	int days;
	int hours;
};

struct Star
{
	std::string name;
	int temperature;
	int density;
	int size;
};

struct Planet
{
	std::string name;
	int size;
	int moons;
	TimeMeasure rotation;
	TimeMeasure orbit;
};

class StarSystem
{
public:
	void GenerateSys();

	virtual void SetSystem() = 0;

	int StarCount;
	int PlanetCount;
	std::vector<Star> StarList;
	std::vector<Planet> PlanetList;
};

class UnarySystem : public StarSystem
{
	void SetSystem()
	{
		StarCount = 1;
		PlanetCount = (rand() % 12) + 4;
	}
};

