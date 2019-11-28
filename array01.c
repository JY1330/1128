#include<stdio.h>
#define SIZE 5
int main()
{
	int i, score[5];
	
	score[0] = 10;
	score[1] = 10;
	score[2] = 10;
	score[3] = 10;
	score[4] = 10;
	
	for(i = 0; i < SIZE; i++)
		printf("score[%d] = %d\n", i, score[i]);
	
	return 0;
}
