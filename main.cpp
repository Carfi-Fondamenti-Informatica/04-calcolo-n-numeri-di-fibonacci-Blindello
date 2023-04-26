#include <iostream>
using namespace std;

int main() {
int n, K;
int a=0;
int b=0;
int i=0;
    cin>>n;
    while (n<=2) {
        cout<<"errore"<<endl;
        cin>>n;

    }
    K=n;
    while (i<K) {
    i++;
    b=n+a;
    n=a;
    a=b;
    cout<<b<<endl;
    }
    return 0;
}
