#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void area(struct Rectangle *p){
    p->length=20;
    cout<<p->length<<endl<<p->breadth<<endl;
}

int main(){
    struct Rectangle r={10,5};
    area(&r);
}