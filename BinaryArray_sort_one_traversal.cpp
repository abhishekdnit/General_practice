// CPP program to sort a binary array
#include <iostream>
using namespace std;

void sortBinaryArray(int a[], int n)
{
	int j = -1;
	for (int i = 0; i < n; i++) {

		// if number is smaller than 1
		// then swap it with j-th number
		if (a[i] < 1) {        // ith finding 0s & j is pointing on 1s & after swapping jth pointing to 0 thatswhy j is incrementing to swap.
            j++;                // putting 0s on left & 1s on right.
			swap(a[i], a[j]);
		}
	}
}

// Driver code
int main()
{
	int a[] = { 0, 0, 0, 1, 0, 1, 0, 1, 1, 1,
				1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0 };
	int n = sizeof(a) / sizeof(a[0]);
	sortBinaryArray(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}
