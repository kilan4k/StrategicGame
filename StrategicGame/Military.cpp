#include "Military.h"

int Military::getManpower()const { return manpower; }
void Military::addManpower(int amount) { manpower += amount; }
void Military::reduceManpower(int amount) { manpower -= (manpower-amount)>0 ?amount : 0; }

int Military::getUnitAmount(UnitType type)const {
	auto it = units.find(type);
	if (it != units.end()) {
		return it->second;
	}
	return 0;

}
void Military::addUnit(UnitType type, int amount){
	units[type] += amount;
}
void Military::removeUnit(UnitType type, int amount) {
	units[type] -= amount;
}

