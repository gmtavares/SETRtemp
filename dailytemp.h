/* 
 * GONÇALO - dtInit(vect): Initializes a vector to store temperatures during a day (integer value, once per hour, 24
elements, range -50 ... 50)
GONÇALO - dtAdd(vect): Adds a temperature sample
JOSÉ - dtStat(vect, max, min, avg): Returns the maximum, minimum and average temperature among the
samples stored in vect. Note that avg is rounded to an integer.*/ 

int* dtInit();

void dtAdd(int* vector);

int* dtStat(int* vector);
