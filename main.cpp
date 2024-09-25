#include <iostream>
#include <ctime>

using namespace std;

template <typename T>
T* create_arr(int size) {
	T* arr = new T[size]();
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
	return arr;
}

template <typename T>
void print_arr(T* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
}

template <typename T>
T get_max(T* arr1, T* arr2, int size1, int size2) {
	int max1 = arr1[0], max2 = arr2[0];
	for (int i = 0; i < size1; i++) {
		if (arr1[i] > max1) max1 = arr1[i];
	}
	for (int i = 0; i < size2; i++) {
		if (arr2[i] > max2) max2 = arr1[i];
	}
	return max1 > max2 ? max1 : max2;
}

template <typename T>
T get_min(T* arr1, T* arr2, int size1, int size2) {
	int min1 = arr1[0], min2 = arr2[0];
	for (int i = 0; i < size1; i++) {
		if (arr1[i] < min1) min1 = arr1[i];
	}
	for (int i = 0; i < size2; i++) {
		if (arr2[i] < min2) min2 = arr1[i];
	}
	return min1 < min2 ? min1 : min2;
}

template <typename T>
T get_avg(T* arr1, T* arr2, int size1, int size2) {
	int avg1 = 0, avg2 = 0;
	for (size_t i = 0; i < size1; i++)
	{
		avg1 += arr1[i];
	}for (size_t i = 0; i < size2; i++)
	{
		avg2 += arr2[i];
	}
	avg1 /= size1;
	avg2 /= size2;
	return (avg1 + avg2) / 2;
}

template <typename T>
void get_action(T* arr1, T* arr2, int size1, int size2, int(*ftpr[3])(int*, int*, int, int)) {
	int operation;
	cout << "Choose operation\n"
			"1. Get max\n"
			"2. Get min\n"
			"3. Get avarage\n";
	cin >> operation;
	cout << ftpr[operation-1](arr1, arr2, size1, size2);
}


int main() {
	srand(time(0));
	int(*ftpr[3])(int*, int*, int, int) = {get_max, get_min, get_avg};
	int arr1_size, arr2_size;
	cout << "Enter size of first array: ";
	cin >> arr1_size;
	int* arr1 = create_arr<int>(arr1_size);
	print_arr(arr1, arr1_size);
	cout << "Enter size of second array: ";
	cin >> arr2_size;
	int* arr2 = create_arr<int>(arr2_size);
	print_arr(arr2, arr2_size);
	cout << endl;
	get_action(arr1, arr2, arr1_size, arr2_size, ftpr);


	return 0;
}