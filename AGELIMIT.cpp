#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, a;
        cin>>x>>y>>a;
        if(x<=a and a<y){
            cout<<"yes"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
