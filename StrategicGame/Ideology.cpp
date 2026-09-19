#include "Ideology.h"

const Ideology* getIdeologyByEnum(IdeologyType ideology) {
	for (const Ideology& ideologySeek : ideologies) {
		if (ideologySeek.ideology == ideology) {
			return &ideologySeek;
		}
	}
	return nullptr;
}