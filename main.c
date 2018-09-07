#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;                                                                                             
}
int main(void) {
	int num, i, j, k;;
	scanf("%d", &num);
	for(i = 1 ; i < num+1 ; i++)
	{
		int fp[2][4], angle[4], length[4];
		
		for(j = 0 ; j < 4 ; j++)
		{
			for(k = 0 ; k < 2 ; k++)
				scanf("%d", &fp[k][j]);
		}
		if(((fp[0][1] - fp[0][0])*(fp[1][2] - fp[1][0]) - (fp[1][1] - fp[1][0])*(fp[0][2] - fp[0][1])) > 0)
		{
			swap(&fp[0][1], &fp[0][2]);
			swap(&fp[1][1], &fp[1][2]);
		}
		if(((fp[0][1] - fp[0][0])*(fp[1][3] - fp[1][0]) - (fp[1][1] - fp[1][0])*(fp[0][3] - fp[0][1])) > 0)
		{
			swap(&fp[0][1], &fp[0][3]);
			swap(&fp[1][1], &fp[1][3]);
		}
		if(((fp[0][2] - fp[0][0])*(fp[1][3] - fp[1][0]) - (fp[1][2] - fp[1][0])*(fp[0][3] - fp[0][1])) > 0)
		{
			swap(&fp[0][3], &fp[0][2]);
			swap(&fp[1][3], &fp[1][2]);
		}
		for(j = 0 ; j < 4 ; j++)
		{
			for(k = 0 ; k < 2 ; k++)
				printf("%d", fp[k][j]);
		}
		angle[0] = (fp[0][1] - fp[0][0])*(fp[0][2] - fp[0][1]) + (fp[1][1] - fp[1][0])*(fp[1][2] - fp[1][1]);
		angle[1] = (fp[0][1] - fp[0][0])*(fp[0][3] - fp[0][0]) + (fp[1][1] - fp[1][0])*(fp[1][3] - fp[1][0]);
		angle[2] = (fp[0][2] - fp[0][3])*(fp[0][3] - fp[0][0]) + (fp[1][2] - fp[1][3])*(fp[1][3] - fp[1][0]);
		angle[3] = (fp[0][2] - fp[0][3])*(fp[0][2] - fp[0][1]) + (fp[1][2] - fp[1][3])*(fp[1][2] - fp[1][1]);
		length[0] = pow((fp[0][1] - fp[0][0]) , 2) + pow((fp[1][1] - fp[1][0]) , 2);
		length[1] = pow((fp[0][2] - fp[0][1]) , 2) + pow((fp[1][2] - fp[1][1]) , 2);
		length[2] = pow((fp[0][2] - fp[0][3]) , 2) + pow((fp[1][2] - fp[1][3]) , 2);
		length[3] = pow((fp[0][3] - fp[0][0]) , 2) + pow((fp[1][3] - fp[1][0]) , 2);
		
		if(angle[0] == 0 && angle[1] == 0 && angle[2] == 0 && angle[3] == 0 && length[0] == length[1] && length[2] == length[3] && length[0] == length[3])
			printf("square");
		else if(angle[0] == 0 && angle[1] == 0 && angle[2] == 0 && angle[3] == 0)
			printf("rectangle");
		else if(length[0] == length[1] && length[2] == length[3] && length[0] == length[3])
			printf("diamond");
		else
			printf("other");
	}
	
	return 0;
}
