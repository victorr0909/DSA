#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;
    
    void init(int l, int b){
        length = l;
        breadth = b;
    }

    int peri(){
        int p;
        p = 2*(length+breadth);
        return p;
    }

    int area(){
        return length*breadth;
    }
};

int main(){
    Rectangle r;
    int l,b;
    cout<<"Enter the Length and Breadth"<< endl;
    cin>>l>>b;

    r.init(l,b);
    int a = r.area();
    int p = r.peri();

    cout<<a<<endl<<p;
}