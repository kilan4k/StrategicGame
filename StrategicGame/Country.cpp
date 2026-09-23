#include "Country.h"
Country::Country() {}

Country::Country(
	int countryId,
	std::string name,
	Economy economy,
	Military military,
	Politics politics,
	Society society,
	Technology technology
)
	:
	countryId (countryId),
	name(name),
	economy(economy),
	military(military),
	politics(politics),
	society(society),
	technology(technology)
{}
const int Country::getCountryId() const { return countryId; }
const std::string& Country::getCountryName() const { return name; }
const Economy& Country::getCountryEconomy()const { return economy; }
const Military& Country::getCountryMilitary()const { return military; }
const Politics& Country::getCountryPolitics()const { return politics; }
const Society& Country::getCountrySociety()const { return society; }
const Technology& Country::getCountryTechnology()const { return technology; }