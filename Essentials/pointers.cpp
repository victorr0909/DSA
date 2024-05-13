#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int pointer(){
    int a = 10;
    int *p;  // Declare pointer variable p of type integer
    p= &a;   // Store the address of variable
    cout<<*p <<endl;// Dereference p and print the value stored at that location i.e 10.
    cout<<&a <<endl;
    cout<<p;
    return 0;
}

int pointerToarray(){
    int A[5]= {1,2,34,5,6};
    int *p;
    p=A;
    for(int i =0; i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}

int dynamicAllocation(){
    int *p;
    //p=(int*)malloc(sizeof(int)); // Allocate memory dynamically using malloc() function(C Language)
    p = new int[5];               // Allocate memory dynamically using new keyword (C++ Language).
    p[0]=5, p[1]=7, p[2]= 8 , p[3]=9, p[4]=10 ;
    for(int i =0; i<5;i++){
        cout<<p[i]<<endl;
    }
    delete  []p;   // Free the allocated memory by calling delete[] operator in C++ language.
    return 0;
}

int main(){
   // pointer();
   //pointerToarray();
    dynamicAllocation();
}