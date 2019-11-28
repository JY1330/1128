#include <stdio.h>
#define STUDENTS 5
float get_average(int scores[], int n);

int main()
{
	int scores[STUDENTS] = {100, 100, 90, 95, 88};
	float avg;
	
	avg = get_average(scores, sizeof(scores)/sizeof(scores[0]));
	printf("ЦђБе = %.lf\n", avg);
	return 0;
}

float get_average(int scores[], int n)
{
	int i, sum = 0;
	
	for(i = 0;i < n; i++)
		sum += scores[i];
	
	return (float)sum/n;
}
