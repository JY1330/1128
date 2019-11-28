#include <stdio.h>
#include <limits.h>
int main()
{
	int number[5], i, min, max;
	
	for(i = 0; i < 5; i++)
	{
		printf("다섯 번 입력 하세요[%d 번] : ", i+1);
		scanf("%d", &number[i]);
	}
		
	for(i = 0; i < 5; i++)
		printf("number[%d] = %d\n", i, number[i]);
		
	min = INT_MAX;
	max = INT_MIN;	
	
	for(i = 0; i < 5; i++)
	{
		if(min > number[i])
			min = number[i];
		if(max < number[i])
			max = number[i];
	}
	
	printf("배열 원소의 최소값 = %d, 배열 원소의 최대값 = %d\n", min, max);
	
	return 0;
}
