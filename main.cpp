#include <iostream>
using namespace std;

unsigned int fibonacci (unsigned int pos);

int main () {
	unsigned int n;
	cout << "How many numbers to generate in the sequence? ";
	cin >> n;
	for (unsigned int i = 0; i < n; i++)
		cout << ' ' << fibonacci(i);
	cout << endl;
	return 0;
}

unsigned int fibonacci (unsigned int pos) {
	if (pos == 0 || pos == 1)
		return 1;
	return fibonacci(pos - 1) + fibonacci(pos - 2);} 