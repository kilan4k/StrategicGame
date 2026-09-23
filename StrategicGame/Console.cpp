#include "Console.h"
#include "ArmyUnit.h"
#include <iostream>
using std::cout;
void Console::printMessage(std::string message){
	cout << message;
}
void Console::beautifyOutput() {
	cout << "--------------------------------------------------------------------------------\n";
}
void Console::printCountry(const Country& country) {
	beautifyOutput();
	cout << "Country statistics\n";
	beautifyOutput();

	cout << "\tCountry ID: "<<country.getCountryId()<<"\n";
	cout << "\tCountry name: " << country.getCountryName()<<"\n";
	beautifyOutput();
	cout << "   "; printEconomy(country.getCountryEconomy());
	cout << "   "; printMilitary(country.getCountryMilitary());
	cout << "   "; printPolitics(country.getCountryPolitics());
	cout << "   "; printSociety(country.getCountrySociety());
}
void Console::printEconomy(const Economy& economy) {
	cout << "Economy statistics\n";
	beautifyOutput();
	cout << "\tGDP: " << economy.getGdp() << "$\n";
	cout << "\tBudget: " << economy.getBudget() << "$\n";
	cout << "\tTax revenue: " << economy.getTaxRevenue() << "$\n";
	beautifyOutput();
	cout << "\tEconomic growth rate: " << economy.getEconomicGrowthRate() << "%\n";
	cout << "\tInflation rate: " << economy.getInflationRate() << "%\n";
	cout << "\tKey rate: " << economy.getKeyRate() << "%\n";
	cout << "\tUnemployment rate: " << economy.getUnemploymentRate() << "%\n";
	beautifyOutput();
	cout << "\tGovernment spending: " << economy.getGovernmentSpending() << "$\n";
	cout << "\tSocial spending: " << economy.getSocialSpendingPerc() << "%\n";
	cout << "\tMilitary spending: " << economy.getMilitarySpendingPerc() << "%\n";
	cout << "\tEducation spending: " << economy.getEducationSpendingPerc() << "%\n";
	cout << "\tHealthcare spending: " << economy.getHealthcareSpendingPerc() << "%\n";
	beautifyOutput();
}
void Console::printMilitary(const Military& military) {
	cout << "Military statistics\n";
	beautifyOutput();
	cout << "\tManpower: " << military.getManpower() << "\n\n";
	for (const auto& unit : UnitStats) {
		if (military.getUnitAmount(unit.unitType) > 0) {
			cout << "\t" << unit.name << ": " << military.getUnitAmount(unit.unitType) << " units\n";
		}
	}
	beautifyOutput();
}
void Console::printArmyUnitStats() {
	cout << "Military Units' statistics\n";
	beautifyOutput();
	cout << "\n";
	for (const auto& unit : UnitStats) {
		cout << "\t" << unit.name << ":\n";
		cout << "\t\t" << "HP: " << unit.hp << "\n";
		cout << "\t\t" << "Production cost: " << unit.productionCost<< "\n";
		cout << "\t\t" << "Soft attack: " << unit.softAttack << "\n";
		cout << "\t\t" << "Hard attack: " << unit.hardAttack << "\n";
		cout << "\t\t" << "Anti air Attack: " << unit.antiAirAttack << "\n";
		cout << "\t\t" << "Mobility: " << unit.mobility << "\n";
		cout << "\t\t" << "Manpower required: " << unit.manpowerRequired << "\n";
		if (unit.canShootHighAir) {
			cout << "\t\t" << "This Unit has ability to shoot down high flying targets" << "\n";
		}
		if (unit.isArmored) {
			cout << "\t\t" << "This Unit is Armored" << "\n";
		}
		if (unit.isHighAir) {
			cout << "\t\t" << "This Unit flies high" << "\n";
		}
		else if (unit.isAir) {
			cout << "\t\t" << "This Unit flies low" << "\n";
		}
		beautifyOutput();
	}
}
void Console::printPolitics(const Politics& politics) {
	const Ideology* ideology = getIdeologyByEnum(politics.getIdeology());
	const Government* government = getGovernmentByEnum(politics.getGovernment());
	cout << "Politics statistics\n";
	beautifyOutput();
	if (ideology) {
		cout << "\tIdeology: " << ideology->ideologyName << "\n";
	}
	else {
		cout << "\tIdeology: " << "Unkown Ideology\n";
	}
	if (government) {
		cout << "\tGovernment type: " << government->governmentName << "\n";
	}
	else {
		cout << "\tGovernment type: " << "Unknown Government type\n";
	}
	beautifyOutput();
	cout << "\tStability rate: " << politics.getStability() << "%\n";
	cout << "\tWar support rate: " << politics.getWarSupport() << "%\n";
	cout << "\tCorruption rate: " << politics.getCorruptionRate() << "%\n";
	cout << "\tGovernment approval rate: " << politics.getGovernmentApproval() << "%\n";
	if (politics.getHasElections()) {
		cout << "\tGame turns until the next elections: " << politics.getTurnsUntilElections() << "\n";
	}
	else {
		cout << "\tNo elections" << "\n";
	}
	beautifyOutput();
}
void Console::printSociety(const Society& society) {
	cout << "Society statistics\n";
	beautifyOutput();
	cout << "\tPopulation: " << society.getTotalPopulation() << "\n";
	cout << "\tPopulation growth: " << society.getPopulationGrowth() << "%\n";
	cout << "\tMigrants: " << society.getMigrants() << "\n";
	beautifyOutput();
	cout << "\tLiteracy Rate: " << society.getLiteracyRate() << "%\n";
	cout << "\tInequality Rate: " << society.getInequalityRate() << "%\n";
	cout << "\tCrime Rate: " << society.getCrimeRate() << "%\n";
	beautifyOutput();
}
void Console::printEvent(const Events& event) { //later


}