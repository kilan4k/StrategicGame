#include "Government.h"

const Government* getGovernmentById(int id) {
	for (const Government& government : governments) {
		if (government.governmentId == id) {
			return &government;
		}
	}
	return nullptr;
}