#include "Society.h"

Society::Society()
	: nativePopulation(10000000),
		populationGrowth(0.6f),
		migrants(100000),
		literacyRate(80),
		inequalityRate(30),
		healthcareLevel(70),
		crimeRate(30)
{}
Society::Society(
	long nativePopulation,
	float populationGrowth,
	long migrants,

	short literacyRate,
	short inequalityRate,
	short healthcareLevel,
	short crimeRate)

	:nativePopulation(nativePopulation),
	populationGrowth (populationGrowth),
	migrants (migrants),
	literacyRate (literacyRate),
	inequalityRate (inequalityRate),
	healthcareLevel (healthcareLevel),
	crimeRate (crimeRate)
{}

long Society::getNativePopulation()const { return nativePopulation; }
void Society::setNativePopulation(long value) {
	if (value > 0) {
		nativePopulation = value;
	}
	else {
		nativePopulation = 0;
	}
}

long Society::getTotalPopulation()const {
	return nativePopulation + migrants;
}

float Society::getPopulationGrowth()const { return populationGrowth; }
void Society::setPopulationGrowth(float value) { populationGrowth = value; }

long Society::getMigrants()const { return migrants; }
void Society::setMigrants(long value) {
	if (value >= 0) {
		migrants = value;
	}
	else {
		migrants = 0;
	}
}

short Society::getLiteracyRate()const { return literacyRate; }
void Society::setLiteracyRate(short value) {
	if (value >= 0 and value <= 100) {
		literacyRate = value;
	}
}


short Society::getInequalityRate()const { return inequalityRate; }
void Society::setInequalityRate(short value) {
	if (value >= 0 and value <= 100) {
		inequalityRate = value;
	}
}

short Society::getHealthcareLevel()const { return healthcareLevel; }
void Society::setHealthcareLevel(short value) {
	if (value >= 0 and value <= 100) {
		healthcareLevel = value;
	}
}


short Society::getCrimeRate()const { return crimeRate; }
void Society::setCrimeRate(short value) {
	if (value >= 0 and value <= 100) {
		crimeRate = value;
	}
}