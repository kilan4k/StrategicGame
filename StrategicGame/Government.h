#pragma once
#include <vector>
#include <string>

enum class GovernmentType{
	ParliamentRepublic,
	PresidentRepublic,
	MixedRepublic,
	DirectDemocracy,
	AbsoluteMonarchy,
	ConstitutionalMonarchy,
	ElectiveMonarchy,
	PresidentialAutocracy,
	MilitaryJunta,
	Technocracy,
	SinglePartyState,
	Theocracy,
	Oligarchy
};

struct Government {
	GovernmentType government;
	std::string governmentName;
};
inline const std::vector<Government> governments = {
	//Democratic governments
	{GovernmentType::ParliamentRepublic, "Parliament Republic"},
	{GovernmentType::PresidentRepublic, "President Republic"},
	{GovernmentType::MixedRepublic, "Mixed Republic"},
	{GovernmentType::DirectDemocracy, "Direct Democracy"},
	//Monarchies
	{GovernmentType::AbsoluteMonarchy, "Absolute Monarchy"},
	{GovernmentType::ConstitutionalMonarchy, "Constitutional Monarchy"},
	{GovernmentType::ElectiveMonarchy, "Elective Monarchy"},
	//Authoritarian governments
	{GovernmentType::PresidentialAutocracy, "Presidential Autocracy"},
	{GovernmentType::MilitaryJunta, "Military Junta"},
	{GovernmentType::Technocracy, "Technocracy"},
	{GovernmentType::SinglePartyState, "Single Party State"},
	{GovernmentType::Theocracy, "Theocracy"},
	{GovernmentType::Oligarchy, "Oligarchy"}
};

const Government* getGovernmentByEnum(GovernmentType government);