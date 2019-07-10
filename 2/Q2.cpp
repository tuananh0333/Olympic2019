#include <iostream>
#include <fstream>
#include <list>
using namespace std;

int main() {
	ifstream inFile;
	list<int> lst;
	int x;
	int min;
	
	inFile.open("input.txt");
	if(!inFile) {
		cout << "Could not open file";
		return 0;
	}
	
	while(inFile >> x) {
		lst.push_back(x);
	}
	
	list <int> :: iterator it; 
	list <int> :: iterator itmp; 
	
	//Get first space
	itmp = lst.begin();
	int num1 = *itmp;
	min = *itmp - *(++itmp);
	if(min < 0) {
		min *= -1;
	}
	int num2 = *itmp;
	
	//find min space
    for(it = lst.begin(); it != lst.end(); ++it) {
    	itmp = it;
    	for(itmp++; itmp != lst.end(); ++itmp) {
    		int sub = *it - *itmp;
    		if(sub < 0) {
    			sub *= -1;
			}
			
    		if(sub < min) {
    			num1 = *it;
    			num2 = *itmp;
    			min = sub;
			}
		}
	}
	
	cout << "num1: " << num1 << "\n";
	cout << "num2: " << num2 << "\n";
	cout << "space: " << min << "\n";
	
	return 1;
}
