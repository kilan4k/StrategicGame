#pragma once
#include <unordered_map>
#include "ArmyUnit.h"

class Military
{
private:
	int manpower;	
	
	std::unordered_map<UnitType, int> units;

	
public:
	Military();
	Military(int manpower, int soldiers, int tanks, int fighters);
	int getManpower()const;
	void addManpower(int amount);
	void reduceManpower(int amount);

	int getUnitAmount(UnitType type)const;
	void addUnit(UnitType type, int amount);
	void removeUnit(UnitType type, int amount);





};

