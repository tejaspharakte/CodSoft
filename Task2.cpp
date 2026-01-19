//Simple Calculator

#include<iostream>
using namespace std;
int main()
{
    float a;
    float b;

    cout << " Enter the first number : ";
    cin >> a;
    
    cout << " Enter the second number : ";
    cin >> b;
    cout << " Addition (+) "<< endl;
    cout << " Subtraction (-)"<< endl;
    cout << " Multiplication (*)" << endl;
    cout << " Division (/)" << endl;
    char op;
    cout << " Enter the operation from above : ";
    cin >> op;
     
    switch(op)
    {
        case '+' : 
                  cout << (a)<<" + "<<(b)<< " = " << (a + b) << endl;

                  break;
        case '-' :
                  cout << (a)<<" - "<<(b)<< " = "<< (a - b) << endl;
                  break;
        case '*' :
                  cout << (a)<<" * "<<(b)<< " = "<< (a * b) << endl;
                  break;
        case '/' :
                 if(b == 0)
                 {
                    cout << "Division by Zero is not allowed"<<endl;
                 }
                 else{
                    cout << (a)<<" / "<<(b)<< " = "<< (a / b) << endl;
                 }
                
                  break ;
        default : cout << " Please enter the valid operator !! ";                                       
    }
    
}