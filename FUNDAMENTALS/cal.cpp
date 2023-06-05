#include<iostream>
using namespace std;
int main(){
        int a, b;
        char op;
        cout<<"INPUT TWO NUMBERS"<<endl;
        cin>>a>>b;
        cout<<"ENTER OPRAND"<<endl;
        cin>>op;

        switch (op)
        {
        case '/':
            cout<<a/b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '+':
            cout<<a+b<<endl;
            break;
        
        default:
        cout<<"oprand not found"<<endl;
            break;
        }

    return 0;
}