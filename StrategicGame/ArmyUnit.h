#pragma once
#include <string>
#include <vector>
struct ArmyUnit {
	int id;
	std::string name;
	
	int productionCost;
	
	int hp;
	int softAttack;
	int hardAttack;
	int antiAirAttack;
	int mobility;
	int manpowerRequired;
	bool isArmored;
	bool isAir;

};

std::vector<ArmyUnit> UnitTypes{
	{1, "Soldier"},
	{2, "Special Ops"},
	{3, "Main Battle Tank"},
	{4, "Infantry Fighting Vehicle"},
	{5, "Armored Personeel Carrier"},
	{6, "Attack Helicopter"},
	{7, "Fighter Jet"},
	{8, "Attacker Jet"},
	{9, "Bomber"},
	{10, "Anti Tank Troops"},
	{11, "Anti Air Troops"},
	{12, "Self propelled Anti Air"},
	{13, "Self propelled Howitzer"},
	{14, "Multiple Launch Rocket System"}
};