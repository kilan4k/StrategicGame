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
	Country();
	int getCountryId();
	std::string& getCountryName();
	Economy& getCountryEconomy();
	Military& getCountryMilitary();
	Politics& getCountryPolitics();
	Society& getCountrySociety();
	Technology& getCountryTechnology();


};

