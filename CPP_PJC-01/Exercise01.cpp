#include <iostream>

using namespace std;

void BMI() {
	double wzrost, waga;
	cout << "Podaj wzrost w centymetrach: ";
	cin >> wzrost;
	cout << "Podaj wage w kilogramach: ";
	cin >> waga;
	cout << "\nTwoj wspolczynnik BMI wynosi " << waga / (wzrost*wzrost) * 10000 << endl;
}

int main(void) {

	BMI();
	system("pause");

	return 0;
}