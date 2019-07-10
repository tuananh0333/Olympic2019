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
    
    //find odd numbers
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
			lst.push_back(x);
		}
    }
    list <long long int> :: iterator it; 
    
    //print list
//    for(it = lst.begin(); it != lst.end(); ++it) {
//    	cout << *it << " ";
//	}
//	cout << "\n";
        
    //find max
    long long int max = *(lst.begin());
    for(it = lst.begin(); it != lst.end(); ++it) {
    	if(*it > max) {
    		max = *it;
		}
	}
    
    inFile.close();
    cout << "Value = " << max << endl; 
    return 1;
}
