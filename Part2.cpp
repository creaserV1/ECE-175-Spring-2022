#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int treeH; 
	int i = 0;
	int j = 0; 
	int w = 0; 
	int x = 0; 
	printf("Enter the tree height: "); 
	scanf("%d", &treeH ); 
	while (treeH < 3) {
	printf("This entry is not valid\n");
	printf("Enter the tree height: ");
	scanf("%d", &treeH);
	}
	for (i = 1; i <= treeH; i++) {
		for (w = 0; w < (treeH - i); w++) {
			printf(" ");
		}
		for (j = 0; j < (2 * i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (x = 1; x < treeH; ++x) {
		printf(" "); 
	}
	printf("*\n");
	for (x = 1; x < treeH; ++x) {
		printf(" ");
	}
	printf("*");

}