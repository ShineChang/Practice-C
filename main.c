#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fp[1][3], sort[1][3];
	int num, x, y, i, j, k;
	scanf("%d", &num);
	for(i = 1 ; i <= num ; i++)
	{
		for(j = 0 ; j <= 3 ; j++)
		{
			for(k = 0 ; k <= 1 ; k++)
				scanf("%d", &fp[k][j]);
		}
		x = (fp[0][0] + fp[0][1] + fp[0][2] + fp[0][3])/4;
		y = (fp[1][0] + fp[1][1] + fp[1][2] + fp[1][3])/4;
		for(j = 0 ; j <= 3 ; j++)
			for(k = 0 ; k <= 1 ; k++)
			{
				if(k = 0)
				{
					fp[k][j] -= x;
				}
				if(k = 1)
				{
					fp[k][j] -= y;
				}
			}
		for(j = 0 ; j <= 3 ; j++)
		{
			if(fp[0][j] < 0 && fp[1][j] > 0){
			sort[0][0] = fp[0][j];
			sort[1][0] = fp[1][j];
			}	
			if(fp[0][j] > 0 && fp[1][j] > 0){
			sort[0][1] = fp[0][j];
			sort[1][1] = fp[1][j];
			}
			if(fp[0][j] > 0 && fp[1][j] < 0){
			sort[0][2] = fp[0][j];
			sort[1][2] = fp[1][j];
			}
			if(fp[0][j] < 0 && fp[1][j] < 0){
			sort[0][3] = fp[0][j];
			sort[1][3] = fp[1][j];
			}
		}
		for(j = 0 ; j <= 3 ; j++)
			for(k = 0 ; k <= 1 ; k++)
			printf("%d", sort[k][j]);
	}
	
	return 0;
}
