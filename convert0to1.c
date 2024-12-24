#include <stdio.h>

int main(){
int n = 1001,sum=0,rem;
while(n>=0){
rem = n%10;
if(rem == 0){
sum = sum + 1 * rem;
}
else{
sum = sum * 10 + rem;
}
n = n / 10;
}
printf("%d\n",sum);
return 0;
}
