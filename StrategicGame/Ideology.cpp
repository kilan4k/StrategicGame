#include "Ideology.h"

const Ideology* getIdeologyById(int id) {
	for (const Ideology& ideology : ideologies) {
		if (ideology.ideologyID == id) {
			return &ideology;
		}
	}
	return nullptr;
}