#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int b,h,area;
	printf("Enter Triangle's Base: ");
	scanf("%d", &b);
	
	printf("\nEnter Triangle's Height: ");
	scanf("%d", &h);
	
	area=(b*h)/2;
	printf("\nThe Area of the triangle is: %d\n\n", area);
	system("PAUSE");
	return 0;
}
