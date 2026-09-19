#include "Politics.h"

IdeologyType Politics::getIdeology()const { return ideology; }
void Politics::setIdeology(IdeologyType value) { ideology = value; }

GovernmentType Politics::getGovernment()const { return government; }
void Politics::setGovernment(GovernmentType value) { government = value; }

int Politics::getStability()const { return stability; }
void Politics::setStability(int value) { stability = value; }

int Politics::getCorruptionRate()const { return corruptionRate; }
void Politics::setCorruptionRate(int value) { corruptionRate = value; }

int Politics::getGovernmentApproval()const { return governmentApproval; }
void Politics::setGovernmentApproval(int value) { governmentApproval = value; }

int Politics::getTurnsUntilElections()const { return turnsUntilElections; }
void Politics::setTurnsUntilElections(int turns) { turnsUntilElections = turns; }

int Politics::getWarSupport()const { return warSupport; }
void Politics::setWarSupport(int value) { warSupport = value; }

bool Politics::getHasElections()const { return hasElections; }
void Politics::setHasElections(bool value) { hasElections = value; }


