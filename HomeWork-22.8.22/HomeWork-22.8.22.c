#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

int main() {
	printf("--- Ex 1 ---\n");
	FILE* f;				  // A file pointer that stores the current position of a read or write within a file.

	// import the file to my program
	f = fopen("C:\\git\\HW\\HomeWork-22.8.22\\File1.txt", "r");
	if (f == NULL) {
		// problem
		// error message
	}
	else {
		char ch = fgetc(f);   // char stores single characters
		while (ch != EOF) {
			printf("%c", ch);
			ch = fgetc(f);    // The function fgetc() is used to read the character from the file.It returns the character pointed by file pointer.
		}
		fclose(f);			  // closes a stream pointed to by stream. The fclose function flushes any unwritten data in the stream's buffer
	}
	printf("\n\n");

	printf("--- Ex 2 ---\n");
	FILE* s;				  
	s = fopen("C:\\git\\HW\\HomeWork-22.8.22\\File1.txt", "r");
	if (s == NULL) {
		// problem
		// error message
	}
	else {
		int sum;
		char ch = fgetc(s);						// char stores single characters
		for (char i = 1; ch != EOF; i++) {
			ch = fgetc(s);
			sum = i;
		}
		printf("%d", sum);
		fclose(s);
	}
	printf("\n\n");


	printf("--- Ex 3 ---\n");
	FILE* ex3;
	ex3 = fopen("C:\\git\\HW\\HomeWork-22.8.22\\File1.txt", "r");
	if (ex3 == NULL) {
		// problem
		// error message
	}
	else {
		int sum3 = 0;
		char ch = fgetc(ex3);						// char stores single characters
		while (ch != EOF) {
			if (ch == '*') {
				sum3 = sum3 + 1;
			}
			else {
				// do nothing 
			}
			ch = fgetc(ex3);
		}
		printf("%d", sum3);
		fclose(ex3);
	}
	printf("\n\n");

	printf("--- Ex 4 ---\n");
	FILE* ex4;
	ex4 = fopen("C:\\git\\HW\\HomeWork-22.8.22\\File2.txt", "r");

	if (ex4 == NULL) {
		// problem
		// error message
	}
	else {
		int result4 = 0;
		int sum4 = 0;
		char ch = fgetc(ex4);						// char stores single characters
		while (ch != EOF) {
			if (ch == '\n') {
				sum4 = sum4 + 1;
			}
			result4 = sum4 + 1;
			ch = fgetc(ex4);
		}
		printf("%d", result4);
		fclose(ex4);
	}
	printf("\n\n");

	printf("--- Ex 5 ---\n");
	FILE* ex5;
	ex5 = fopen("C:\\git\\HW\\HomeWork-22.8.22\\File8.txt", "r");
	int counterC = 0;
	int counterI = 0;

	if (f == NULL) {
		// problem
		// error message
	}
	else {

		char num = fgetc(ex5) - '0';
		char ch = fgetc(ex5);

		while (ch != EOF)	
		{
			if (ch == 'c') {
				counterC = counterC + num;
			}

			else if (ch == 'i') {
				counterI = counterI + num;
			}
			num = fgetc(ex5) - '0';
			ch = fgetc(ex5);
		}
		fclose(ex5);
	}
	printf("\n\n");



	// COUNT C
	char* memory4C; // pointer declaration
	memory4C = malloc(counterC * sizeof(char));
	char* ptrC;
	ptrC = memory4C;


	// COUNT I
	int* memory4I;
	memory4I = malloc(counterI * sizeof(int));
	int* ptrI;
	ptrI = memory4I;

	for (int i = 0; i < counterC; i++) {
		scanf("%d", memory4C);
		memory4C++;
	}
	for (int i = 0; i < counterI; i++) {
		scanf("%d", memory4I);
		memory4I++;
	}
	free(memory4C);
	free(memory4I);
	return 0;
}
