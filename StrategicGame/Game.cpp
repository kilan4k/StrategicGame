#include "Game.h"
#include "Console.h"


void Game::play() {
	Console console;
	Country Russia(1, "Russia", 
		Economy(4000000000000, -2, 10, 22, 4, 400000000000, 440000000000, 500000000000, 20, 40,15, 25), 
		Military(5000000, 2500000,7000, 1500),
		Politics(IdeologyType::NationalConservatism, GovernmentType::PresidentialAutocracy, 35, 20, 40, 10, 35, true),
		Society(140000000, -0.4f, 6000000, 75, 42, 43, 41),
		Technology()
		);
	console.printEconomy(Russia.getCountryEconomy());
	console.printMilitary(Russia.getCountryMilitary());
	console.printArmyUnitStats();
}