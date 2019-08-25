#include <fstream>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Exp {
	unsigned int a,b,c,d;
};

int compare(const void * a, const void * b) {
	Exp* a1 = (Exp*)a;
	Exp* b1 = (Exp*)b;
	int suma = a1->a + a1->b;
	int sumb = b1->a + b1->b;
	int suba = abs(a1->a - a1->b);
	int subb = abs(b1->a - b1->b);
	if (suma - sumb > 0) {
		return 1;
	} else if (suma - sumb < 0) {
		return -1;
	} else {
		return subb - suba;
	}
}

int main() {
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("SVOI.INP");
	outFile.open("SVOI.OUT");
	
	int n, t, p;
	inFile >> n >> t >> p;
	inFile.ignore();
	
	Exp arr[n];
	
	for (int i = 0; i < n; ++i) {
		inFile >> arr[i].a >> arr[i].b >> arr[i].c >> arr[i].d;
		inFile.ignore();
	}
	
	int outp = 0;
	
	int i = 0;
	while(i != n) {
		if( (arr[i].a <= t) && (arr[i].b <= p)) {
			cout << arr[i].a << endl;
			outp++;
			t+=arr[i].c;
			p+=arr[i].d;
			
			arr[i] = arr[n-1];
			n--;
			i = 0;
		} else {
			i++;
		}
	}
	
	outFile << outp;
}
