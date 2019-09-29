//
//  SNUM.cpp
//  29-9
//
//  Created by le tuan anh on 9/29/19.
//  Copyright © 2019 CNTT-TDC. All rights reserved.
//

#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;
    
    inFile.open("/Users/ta03333/cpp/29-9/29-9/DaySo/FSEQ.INP");
    outFile.open("/Users/ta03333/cpp/29-9/29-9/DaySo/FSEQ.OUT");
    
    int n;
    inFile >> n;
    
    vector<int> vec;
    
    for(int i = 0; i < n; i++) {
        int a;
        inFile >> a;
        vec.push_back(a);
    }
    
    int count = 0;
    int max = 0;
    for (int i = 2; i < vec.size(); i++) {
        if(vec.at(i) == vec.at(i-1) + vec.at(i-2)) {
            count++;
            if(i == vec.size()-1) {
                if (count > max) {
                    max = count;
                }
            }
        } else {
            if (count > max) {
                max = count;
                count = 0;
            }
        }
    }
    
    if(max > 0) {
        outFile << max+2;
    } else {
        outFile << "-1";
    }
    
    inFile.close();
    outFile.close();
}
