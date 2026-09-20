#pragma once
#include <string>
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
	MLRS
};
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

std::vector<ArmyUnit> UnitStats{
	{UnitType::Soldier, "Soldier", 1,  5, 2.5f, 1.5f, 0.5f, 14, 1, false},
	{UnitType::SpeicalOpsSoldier, "Special Ops Soldier", 10,  10, 5.0f, 5.0f, 5.0f, 20, 1, false},
	{UnitType::MBT, "Main Battle Tank", 150, 75, 25.0f, 50.0f, 1.0f, 2, 4, false, true},
	{UnitType::IFV, "Infantry Fighting Vehicle", 75, 35, 25.0f, 35.0f, 5.0f, 6, 4, false, true},
	{UnitType::APC, "Armored Personeel Carrier", 45, 20, 15.0f, 10.0f, 5.0f, 10, 3, false, true},
	{UnitType::AttackHeli, "Attack Helicopter", 250, 50,  50.0f, 35.0f, 35.0f, 15, 5, false, false, true, false},
	{UnitType::FighterJet, "Fighter Jet", 700, 70,  20.0f, 10.0f, 75.0f, 35, 5, true, false, true, true},
	{UnitType::AttackerJet, "Attacker Jet", 750, 65,  50.0f, 20.0f, 25.0f, 20, 5, true, false, true, true},
	{UnitType::Bomber, "Bomber", 1500, 170,  200.0f, 40.0f, 0.0f, 10, 15, false, false, true, true},
	{UnitType::ATTroops, "Anti Tank Troops", 30,  5, 3.5f, 10.0f, 0.5f, 10, 3},
	{UnitType::AATroops, "Anti Air Troops", 15,  5, 3.5f, 0.0f, 15.0f, 16, 3},
	{UnitType::SPAA, "Self propelled Anti Air", 150, 25, 5.0f, 0.0f, 50.5f, 5, 4, true, true},
	{UnitType::SPHowitzer, "Self propelled Howitzer", 150, 30, 40.0f, 10.0f, 0.0f, 3, 3, false, true},
	{UnitType::MLRS, "Multiple Launch Rocket System", 200, 25, 100.0f, 1.0f, 0.0f, 6, 3}
};

const ArmyUnit* getUnitByEnum(UnitType unitTypeS);