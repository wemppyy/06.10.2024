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
void array_sum(T* arr1, T* arr2, T* arr3, int size) {
	for (size_t i = 0; i < size; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
}

template <typename T>
void print_arr(T* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
}

int main() {
	srand(time(0));
	int arr_size;
	cout << "Enter size of arrys: ";
	cin >> arr_size;
	int* arr1 = create_arr<int>(arr_size);
	int* arr2 = create_arr<int>(arr_size);
	int* arr3 = new int[arr_size]();
	array_sum(arr1, arr2, arr3, arr_size);
	cout << "1. arr = ";
	print_arr(arr1, arr_size);
	cout << "2. arr = ";
	print_arr(arr2, arr_size);
	cout << "result = ";
	print_arr(arr3, arr_size);





	return 0;
}