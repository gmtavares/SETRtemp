 /* GONÇALO - dtInit(vect): Initializes a vector to store temperatures during a day (integer value, once per hour, 24
elements, range -50 ... 50)*/

#include <stdio.h>
#include <stdlib.h>
#include <dailytemp.h>

int* dtInit() {
	int *array = malloc(24 * sizeof(int));
	if (array == NULL) {
		fprintf(stderr, "dtInit: malloc failed\n");
		return -1;
	}
	for (int i = 0; i < 24 ; i++) {
		srand(time(NULL));
		*(array+i) = (rand() * 100) - 50;
	}
	return array;
}
