#include <iostream> 
#include <fstream>

using namespace std;

int main() {
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("NECKLACE.INP");
	outFile.open("NECKLACE.OUT");
	
	string s;
	inFile >> s;
	
	int n = s.length();
	char a = s[0];
	int ind = 0;
	for(int i = 0; i < n; i++) {
		if(a > s[i]) {
			a = s[i];
		}
	}
	
	for(int i = 0; i < n; i++) {
		int j;
		if(s[i] == a) {
			if(s[i+1] < s[ind+1]) {
				ind = i;
			}
			if(ind == n-1) {
				if(s[0] < s[i+1]) {
					ind = i;
				}
			}
		}
		
		
		
//		if(i != n-1 && s[i+1] < s[a+1]) {
//			a = s[i];
//			ind = i;
//		} else if(s[0] < s[a+1]) {
//			a = s[0];
//			ind = 0;
//		}
	}
	cout << ind << " " << a;
	
	string outp = "";
	for(int i = ind; i < n; i++) {
		outp += s[i];
	}
	for(int i = 0; i < ind; i++) {
		outp += s[i];
	}
	
	outFile << outp;
}
