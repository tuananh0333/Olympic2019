#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("/Users/ta03333/CLionProjects/untitled/Olympic2019/Sum/SUM.INP");
	outFile.open("/Users/ta03333/CLionProjects/untitled/Olympic2019/Sum/SUM.OUT");
	
    long double a,b;
    inFile >> a;
    inFile >> b;
    
    cout << a << b;
    
    unsigned long int c = a / 1;
    unsigned long int d = b / 1;
    
    unsigned long int n = d - (c+1);
    
    outFile << (d-c)/n;
    
    cout << c << d;
    
    inFile.close();
    outFile.close();
}
