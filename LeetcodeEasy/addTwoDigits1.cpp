#include <iostream>
using namespace std;

int addDigits(int num){
    return (num%9==0 && num!=0)?9:num%9;
}

int main() {
    int num;
    cin>>num;
    cout<<addDigits(num);
    return 0;
}
