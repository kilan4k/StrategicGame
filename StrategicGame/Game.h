#pragma once
#include "Country.h"
#include "Ideology.h"
#include "Government.h"
#include "DiplomaticRelations.h"
#include <vector>
class Game
{
private:

	std::vector<Country> countries;
	std::vector<DiplomaticRelations> diplomaticRelations;
	std::vector<Events> possibleEvents;

	int playerCountryId;
	
	
public:


	std::vector<Country> getCountries();


};

