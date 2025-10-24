// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cout<<"Enter The Size Of Pyramid";
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"/ ";
        }
        cout<<endl;
    }
    return 0;
}
