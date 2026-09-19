#pragma once
class Society
{
private:
	long nativePopulation;
	float populationGrowth;
	long migrants;

	short literacyRate;
	short inequalityRate;
	short healthcareLevel;
	short crimeRate;


public:
	Society();
	Society(
	long nativePopulation,
	float populationGrowth,
	long migrants,

	short literacyRate,
	short inequalityRate,
	short healthcareLevel,
	short crimeRate);

	long getNativePopulation()const;
	void setNativePopulation(long value);

	long getTotalPopulation()const;

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

