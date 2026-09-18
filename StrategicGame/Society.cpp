#include "Society.h"


long Society::getPopulation()const { return population; }
void Society::setPopulation(long value) {
	if (value > 0) {
		population = value;
	}
	else {
		population = 0;
	}
}

float Society::getPopulationGrowth()const { return populationGrowth; }
void Society::setPopulationGrowth(float value) { populationGrowth = value; }

int Society::getMigrants()const { return migrants; }
void Society::setMigrants(int value) {
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