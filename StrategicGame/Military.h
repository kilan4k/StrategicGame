#pragma once
#include <vector>
#include "ArmyUnit.h"
struct MilitaryUnits {
	UnitType unitType;
	int amount;
};

class Military
{
private:
	int manpower;	
	std::vector<MilitaryUnits> units = {
	
	};


public:
	int getManpower()const;
	void addManpower(int amount);
	void reduceManpower(int amount);

	int getUnitAmount(UnitType type)const;
	void addUnit(UnitType type, int amount);
	void removeUnit(UnitType type, int amount);





};

