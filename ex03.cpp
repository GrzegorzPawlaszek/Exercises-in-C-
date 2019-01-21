#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void getPivots(const T* arr, int* info, size_t size) {
	bool isPivot = true;

	for (int i = 0; i < size; i++) {
		isPivot = true;
		for (int j = i; j >= 0; j--) {
			if (arr[i] < arr[j]) {
				isPivot = false;
			}
		}
		for (int j = i; j < size; j++) {
			if (arr[i] > arr[j]) {
				isPivot = false;
			}
		}
		if (isPivot) {
			info[i] = 1;
		}
	}
}

template <typename T>
std::vector<int> getPivots(std::vector<T>& v) {

	vector <int> result;

	bool isPivot = true;

	for (int i = 0; i < v.size(); i++) {
		isPivot = true;
		for (int j = i; j >= 0; j--) {
			if (v.at(i) < v.at(j)) {
				isPivot = false;
			}
		}
		for (int j = i; j < v.size(); j++) {
			if (v.at(i) > v.at(j)) {
				isPivot = false;
			}
		}
		if (isPivot) {
			result.push_back(1);
		}
		else {
			result.push_back(0);
		}

	}

	return result;

}


template <typename T>
void print(const T* arr, const int* info, size_t size) {
	cout << endl << "[ ";
	for (int i = 0; i < size; i++) {
		if (info[i] == 1) {
			cout << " " << i << ":" << arr[i] << " ";
		}
	}
	cout << " ]" << endl;
}

int main() {
	int a[] = { 1, 2, 1, 2, 2, 5 };
	constexpr size_t size = std::size(a);
	int info[size];
	getPivots(a, info, size);
	print(a, info, size);

	std::vector<std::string> v{ "A", "B", "A", "B", "B", "E" };
	std::vector<int> res = getPivots(v);
	print(v.data(), res.data(), v.size());
	system("pause");
}