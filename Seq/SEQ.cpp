//
//  SEQ.cpp
//  13-10
//
//  Created by le tuan anh on 10/13/19.
//  Copyright © 2019 CNTT-TDC. All rights reserved.
//

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;
    
//    outFile.open("/Users/ta03333/13-10/13-10/SEQ.INP");
//
//    for (int i = 0; i < 300000; i++) {
//        outFile << 1 << " ";
//    }
    
    inFile.open("/Users/ta03333/13-10/13-10/SEQ.INP");
    outFile.open("/Users/ta03333/13-10/13-10/SEQ.OUT");

    int n;
    inFile >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        inFile >> arr[i];
    }

    int max = 0;

    for (int i = 0; i < n-2; i++) {
        int j = i;
        int sum = 0;
        while (j+2 < n) {
            sum += arr[j] + arr[j+1] + arr[j+2];
            j+=3;
            if(sum > max) {
                max = sum;
            }
        }
    }

    outFile << max;
    
    inFile.close();
    outFile.close();
}
