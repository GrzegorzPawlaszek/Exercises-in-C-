#include <iostream>
#include <math.h>

using namespace std;

unsigned short koduj(int plec, int stan_cyw,
	int grupa_wiek, int edu,
	int zam, int region,
	int odp);


void info(unsigned short kod);


int main() {

	info(koduj(0, 3, 2, 3, 0, 12, 6));

	system("pause");
}

unsigned short koduj(int plec, int stan_cyw, int grupa_wiek, int edu, int zam, int region,
	int odp) {

	unsigned short result = 0;

	result = result | plec;
	result = result | stan_cyw * (int)pow(2, 1);
	result = result | grupa_wiek * (int)pow(2, 3);
	result = result | edu * (int)pow(2, 5);
	result = result | zam * (int)pow(2, 7);
	result = result | region * (int)pow(2, 9);
	result = result | odp * (int)pow(2, 13);

	return result;
}