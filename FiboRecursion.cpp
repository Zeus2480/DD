#include<iostream>
#include<iomanip>
using namespace std;

void fibrec(int a,int b,int n,int c){
    if(c==n){
        cout<<a+b;
    }
    else{
        c++;
        fibrec(b,a+b,n,c);
    }
}
int main()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<0;
        exit(0);
    }
    if(n==2){
        cout<<1;
        exit(0);
    }
    fibrec(0,1,n,3);


    return 0;
}