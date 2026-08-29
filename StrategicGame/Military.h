#pragma once
#include <vector>

struct MilitaryUnits {
	int unitId;
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

	MilitaryUnits getUnit(int Id)const;
	void addUnit(int Id, int amount);
	void removeUnit(int Id, int amount);





};

