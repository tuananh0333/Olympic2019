//
//  SNUM.cpp
//  29-9
//
//  Created by le tuan anh on 9/29/19.
//  Copyright © 2019 CNTT-TDC. All rights reserved.
//

#include <fstream>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;
    
    inFile.open("/Users/ta03333/cpp/29-9/29-9/Snum/SNUM.INP");
    outFile.open("/Users/ta03333/cpp/29-9/29-9/Snum/SNUM.OUT");
    
    unsigned long long int n;
    inFile >> n;
    unsigned long long int ntmp = n;
    
    unsigned long int sum = 0;
    
    while (ntmp > 0) {
        sum += n%10;
        ntmp /= 10;
    }
    
    if(n % sum == 0) {
        outFile << 1;
    } else {
        outFile << 0;
    }
    
    inFile.close();
}
