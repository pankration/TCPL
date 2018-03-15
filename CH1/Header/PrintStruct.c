#include <stdio.h>
#include "PrintStruct.h"

void PrintVector(const TVector* const pVector){
	printf("X=%f Y=%f Z=%f\n", pVector->m_dX, pVector->m_dY, pVector->m_dZ);
}
