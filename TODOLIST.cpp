#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int d[n], cnt=0;
        for(int i=0; i<n; i++){
            cin>>d[i];
            if(d[i]>=1000){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
	// your code goes here
	return 0;
}
//right so in this problem we have to basically count the 
//number of problems that are in his to do list that have 
//a difficulty of 1000 or more. so we initialize a var cnt
//and cnt 'count' increases whenever a problem is above 1000
//n is the total number of problems and d is difficulty
//i specifies that specific problem and difficulty of is
//d[i] is initialized in loop; if d[i] is >=1000 cnty increases