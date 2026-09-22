#include "Console.h"
#include "ArmyUnit.h"
#include <iostream>
using std::cout;
void Console::printMessage(std::string message){
	cout << message;
}
void Console::beautifyOutput() {
	cout << "--------------------\n";
}
void Console::printCountry(const Country& country) {
	


}
void Console::printEconomy(const Economy& economy) {
	beautifyOutput();
	cout << "Economy Menu\n";
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
	beautifyOutput();
	cout << "Military Menu\n";
	beautifyOutput();
	cout << "\tManpower: " << military.getManpower() << "\n\n";
	for (const auto& unit : UnitStats) {
		if (military.getUnitAmount(unit.unitType) > 0) {
			cout << "\t" << unit.name << ": " << military.getUnitAmount(unit.unitType) << " units\n";
		}
	}
	beautifyOutput();
}
void Console::printPolitics(const Politics& politics) {
	const Ideology* ideology = getIdeologyByEnum(politics.getIdeology());
	const Government* government = getGovernmentByEnum(politics.getGovernment());

	beautifyOutput();
	cout << "Politics Menu\n";
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
	beautifyOutput();
	cout << "Society Menu\n";
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