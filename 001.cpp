#include <iostream>
#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,n;
main(void) {
	printf("��J�@���:\n");
	scanf("%d",&n);
	printf("���%d���]�Ƭ�: ",n);
	for (i=1; i<=n;i++)
	{
		 if(n%i==0){	
			printf("%d ",i);
  		 }
	}
	return 0;
}

