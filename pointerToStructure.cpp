#include<bits/stdc++.h>
using namespace std;

struct Rectangle{ 
    int length;
    int breadth;
};


int main (){
    struct Rectangle r={10,5};
    // Defining in heap:
    Rectangle *p;
    p =(struct Rectangle *)malloc(sizeof(struct Rectangle));
    //p = new Rectangle; in C++ Language
    p->length= 10;
    p-> breadth= 5;  
    cout<< p->length<<endl<< p->breadth<<endl; 
}


