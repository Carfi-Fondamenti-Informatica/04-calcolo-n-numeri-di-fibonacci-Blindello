#include <iostream>
using namespace std;

int main() {
int n, K;
int a=0;
int b=0;
int i=0;
    cin>>n;
    if (n>=2) {
    K=n;
    while (i<K) {
    i++;
    b=n+a;
    n=a;
    a=b;
    cout<<b<<endl;
    }}
    else {
        cout<<"errore"<<endl;
    return 0;
}
