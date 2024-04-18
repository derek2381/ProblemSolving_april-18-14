// problem link
// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROGLANG


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, a1, b1, a2, b2;
	    cin >> a >> b >> a1 >> b1 >> a2 >> b2;

	    vector<int> A, A1, A2;

	    A.push_back(a);
	    A.push_back(b);
	    sort(A.begin(), A.end());
	    A1.push_back(a1);
	    A1.push_back(b1);
	    sort(A1.begin(), A1.end());
	    A2.push_back(a2);
	    A2.push_back(b2);
	    sort(A2.begin(), A2.end());

	    if(A == A1){
	        cout << 1 << endl;
	    }else if(A == A2){
	        cout << 2 << endl;
	    }else{
	        cout << 0 << endl;
	    }
	}
	return 0;
}
