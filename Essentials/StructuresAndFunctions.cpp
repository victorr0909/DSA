#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length,breadth;
};

void init(struct Rectangle *r,int l, int b){
    r->length=l;
    r->breadth=b;
}


int area(struct Rectangle r){
    return r.length*r.breadth;
}

void changeLength(struct Rectangle *r, int l){
    r->length= l;
}

int main(){
    struct Rectangle r;
    init(&r ,2,3);
    cout<<area(r)<<endl;
    changeLength(&r,10);
    cout<<area(r);
}