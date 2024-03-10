#include <stdio.h>
int main(){
	char day;
	printf("enter day(1-7) : ");
	scanf("%c",&day);

	switch(day){
case1:
		printf("monday");
		break;
case2:
		printf("tuesday");
		break;
case3:
		printf("wednesday");
		break;
case4:
		printf("thrusday");
		break;
case5:
		printf("friday");
		break;
case6:
		printf("saturday");
		break;
case7:
		printf("sunday");
		break;
		default:
		printf("not a valid day");
	}
	 return 0 ;
}
