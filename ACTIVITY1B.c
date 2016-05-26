#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int birth,year,age;
	printf("Enter your Birth year: ");
	scanf("%d",&birth);
	printf("\nEnter year today: ");
	scanf("%d",&year);
	age = year-birth;
	printf("\n\nYou are about %d years of age.\n\n",age);
	system("PAUSE");
	return 0;
}
