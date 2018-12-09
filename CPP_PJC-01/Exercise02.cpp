#include <iostream>
#define GETMAX
#define GETMIN

#ifndef GETMAX
	#ifndef GETMIN
		exit(0);
	#endif
#endif 



using namespace std;

void getMin(double a, double b, double c) {
	if (a < b && a < c)
		cout << "Min: " << a << endl;
	else if (b < a && b < c)
		cout << "Min: " << b << endl;
	else cout << "Min: " << c << endl;
}

void getMax(double a, double b, double c) {
	if (a > b && a > c)
		cout << "Max: " << a << endl;
	else if (b > a && b > c)
		cout << "Max: " << b << endl;
	else cout << "Max: " << c << endl;
}

void makra() {
	double a, b, c;
	cout << "Podaj trzy liczby: ";
	cin >> a >> b >> c;	
	
	#if (defined (GETMAX)&&defined (GETMIN))
		getMax(a, c, b);
		getMin(a, b, c);
	#elif defined GETMAX 
		getMax(a, b, c);
	#elif defined GETMIN
		getMin(a, b, c);
	#endif

}
/*
int main(void) {

	makra();
	system("pause");
	return 0;
}
*/