#pragma once
class Politics
{
private:
	int ideologyId;
	int governmentId;
	int stability;
	int corruptionRate;
	int governmentApproval;
	int turnsUntilElections;

	int warSupport;
	bool hasElections;
public:
	int getIdeologyId()const;
	void setIdeologyId(int Id);

	int getGovernmentId()const;
	void setGovernmentId(int Id);

	int getStability()const;
	void setStability(int value);

	int getCorruptionRate()const;
	void setCorruptionRate(int value);

	int getGovernmentApproval()const;
	void setGovernmentApproval(int value);

	int getTurnsUntilElections()const;
	void setTurnsUntilElections(int turns);

	int getWarSupport()const;
	void setWarSupport(int value);

	bool getHasElections()const;
	void setHasElections(bool value);



};

