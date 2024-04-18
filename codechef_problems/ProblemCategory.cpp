// problem link
// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROBCAT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    if(n >= 200){
	        cout << "Hard\n";
	    }else if(n < 200  && n >= 100){
	        cout << "Medium\n";
	    }else{
	        cout << "Easy\n";
	    }
	}
	return 0;
}
