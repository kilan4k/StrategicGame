#include "Economy.h"

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
