#include <iostream>
#include <string>
 using namespace std;

 string intToRoman(int num) {
        string Roman="";
        while (num!=0){
            if (num>=1000){
                Roman.push_back('M');
                num-=1000;
            }
            else if (num>=900 && num<1000){
                Roman.append("CM");
                num-=900;
            }
            else if (num>=500 && num<900){
                 Roman.push_back('D');
                num-=500;
            }
            else if (num>=400 && num<500){
                 Roman.append("CD");
                num-=400;
            }
            else if (num>=100 && num<400){
                 Roman.push_back('C');
                num-=100;
            }
            else if (num>=90 && num<100){
                 Roman.append("XC");
                num-=90;
            }
            else if (num>=50 && num<90){
                 Roman.push_back('L');
                num-=50;
            }
            else if (num>=40 && num<50){
                 Roman.append("XL");
                num-=40;
            }
            else if (num>=10 && num<40){
                 Roman.push_back('X');
                num-=10;
            }
            else if (num==9){
                 Roman.append("IX");
                num-=9;
            }
            else if (num>=5 && num<9){
                 Roman.push_back('V');
                num-=5;
            }
            else if (num==4){
                 Roman.append("IV");
                num-=4;
            }
            else if (num<4){
                 Roman.push_back('I');
                num-=1;
            }
        }
        return Roman;
    }
int main() {
    int num;
    cin>>num;
    cout<<intToRoman(num);
    return 0;
}
