#include<iostream>
using namespace std;
int main(){
    

        cout <<"Enter 1 for Plus\nEnter 2 for Minus\nEnter 3 for Multiply\nEnter 4 for Division\nEnter 5 for Modulus\nEnter 6 for Power\nEnter 7 for Factorial\nEnter 8 for square\nEnter 9 for cube\nEnter 10 for Exit\n";
        
int Choice;
    cout<<"Enter Number for Choice :";
    cin>>Choice;

    switch(Choice){
        case 1:
        {
            int a,b;
            cout<<"Enter Two Numbers for Addition :";
            cin>>a>>b;
            cout<<"Addition of "<<a<<" and "<<b<<" is :"<<a+b<<endl;
            break;
        }
        case 2:
        {
            int a,b;
            cout<<"Enter Two Numbers for Subtraction :";
            cin>>a>>b;
            cout<<"Subtraction of "<<a<<" and "<<b<<" is :"<<a-b<<endl;
            break;
        }
        case 3:
        {
            int a,b;
            cout<<"Enter Two Numbers for Multiplication :";
            cin>>a>>b;
            cout<<"Multiplication of "<<a<<" and "<<b<<" is :"<<a*b<<endl;
            break;
        }
        case 4:
        {
            int a,b;
            cout<<"Enter Two Numbers for Division :";
            cin>>a>>b;
            if(b==0){
                cout<<"Division by zero is not allowed."<<endl;
                break;
            }
            cout<<"Division of "<<a<<" and "<<b<<" is :"<<(float)a/b<<endl;
            break;
        }
        case 5:
        {
            int a,b;
            cout<<"Enter Two Numbers for Modulus :";
            cin>>a>>b;
            if(b==0){
                cout<<"Modulus by zero is not allowed."<<endl;
                break;
            }
            cout<<"Modulus of "<<a<<" and "<<b<<" is :"<<a%b<<endl;
            break;
        }
        case 6:
        {
            int a,b;
            cout<<"Enter Base and Exponent for Power :";
            cin>>a>>b;
            long long result = 1;
            for(int i=0;i<b;i++){
                result *= a;
            }
            cout<<a<<" raised to the power "<<b<<" is :"<<result<<endl;
            break;
        }
        case 7:
        {
            int n;
            cout<<"Enter a Number to find Factorial :";
            cin>>n;
            if(n<0){
                cout<<"Factorial is not defined for negative numbers."<<endl;
                break;
            }
            long long fact = 1;
            for(int i=1;i<=n;i++){
                fact *= i;
            }
            cout<<"Factorial of "<<n<<" is :"<<fact<<endl;
            break;
        }
        case 8:
        {
            int n;
            cout<<"Enter a Number to find Square :";
            cin>>n;
            cout<<"Square of "<<n<<" is :"<<n*n<<endl;
            break;
        }
        case 9:
        {
            int n;
            cout<<"Enter a Number to find Cube :";
            cin>>n;
            cout<<"Cube of "<<n<<" is :"<<n*n*n<<endl;
            break;
        }
        case 10:
        {
            cout<<"Exiting the program."<<endl;
            break;
        }
    }

}