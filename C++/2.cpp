#include <iostream>

using namespace std;

int main() {
	int prev = 1;
	int current = 2;
	int next = 0;
	int sum = 0;

	while (second < 4000000) {
		next = prev + current;
		prev = current;
		current = next;

		if (prev % 2 == 0) {
			sum += prev;
		}
	}
	cout << sum << endl;
}