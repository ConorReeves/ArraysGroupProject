#include <iostream>
using namespace std;

int main()
{
	/*Array to be used for all functions*/
	int numbers[5] = { 1, 2, 3, 4, 5 };

	/*Other variables to be initialised*/
	int opt, numOfValues, average, max, total = 0;

	/*Menu:
		Printing all options,
		Asks for input to select option
		Runs selected options associated code*/
	
selection:
	printf("\nSelection Menu:\n\n");
	printf("\t1.  DISPLAY\n");
	printf("\t2.  TOTAL\n");
	printf("\t3.  AVERAGE\n");
	printf("\t4.  LARGEST\n");
	printf("\t5.  SMALLEST\n");
	printf("\t6.  OCCURENCES OF VALUE\n");
	printf("\t7.  SCALE UP\n");
	printf("\t8.  REVERSE\n");
	printf("\t9.  ZERO BASE\n");
	printf("\t10. EXIT\n");

	printf("\n\tPlease make a selection:\t");
	cin >> opt;

	switch (opt) {
	case 1:
		printf("\n\nDisplaying all values in array:\n\n");

		for (int i = 0; i < 5; i++) {
			printf("%d", numbers[i]);
		}
		break;
	case 2:
		total = 0;
		for (int i = 0; i < 5; i++) {
			total += numbers[i];
		}

		printf("\n\nThe total of the numbers is: %d", total);

		for (int l = 0; l < 2; l++) { cout << endl; };
		break;
	case 3:
		numOfValues = 0;
		for (int i = 0; i < 5; i++) {
			numOfValues += 1;
		}

		total = 0;
		for (int i = 0; i < 5; i++) {
			total += numbers[i];
		}

		average = total/numOfValues;
		printf("\n\nThe average is:\t%d\n\n", average);
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		break;
	case 10:
		return 0;
		break;
	default:
		printf("Invalid option selected... try again...");
	}
	goto selection;

}

