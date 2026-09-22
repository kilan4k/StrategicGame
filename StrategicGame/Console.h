#pragma once
#include "Country.h"
#include "Economy.h"
#include "Military.h"
#include "Politics.h"
#include "Society.h"
#include "Events.h"
#include "Technology.h"
#include "Ideology.h"
#include "Government.h"
#include <string>

class Console
{
private:

public:
	void printMessage(std::string message);
	void beautifyOutput();
	void printCountry(const Country& country);
	void printEconomy(const Economy& economy);
	void printMilitary(const Military& military);
	void printArmyUnitStats();
	void printPolitics(const Politics& politics);
	void printSociety(const Society& society);
	void printEvent(const Events& event);




};

