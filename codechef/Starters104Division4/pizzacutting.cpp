// Link to problem: https://www.codechef.com/START104D/problems/PIZZAC
// Link to solution: https://www.codechef.com/viewsolution/1026243980

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t; 
	for(int i = 0 ; i<t;i++){
	    int n;
	    cin >> n;
	    if(n==1){
	        cout << "YES" << endl;
	        
	    }
	    else if( n % 2  == 0){
	       cout << "YES" << endl;
	       
	   }
	   else{
	       
	   cout << "NO" << endl;
	   }
	    
	}
	return 0;
}