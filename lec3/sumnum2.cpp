#include <iostream>
using namespace std;


int main() {
int x;
  cout << "Enter a int value: " << endl; 
  cin >> x;
  int sum=0;
  int i=1;

    while(i<=x){
        sum=sum+i;
        i=i+1;
    
    }
     cout <<"value of sum is "<< sum << endl;
}