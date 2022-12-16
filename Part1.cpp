#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int userN; 
	int countN=0;  
	int currentN=1; 
	printf("Enter the value of n: ");
	scanf("%d", &userN); 
	for (currentN = 1; currentN <= userN; ++currentN) {
		if ((currentN % 7)== 0) {
			printf("%d ", currentN);
				countN = countN + 1;
		}
	}
	printf("\n Total numbers found: %d", countN); 

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
