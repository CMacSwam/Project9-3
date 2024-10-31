#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int rollDie();
void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main() {
	srand(static_cast<unsigned int>(time(0)));

}

int rollDie() {
	return rand() % 6 + 1; 
}

void displayRun(int values[], int size) {

	for (int i = 0; i < size; i++) {
		cout << values[i];
	}

}

bool hasRun(int values[], int size) {

	bool run = false;

	for (int i = 0; i < size - 1; i++) {

		if (values[i] == values[i + 1]) {
			run = true;
		}
	}

	return run;
}



