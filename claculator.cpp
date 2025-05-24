#include <iostream>  

//[here i made two mistakes,(1)->i write char  operator = ('+,-,*,/') which was wrong. (2)-> i forget to write operator==, instead i wrote operator=.]

using namespace std;
int main() {
    int num1,num2;
    char Operator;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter operators (+,-,*,/) : ";
    cin>>Operator;
    cout<<"enter second number : ";
    cin>>num2;
    if(Operator == '+'){
        cout<<num1+num2<<endl;
    }
    else if(Operator == '-'){
        cout<<num1-num2<<endl;
    }
    else if(Operator == '*'){
        cout<<num1*num2<<endl;
    }
    else if(Operator == '/'){
        if(num2 != 0){
            cout<<num1/num2<<endl;
        }
        else{
            cout<<"error, can't divide the number with zero.";
        }
    }
    else {
        cout<<"invalid operator given.";
    }
}
