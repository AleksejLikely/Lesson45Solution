#include <iostream>
#define SIZE 10
using namespace std;

int main() {
	srand(time(NULL));
	int array[SIZE];

	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 100;
	}
	
	for (int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}

	return 0;
}
