#include <iostream> 
#include <fstream>

using namespace std;

int main() {
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("CLOCK.INP");
	outFile.open("CLOCK.OUT");
	
	int h,m,s;
	inFile >> h;
	inFile >> m;
	inFile >> s;
	
	if(s == 59) {
		s = 0;
		if(m == 59) {
			m = 0;
			if(h == 23) {
				h = 0;
			} else {
				h +=1;
			}
		} else {
			m +=1;
		}
	} else {
		s +=1;
	}
	
	outFile << h << " " << m << " " << s;
}
