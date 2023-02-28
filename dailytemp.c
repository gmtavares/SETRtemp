#include <stdio.h>
#include "dailytemp.h"

int main(void)
{
	int quit = '0';
	while (quit != 'q') {
		int* v;
		v = dtInit();
		printf("How many values do you want to add?");
		int valueCount = 0;
		while (valueCount <= 0) {
			printf(" Insert a value greater than 0.");
			scanf("%d",valueCount);
		}
		printf("Adding %d values",valueCount);
		for(int i = 0; i<valueCount; i++) {
			dtAdd(v);
		}
		int* ans;
		ans = dtStat(v);
		printf("Max temperature = %d \n Min temperature = %d \n Avg temperature = %d \n",*(v+0),*(v+1),*(v+2));
		scanf("%c",quit);
	}
	return 0;
}
