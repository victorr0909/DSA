#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int &r = a;// reference variable
    r = 25;
    cout<<a<<endl<<r<<endl;
    return 0;
}