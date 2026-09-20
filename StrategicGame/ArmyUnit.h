#pragma once
#include <string>
#include <array>
#include <vector>
enum class UnitType {
	Soldier,
	SpeicalOpsSoldier,
	MBT,
	IFV,
	APC,
	AttackHeli,
	FighterJet,
	AttackerJet,
	Bomber,
	ATTroops,
	AATroops,
	SPAA,
	SPHowitzer,
	MLRS,
	Count
};
inline constexpr int UNIT_COUNT = static_cast<int>(UnitType::Count);
struct ArmyUnit {
	UnitType unitType;
	std::string name;
	
	int productionCost;
	
	int hp;
	float softAttack;
	float hardAttack;
	float antiAirAttack;
	int mobility;
	int manpowerRequired;
	bool canShootHighAir = false;
	bool isArmored = false;
	bool isAir = false;
	bool isHighAir = false;
};

extern const std::array<ArmyUnit, UNIT_COUNT> UnitStats;

const ArmyUnit* getUnitByEnum(UnitType unitTypeS);