#include <iostream>
#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,n;
main(void) {
	printf("輸入一整數:\n");
	scanf("%d",&n);
	printf("整數%d的因數為: ",n);
	for (i=1; i<=n;i++)
	{
		 if(n%i==0){	
			printf("%d ",i);
  		 }
	}
	return 0;
}

