#include <iostream>
using namespace std;

// array of integers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
int n;

void input() {
	while (true)
	{
		cout << "masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nmaksimum panjang array adalah 20" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nenter array element" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
// swaps the element at index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)														// langkah 1
		return;

	//partition the list into two parts:
	//one containing elements less that or equal to pivot
	//outher containning element greather than pivot

	pivot = arr[low];													// langkah 2

	i = low + 1;														// langkah 3
	j = high;															// langkah 4

}