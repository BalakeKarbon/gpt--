#include <stdio.h>

int main() {
	printf("Hellorld!\n");
	int i = 1;
	long l = 1;
	int ic = 0;
	int lc = 0;
	while (i != 0) {
		ic++;
		i <<= 8;
	}
	while (l != 0) {
		lc++;
		l <<=8;
	}
	printf("Size of int: %i bytes.\n", ic);
	printf("Size of long: %i bytes.\n", lc);
	return 0;
}
