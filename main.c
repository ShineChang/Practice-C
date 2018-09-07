#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float fp[2][4], sort[2][4];
	int num, i, j, k;
	float x, y;
	scanf("%d", &num);
	for(i = 1 ; i <= num ; i++)
	{
		for(j = 0 ; j < 4 ; j++)
		{
			for(k = 0 ; k < 2 ; k++)
				scanf("%f", &fp[k][j]);
		}
		x = (fp[0][0] + fp[0][1] + fp[0][2] + fp[0][3])/4;
		y = (fp[1][0] + fp[1][1] + fp[1][2] + fp[1][3])/4;
		for(j = 0 ; j <= 3 ; j++)
			fp[0][j] -= x;
			fp[1][j] -= y;
		for(j = 0 ; j <= 3 ; j++)
		{
			if(fp[0][j] < 0 && fp[1][j] > 0){
			sort[0][0] = fp[0][j];
			sort[1][0] = fp[1][j];
			}	
			else if(fp[0][j] > 0 && fp[1][j] > 0){
			sort[0][1] = fp[0][j];
			sort[1][1] = fp[1][j];
			}
			else if(fp[0][j] > 0 && fp[1][j] < 0){
			sort[0][2] = fp[0][j];
			sort[1][2] = fp[1][j];
			}
			else if(fp[0][j] < 0 && fp[1][j] < 0){
			sort[0][3] = fp[0][j];
			sort[1][3] = fp[1][j];
			}
			
			else if(fp[0][j] < 0 && fp[1][j] == 0){
			sort[0][0] = fp[0][j];
			sort[1][0] = fp[1][j];
			}
			else if(fp[0][j] == 0 && fp[1][j] > 0){
			sort[0][1] = fp[0][j];
			sort[1][1] = fp[1][j];
			}
			else if(fp[0][j] > 0 && fp[1][j] == 0){
			sort[0][2] = fp[0][j];
			sort[1][2] = fp[1][j];
			}
			else if(fp[0][j] == 0 && fp[1][j] < 0){
			sort[0][3] = fp[0][j];
			sort[1][3] = fp[1][j];
			}
		}
		int angle[4], length[4];
		angle[0] = (sort[0][1] - sort[0][0])*(sort[0][2] - sort[0][1]) + (sort[1][1] - sort[1][0])*(sort[1][2] - sort[1][1]);
		angle[1] = (sort[0][1] - sort[0][0])*(sort[0][3] - sort[0][0]) + (sort[1][1] - sort[1][0])*(sort[1][3] - sort[1][0]);
		angle[2] = (sort[0][2] - sort[0][3])*(sort[0][3] - sort[0][0]) + (sort[1][2] - sort[1][3])*(sort[1][3] - sort[1][0]);
		angle[3] = (sort[0][2] - sort[0][3])*(sort[0][2] - sort[0][1]) + (sort[1][2] - sort[1][3])*(sort[1][2] - sort[1][1]);
		length[0] = pow((sort[0][1] - sort[0][0]) , 2) + pow((sort[1][1] - sort[1][0]) , 2);
		length[1] = pow((sort[0][2] - sort[0][1]) , 2) + pow((sort[1][2] - sort[1][1]) , 2);
		length[2] = pow((sort[0][2] - sort[0][3]) , 2) + pow((sort[1][2] - sort[1][3]) , 2);
		length[3] = pow((sort[0][3] - sort[0][0]) , 2) + pow((sort[1][3] - sort[1][0]) , 2);
		printf("%1.2f\n%1.2f", x, y);
		if(angle[0] == 0 && angle[1] == 0 && angle[2] == 0 && angle[3] == 0 && length[0] == length[1] && length[2] == length[3] && length[0] == length[3])
			printf("square");
		else if(angle[0] == 0 && angle[1] == 0 && angle[2] == 0 && angle[3] == 0 && length[0] == length[2] && length[1] == length[3])
			printf("rectangle");
		else if(length[0] == length[1] && length[2] == length[3] && length[0] == length[3])
			printf("diamond");
		else
			printf("other");
	}
	
	return 0;
}
