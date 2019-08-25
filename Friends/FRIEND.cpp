#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main() {
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("FRIEND.INP");
	outFile.open("FRIEND.OUT");
	
	int n;
	int B;
	inFile >> n;
	inFile >> B;
	inFile.ignore(1);
	
	int arr[n];
	for(int i = 0; i < n; i++) {
		inFile >> arr[i];
	}
	
	qsort(arr,n,sizeof(int),compare);
	
	int count = 0;
	int counti = 0;
	int countj = 0;
	
	for(int i = 0; i < n; i++) {
		int ci = 1;
		while(arr[i+1] == arr[i]) {
			counti++;
			ci++;
			i++;
		}
		
		if(arr[i]*2 == B) {
			count += (ci * (ci-1))/2;
		}
		
		int cj = 0;
		for(int j = i+1; j < n; j++) {
			countj++;
			int s = arr[j] + arr[i];
			if(s == B) {
				cj++;
			}
			if(s > B) {
				n = j;
				break;
			}
		}
		count += (cj*ci);
	}
	
	outFile << "i: " << counti << endl;
	outFile << "j: " << countj << endl;
	outFile << count;
}
