#include "ArmyUnit.h"

const ArmyUnit* getUnitByEnum(UnitType unitTypeS) {
	for (const auto& unit : UnitStats) {
		if (unit.unitType == unitTypeS) {
			return &unit;
		}
	}
	return nullptr;
}