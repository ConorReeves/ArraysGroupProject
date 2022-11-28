#include <iostream>
#include "stdc++.h"
using namespace std;

int main()
{
	/*Array to be used*/
	int numbers[7] = {44, 14, 3, 4, 5, 9, 2};

	/*Other variables to be initialised*/
	int numOfValues, valToFind, occurrences{}, average, total = 0;
	auto opt = 0;

	/*Vars for Option 5 & 9*/
	int max = INT_MIN;
	int min = INT_MAX;

	/*Getting Array Size for later on*/
	/*const int arraySize = 0; for (auto i : numbers) { arraySize++; }*/
	const int arraySize = sizeof(numbers) / sizeof(numbers[0]);

	/*Menu:
		Printing all options,
		Asks for input to select option
		Runs selected options associated code*/
	
selection:
	do {
		printf("\nSelection Menu:\n\n");
		printf("\t1.  DISPLAY\n");
		printf("\t2.  TOTAL\n");
		printf("\t3.  AVERAGE\n");
		printf("\t4.  LARGEST\n");
		printf("\t5.  SMALLEST\n");
		printf("\t6.  OCCURRENCES OF VALUE\n");
		printf("\t7.  SCALE UP\n");
		printf("\t8.  REVERSE\n");
		printf("\t9.  ZERO BASE\n");
		printf("\t10. EXIT\n");

		printf("\n\tPlease make a selection:\t");
		cin >> opt;

		switch (opt) {
		case 1:
			printf("\n\n");
			for (int i = 0; i < arraySize; i++) {
				printf("%d\t", numbers[i]);
			}
			printf("\n\n");
			break;
		case 2:
			total = 0;
			for (int i = 0; i < arraySize; i++) {
				total += numbers[i];
			}

			printf("\n\nThe total of the numbers is: %d", total);

			for (int l = 0; l < 2; l++) { cout << endl; };
			break;
		case 3:
			numOfValues = 0;
			for (int i = 0; i < arraySize; i++) {
				numOfValues += 1;
			}

			total = 0;
			for (int i = 0; i < arraySize; i++) {
				total += numbers[i];
			}

			average = total / numOfValues;
			printf("\n\nThe average is:\t%d\n\n", average);
			break;
		case 4:
			break;
		case 5:
			for (int i = 0; i < arraySize; i++) {
				if (numbers[i] < min) {
					min = numbers[i];
				}
			}
			printf("\n\nThe smallest number is: \t%d.\n\n", min);
			break;
		case 6:
			cout << "Enter value to find:\t";
			cin >> valToFind;
			occurrences = 0;

			for (auto i : numbers) {
				if (i == valToFind) {
					occurrences++;
				}
			}

			printf("\n\nThere was %d occurrence(s).\n\n", occurrences);
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			/*sort(numbers, numbers + arraySize);*/
			printf("\n\n");
			for (int i = 0; i < arraySize; i++) {
				if (numbers[i] < min) {
					min = numbers[i];
				}
			}
			for (int i = 0; i < arraySize; i++) {
				printf("%d\t", numbers[i] - min);
			}
			printf("\n\n");
			break;
		case 10:
			return 0;
			break;
		default:
			printf("\n\nInvalid option selected... try again...\n\n");
			goto selection;
		}
	} while (1);
}

