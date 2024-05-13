#include <stdio.h>
#include<iostream>
using namespace std;

struct Rectangle{ 
    int length;
    int breadth;
    char x;
};//r before semicolon we can declare like this

// We can declare here also struct Rectangle r={10,5};

int main (){
    struct Rectangle r={10,5};
    r.length = 17;
    r.breadth = 8;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
}