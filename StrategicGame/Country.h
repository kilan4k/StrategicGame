#pragma once
#include "Economy.h"
#include "Events.h"
#include "Military.h"
#include "Politics.h"
#include "Society.h"
#include "Technology.h"
#include <string>
class Country
{
private:
	int countryId;
	std::string name;
	Economy economy;
	Military military;
	Politics politics;
	Society population;
	Technology technology;




public:
	int getCountryId()const;
	std::string getCountryName()const;
	Economy getCountryEconomy()const;
	Military getCountryMilitary()const;
	Politics getCountryPolitics()const;
	Society getCountrySociety()const;
	Technology getCountryTechnology()const;


};

