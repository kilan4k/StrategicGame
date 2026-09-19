#include "Government.h"

const Government* getGovernmentByEnum(GovernmentType government) {
	for (const Government& governmentSeek : governments) {
		if (governmentSeek.government == government) {
			return &governmentSeek;
		}
	}
	return nullptr;
}