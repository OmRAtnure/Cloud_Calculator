#include<iostream>
using namespace std;

void Calculation(int a,int b,char op) {
  switch(op) {
    case '+':
      cout<<"Addition of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
      break;
    case '-':
      cout<<"Substraction of "<<a<<" and "<<b<<" is: "<<a-b<<endl;
      break;
    case '*':
      cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
      break;
    case '/':
      cout<<"Division of "<<a<<" and "<<b<<" is: "<<a/b<<endl;
      break;
    default :
        cout<<"wrong operation"<<endl;
  }
}

int main()  {
  int a,b;
  char operation;
  // cout<<"-------Menu-------";
  cout<<"Choose Operation (+,-,*,/): ";
  cin>>operation;
  cout<<"Enter First Number: ";
  cin>>a;
  cout<<"Enter Second Number: ";
  cin>>b;
  Calculation(a,b,operation);
  return 0;
  
}
