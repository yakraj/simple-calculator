// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    string calc;
    double firstnumber;
    double secondnumber;
    string numbers = "152207";
    string sapString;
    cout << "only two layer of calculation is allowed eg. 565-98,56+98,etc..." <<endl;
    cout << "please enter calculation: ";
    getline(cin,calc);
        
    //     if(calc.find('+')){cout << "i found something macthing with it.";};
    
// int num = stoi(str);
    for(int i =0; i < calc.length(); i++){
        if(calc[i]=='+' ){
        firstnumber = stoi(calc.substr(0,i));
        secondnumber = stoi(calc.substr(i+1,calc.length()));
        cout <<"Result: " <<firstnumber+secondnumber;
        }else if(calc[i]=='-' ){
        firstnumber = stoi(calc.substr(0,i));
        secondnumber = stoi(calc.substr(i+1,calc.length()));
        cout <<"Result: " <<  firstnumber-secondnumber;
        }else if(calc[i]=='*' ){
        firstnumber = stoi(calc.substr(0,i));
        secondnumber = stoi(calc.substr(i+1,calc.length()));
        cout <<"Result: " <<  firstnumber*secondnumber;
        }else if(calc[i]=='/' ){
        firstnumber = stoi(calc.substr(0,i));
        secondnumber = stoi(calc.substr(i+1,calc.length()));
        cout <<"Result: " <<  firstnumber/secondnumber;
        }
    }
    

    // includes(name , "+")?cout <<name:cout << "something else should be there";
    return 0;
}