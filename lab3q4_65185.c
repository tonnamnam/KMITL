#include <stdio.h>
int main() {
	int a,b=0,c=0;
	do{
		printf("enter a number : ");
		scanf("%d",&a);
		if(a>0){
			b = b+a;
			c++;
		}
	}while(a>0);
	printf("summation = %d\n",b);
	printf("averate = %f",(double)b/(double)c);
}
