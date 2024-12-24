#include <stdio.h>

int main(){
	int i=1,n,fact=1;
	printf("enter the number to find factorial\n");
	scanf("%d",&n);
	while(i<=n){
		fact = fact * i;
		i++;
	}
	printf("the factorial of %d is %d",n,fact);
       printf("\n");
	return 0;
}       
