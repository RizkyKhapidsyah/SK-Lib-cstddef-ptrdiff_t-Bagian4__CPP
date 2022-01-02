#include <iostream>
#include <algorithm>
#include <memory>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

void sorting(int b[], int n) {
	int i, c = 0;

	for (i = 0; i < n; i++) {
		if (b[i] % 2 == 0) {
			c++;
		}
	}
	
	cout << "The total even numbers are: " << c << endl;
	cout << "original array :" << " ";
	cout << "\n";

	for (i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	
	cout << "\n";
	pair<int*, ptrdiff_t> p = get_temporary_buffer<int>(10);

	uninitialized_copy(b, b + p.second, p.first);
	sort(p.first, p.first + p.second);

	cout << "sorted array :" << endl;

	for (i = 0; i < p.second; i++) {
		cout << p.first[i] << " ";
	}
}

int main() {
	int b[] = { 8, 9, 2, 1, 10, 14, 37, 18, 17, 5 };
	int n = sizeof(b) / sizeof(b[0]);
	sorting(b, n);
	_getch();
	return 0;
}
