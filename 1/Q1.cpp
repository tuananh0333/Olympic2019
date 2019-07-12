#include <iostream>
#include <fstream>
#include <list>
using namespace std;

int main() {
    long long int x;
    list <long long int> lst;
    ifstream inFile;
    
    inFile.open("input.txt");
    if (!inFile) {
        cout << "Unable to open file ";
        return 0;
    }
    
    
    long long int max;
    inFile >> x;
    //find largest odd number
    while (inFile >> x) {
    	bool isOdd = true; 
    	long long int tmp = x;
        while(tmp > 0) {
        	if((tmp%10) % 2 == 0) {
        		isOdd = false;
        		break;
			}
			tmp /= 10;
		}
		if(isOdd) {
			if(max < x) {
				max = x;
			}
		}
    }
    
    //print list
//    for(it = lst.begin(); it != lst.end(); ++it) {
//    	cout << *it << " ";
//	}
//	cout << "\n";
    
    inFile.close();
    if(max != NULL) {
    	cout << "Value = " << max << endl; 
	} else {
		cout << "No number found!" << endl; 
	}
    
    return 1;
}
