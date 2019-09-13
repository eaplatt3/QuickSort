//QuickSort Function

int partition(int* a, int start, int end) {

	int pivot = a[end];
	int P_index = start; //P-indes indicates the pivot value index
	int i;
	int t; //Temp variable

	/*Checks if the array value is less then pivot
	  then places to the left side by swapping*/
	for (i = start; i < end; i++) {
		if (a[i] <= pivot) {
			t = a[i];
			a[i] = a[P_index];
			a[P_index] = t;
			P_index++;
		}
	}

	/*Exchanging value of pivot & P-index*/
	t = a[end];
	a[end] = a[P_index];
	a[P_index] = t;

	return P_index;
}

void QuickSort(int* a, int start, int end) {
	if (start < end) {
		int P_index = partition(a, start, end);
		QuickSort(a, start, P_index - 1);
		QuickSort(a, P_index + 1, end);
	}
}