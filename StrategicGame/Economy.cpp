#include "Economy.h"
Economy::Economy()
	:gdp(1000000),
	economicGrowthRate(0),
	inflationRate(0),
	keyRate(5),
	unemploymentRate(5),
	budget(50000),
	taxRevenue(25000),
	governmentSpending(400000),
	socialSpendingPerc(50),
	militarySpendingPerc(20),
	educationSpendingPerc(15),
	healthcareSpendingPerc(15)
{}
Economy::Economy(
	long long gdp, double economicGrowthRate, double inflationRate, double keyRate,
	short unemploymentRate,
	long long budget, long long taxRevenue, long long governmentSpending,
	short socialSpendingPerc, short militarySpendingPerc, short educationSpendingPerc, short healthcareSpendingPerc)
	: gdp(gdp),
	economicGrowthRate(economicGrowthRate),
	inflationRate(inflationRate),
	keyRate(keyRate),
	unemploymentRate(unemploymentRate),
	budget(budget),
	taxRevenue(taxRevenue),
	governmentSpending(governmentSpending),
	socialSpendingPerc(socialSpendingPerc),
	militarySpendingPerc(militarySpendingPerc),
	educationSpendingPerc(educationSpendingPerc),
	healthcareSpendingPerc(healthcareSpendingPerc)
{}

long long Economy::getGdp()const { return gdp; }
void Economy::increaseGdp(int amount){}
void Economy::decreaseGdp(int amount){}

double Economy::getEconomicGrowthRate()const { return economicGrowthRate; }
void Economy::setEconomicGrowthRate(double amount){}

double Economy::getInflationRate()const { return inflationRate; }
void Economy::setInflationRate(double amount){}

double Economy::getKeyRate()const { return keyRate; }
void Economy::setKeyRate(double amount){}

short Economy::getUnemploymentRate()const { return unemploymentRate; }
void Economy::setUnemploymentRate(short amount){}

long long Economy::getBudget()const { return budget; }
void Economy::setBudget(long long amount){}

long long Economy::getTaxRevenue()const { return taxRevenue; }
void Economy::setTaxRevenue(long long amount){}

long long Economy::getGovernmentSpending()const { return governmentSpending; }
void Economy::setGovernmentSpending(long long amount){}

short Economy::getSocialSpendingPerc()const { return socialSpendingPerc; }
void Economy::setSocialSpendingPerc(short amount){}

short Economy::getMilitarySpendingPerc()const { return militarySpendingPerc; }
void Economy::setMilitarySpendingPerc(short amount){}

short Economy::getEducationSpendingPerc()const { return educationSpendingPerc; }
void Economy::setEducationSpendingPerc(short amount){}

short Economy::getHealthcareSpendingPerc()const { return healthcareSpendingPerc; }
void Economy::setHealthcareSpendingPerc(short amount){}
