#pragma once
class Economy
{
private:
	long long gdp;
	double economicGrowthRate;
	double inflationRate;
	double keyRate;
	
	short unemploymentRate;

	long long budget;
	long long taxRevenue;
	long long governmentSpending;

	short socialSpendingPerc;
	short militarySpendingPerc;
	short educationSpendingPerc;
	short healthcareSpendingPerc;




public:
	long long getGdp()const;
	void increaseGdp(int amount);
	void decreaseGdp(int amount);

	double getEconomicGrowthRate()const;
	void setEconomicGrowthRate(double amount);

	double getInflationRate()const;
	void setInflationRate(double amount);

	double getKeyRate()const;
	void setKeyRate(double amount);

	short getUnemploymentRate()const;
	void setUnemploymentRate(short amount);

	long long getBudget()const;
	void setBudget(long long amount);

	long long getTaxRevenue()const;
	void setTaxRevenue(long long amount);

	long long getGovernmentSpending()const;
	void setGovernmentSpending(long long amount);

	short getSocialSpendingPerc()const;
	void setSocialSpendingPerc(short amount);

	short getMilitarySpendingPerc()const;
	void setMilitarySpendingPerc(short amount);

	short getEducationSpendingPerc()const;
	void setEducationSpendingPerc(short amount);

	short getHealthcareSpendingPerc()const;
	void setHealthcareSpendingPerc(short amount);

};

