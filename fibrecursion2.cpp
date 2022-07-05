#include<iostream>
#include<iomanip>
using namespace std;
int fibrec(int n){
    if(n<2){
        return n;
    }
    return fibrec(n-1)+fibrec(n-2);

}
int main()
{
    cout<<fibrec(8);
    return 0;
}