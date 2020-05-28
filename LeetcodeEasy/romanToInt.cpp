#include <iostream>
#include <string>
using namespace std;




int romanToInt(string s){
    int sum=0;
    string::size_type posIV=s.find("IV");
    string::size_type posIX=s.find("IX");
    string::size_type posXL=s.find("XL");
    string::size_type posXC=s.find("XC");
    string::size_type posCD=s.find("CD");
    string::size_type posCM=s.find("CM");

        while (posIV!=s.npos) {
            s.erase(posIV,2);
            sum+=4;
            posIV=s.find("IV");
        }
        while (posIX!=s.npos) {
            s.erase(posIX,2);
            sum+=9;
            posIX=s.find("IX");
        }
        while (posXL!=s.npos) {
            s.erase(posXL,2);
            sum+=40;
            posXL=s.find("XL");
        }
        while (posXC!=s.npos) {
            s.erase(posXC,2);
            sum+=90;
            posXC=s.find("XC");
        }
        while (posCD!=s.npos) {
            s.erase(posCD,2);
            sum+=400;
            posCD=s.find("CD");
        }
        while (posCM!=s.npos) {
            s.erase(posCM,2);
            sum+=900;
            posCM=s.find("CM");
        }
        for (int i=0;i<s.size();i++){
            switch (s[i]){
                case 'I':
                    sum+=1;
                    break;
                case 'V':
                    sum+=5;
                    break;
                case 'X':
                    sum+=10;
                    break;
                case 'L':
                    sum+=50;
                    break;
                case 'C':
                    sum+=100;
                    break;
                case 'D':
                    sum+=500;
                    break;
                case 'M':
                    sum+=1000;
                    break;
            }
        }
return sum;
}

int main() {
    string s;
    cin>>s;
    cout<<romanToInt(s);
    return 0;
}
