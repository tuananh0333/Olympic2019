#include <fstream>
#include <stack> 

using namespace std;


int main() {
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("BRACKETS.INP");
	outFile.open("BRACKETS.OUT");
	
	string str;
	inFile >> str;
	
	int n = str.length();
	
	int outp = -1;
	
	for(int k = 0; k < n; k++) {
		bool isNg = true;
		string s = str.substr(k,n-k) + str.substr(0, k);
		stack <char> ngs;
		
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
				ngs.push(s[i]);
			} else if (ngs.size() == 0) {
				isNg = false;
			} else if( ((s[i] == '}') && (ngs.top() != '{')) || ((s[i] == ']') && (ngs.top() != '[')) || ((s[i] == ')') && (ngs.top() != '('))) {
				isNg = false;
			} else {
				ngs.pop();
			}
			
			if(i == s.length()-1 && ngs.size() != 0) {
				isNg = false;
			}
		}
		if(isNg) {
			outp = k+1;
			break;
		}
	}
	
	outFile << outp;
}
