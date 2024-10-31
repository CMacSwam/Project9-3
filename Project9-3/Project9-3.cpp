#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int rollDie();
void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main() {
	srand(static_cast<unsigned int>(time(0)));

	int array[20];

	for (int i = 0; i <= 20; i++) {
		array[i] = rollDie();
	}

	if (hasRun(array, 20)) {
		cout << "has run: ";
		displayRun(array, 20);
	}
	else{
		cout << "no run: ";
		displayRun(array, 20);
	}

}

int rollDie() {
	return rand() % 6 + 1; 
}

void displayRun(int values[], int size) {

	for (int i = 0; i < size; i++) {
		if (values[i] == values[i + 1]) {

			cout << "(" << values[i] << " " << values[i + 1] << " ";

			for (int c = i+1; c < size - 1; c++) {
				if (values[c] != values[c+1]) {
					cout << values[c] << ") ";
					i++;
					break;
				}
				else { cout << values[c] << " "; i++; }
			}

		}
		
		else {
				cout << values[i] << " ";
		}

	}
	if (values[19] == values[20]) {
		cout << ")";
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



