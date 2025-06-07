#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
    int n,i=2;

    cout<<"enter n:"<<endl;

    cin>>n;

    if(n<2) {
        cout<<"not prime"<<endl;
        return 0;
    }

    while (i<n-1) {
        if (n%i==0) {
            cout<<"not prime"<<endl;
            return 0;
        }
        i++;
    }


    cout<<"prime"<<endl;
    return 0;

}