// Zadania04_zaoczne.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>



template<typename T>

T getMaxRecur(const T* arr, size_t size) {
	static T biggest = arr[0];
	static size_t i = 0;

	if (i < size)
	{
		if (biggest < arr[i])
		{
			biggest = arr[i];
		}
		i++;
		getMaxRecur(arr, size);
	}
	return biggest;
}


template<typename T>
T getMaxRecur2(const T* arr, size_t size) {
	T biggest;
	if (size == 2) {
		if (arr[0] > arr[1]) {
			return arr[0];
		}
		else {
			return arr[1];
		}
	}
	else if (size == 1) {
		return arr[0];
	}
	biggest = getMaxRecur2(arr + 1, size - 1);
	if (biggest < *arr) {
		biggest = *arr;
	}
	return biggest;

}

int main() {
	using std::cout; using std::endl; using std::string;

	double ad[]{ 2.5, 9.1, 4.5, -1.0 };
	cout << "ad: " << getMaxRecur(ad, 4) << "; ";
	cout << "ad: " << getMaxRecur2(ad, 4) << "; ";

	int    ai[]{ 2, 11, 5, 1, 9 };
	cout << "ai: " << getMaxRecur(ai, 5) << "; ";

	string as[]{ "Ala", "Ela", "Ula", "Ola" };
	cout << "as: " << getMaxRecur(as, 4) << endl;
	system("pause");
}
