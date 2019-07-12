#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main() {
	ofstream outFile;
	ifstream inFile;
	
	outFile.open("WATER.INP", ios::out);
	
	outFile<< 1000 << "\n";
	for(int i = 0; i < 1000; ++i) {
		outFile << rand()%100 << " " << rand()%100 << "\n";
		cout << rand()%100 << " " << rand()%100 << "\n";
	}
	cout << "done";
	return 0;
}
