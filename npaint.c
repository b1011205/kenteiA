
#include <stdio.h>

int keisan(int a){

if(a==0)
return 0;
if(a == 1 ||a == 2)
return 1000;
if(a == 3 || a == 4)
return 800;
if(a>=5 && a<= 9)
return 600;
if(a>=10 && a<=29)
return 400;
if(a>=30)
return 200;

return -1;
}

int main(void){
int from,until,i,money=0;
scanf("%d\n%d",&from,&until);


for(i=from;i<=until;i++){
	money = i * keisan(i);
	printf("%d:%d Yen.\n",i,money);
}
return 0;
}
