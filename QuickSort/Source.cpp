#include <iostream>
#include "QuickSort.h"

using namespace std;



int main()
{
	//Variables
	const int rNum = 1000;
	int arr[rNum]; //creates array with 10 slots

	cout << "Unsorted Array" << endl;

	//Loop to fill array with random numbers & prints them
	for (int i = 0; i < rNum; i++) {

		arr[i] = 1 + rand() % 1000;
		cout << " " << arr[i];
	}

	cout << " " << endl;
	cout << " " << endl;
	//cout << arr[0] << endl;

	cout << "Sorted Array" << endl;

	QuickSort(arr, 0, rNum - 1);

	for (int i = 0; i < rNum; i++) {
		cout << arr[i] << " ";
	}

	//cout << "Loop Finished!";

	return 0;
}


