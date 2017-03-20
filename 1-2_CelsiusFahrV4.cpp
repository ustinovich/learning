#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		
	upper = 270;
	step = 10;

	celsius = lower;
	while (celsius <= upper)
			{
			fahr = (celsius * 1.8) + 32;
			printf("%3.0f %3.2f\n", celsius, fahr);
			celsius = celsius + step;
			}
}