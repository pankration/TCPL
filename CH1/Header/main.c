#include "StructDef.h"
#include "PrintStruct.h"

int main(void){
	TVector tVector;
	tVector.m_dX = 20;
	tVector.m_dY = 30;
	tVector.m_dZ = 40;
	PrintVector(&tVector);

	return 0;
}
