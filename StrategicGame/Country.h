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
	Society society;
	Technology technology;




public:
	Country();
	Country(
		int countryId,
		std::string name,
		Economy economy,
		Military military,
		Politics politics,
		Society society,
		Technology technology
	);
	const int getCountryId()const;
	const std::string& getCountryName()const;
	const Economy& getCountryEconomy()const;
	const Military& getCountryMilitary()const;
	const Politics& getCountryPolitics()const;
	const Society& getCountrySociety()const;
	const Technology& getCountryTechnology()const;


};

