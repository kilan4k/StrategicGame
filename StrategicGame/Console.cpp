#include "Console.h"
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

}
void Console::printPolitics(const Politics& politics) {


}
void Console::printSociety(const Society& society) {


}
void Console::printEvent(const Events& event) { //later


}