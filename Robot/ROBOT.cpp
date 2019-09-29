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
    
    inFile.open("/Users/ta03333/cpp/29-9/29-9/Robot/ROBOT.INP");
    outFile.open("/Users/ta03333/cpp/29-9/29-9/Robot/ROBOT.OUT");
    
    int T,n,a,b,k;
    
    inFile >> T;
    for (int i = 1; i <= T; i++) {
        inFile >> n;
        inFile >> a;
        inFile >> b;
        inFile >> k;
        int d = 1;
        int vt = 1;
        
        for (int m = 0; m < n; m++) {
            while(vt + a < n) {
                vt += a;
                d++;
                m++;
                if(m >= n) {
                    outFile << d;
                }
            }
            
        }
    }
    
    inFile.close();
    outFile.close();
}
