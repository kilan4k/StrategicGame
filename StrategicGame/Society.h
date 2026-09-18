#pragma once
class Society
{
private:
	long population;
	float populationGrowth;
	int migrants;

	short literacyRate;
	short inequalityRate;
	short healthcareLevel;
	short crimeRate;


public:
	long getPopulation()const;
	void setPopulation(long value);

	float getPopulationGrowth()const;
	void setPopulationGrowth(float value);

	int getMigrants()const;
	void setMigrants(int value);

	short getLiteracyRate()const;
	void setLiteracyRate(short value);

	short getInequalityRate()const;
	void setInequalityRate(short value);

	short getHealthcareLevel()const;
	void setHealthcareLevel(short value);

	short getCrimeRate()const;
	void setCrimeRate(short value);
};

