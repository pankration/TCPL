#include <stdio.h>

typedef unsigned int uint;
typedef unsigned char uchar;

int main(void) {
	//size of types
	printf("[int] has a size of %ld bytes.\n", sizeof(int));
	printf("[char] has a size of %ld bytes.\n", sizeof(char));
	printf("[long] has a size of %ld bytes.\n", sizeof(long));
	printf("[double] has a size of %ld bytes.\n", sizeof(double));
	printf("[pointer] has a size of %ld bytes.\n", sizeof(int*));

	//you need pay attention
	uint i = 0x1FF;
	uchar c = i;
	printf("i = %#x, c = %#x\n", i, c);

	return 0;
}
