#include<stdio.h>
int main() {
	typedef struct {
		int id;
		char name[20];
		float price;
	}Product;
	Product products[] = {
		{1,"Bread",1.00},
		{2,"Cocacola",2.50},
		{3,"Beer",10.0},
		{4,"Chocalate",2.50},
		{0,"EXIT",0.0}
	};
	int productCount = sizeof(products) / sizeof(products[0]);
	printf("********************************\n");
	printf("Family Convenience Store\n");
	printf("********************************\n");

	for (int i = 0;i < productCount;i++) {
		printf("(%d)\t%s\t%.2f\n", products[i].id, products[i].name, products[i].price);
	}
	printf("---------------------------------\n");
	printf("PLEASE ENTER A NUMBER:\n");
	int choice;
	scanf_s("%d", &choice);
	if (choice == 0) {
	
	}
	else {
		printf("THANK YOU!\n");
		printf("YOU HAVE SELECTED:\t[%s]\t%.2f\n", products[choice - 1].name, products[choice - 1].price);
	}
	printf("-----------------\n");
	printf("GOOD BYE!\n");
	printf("[PRESS ENTER TO EXIT...]\n");
	return 0;
}