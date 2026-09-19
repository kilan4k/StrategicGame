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
	Oligarcy
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
	{GovernmentType::ConstitutionalMonarchy, "Consitutional Monarchy"},
	{GovernmentType::ElectiveMonarchy, "Elective Monarchy"},
	//Authoritarian governments
	{GovernmentType::PresidentialAutocracy, "Presidental Autocracy"},
	{GovernmentType::MilitaryJunta, "Military Junta"},
	{GovernmentType::Technocracy, "Technocracy"},
	{GovernmentType::SinglePartyState, "Single Party State"},
	{GovernmentType::Theocracy, "Theocracy"},
	{GovernmentType::Oligarcy, "Oligarchy"}
};

const Government* getGovernmentByEnum(GovernmentType government);