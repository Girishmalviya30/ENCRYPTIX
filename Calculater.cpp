#include<iostream>
using namespace std;
int main(){
    double N1,N2;
    char operation;
    double result;

    //input first number
    cout<<"Enter First Number:"<<endl;
    cin>>N1;
    //input second number
    cout<<"Enter Second Number:"<<endl;
    cin>>N2;
    //choose operation to perform
    cout<<"Enter operation(+,-,*,/): "<<endl;
    cin>>operation;

    //perform calculation
    switch(operation){
        case '+':
        result = N1+N2;
        break;
        case '-':
        result = N1-N2;
        break;
        case '*':
        result = N1*N2;
        break;
        case '/':
        if(N2!=0){
            result=N1/N2;
        }
        else{
            cout<<"Error Division by Zero"<<endl;
            return 1;
        }
        break;
        default:
        cout<<"Invalid choice...!"<<endl;
        return 1;
    }
    cout<<" result is: "<<" "<<result<<endl;
    return 0;
}