#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"ENTER AN ALPHABET"<<endl;
    cin>>c;

    switch (c)
    {
    case 'a':
            cout<<"VOWEL"<<endl;
        break;
    case 'e':
            cout<<"VOWEL"<<endl;
        break;
    case 'i':
            cout<<"VOWEL"<<endl;
        break;    
    case 'o':
            cout<<"VOWEL"<<endl;
        break;
    case 'u':
            cout<<"VOWEL"<<endl;
        break;
    
    default:
            cout<<"ALPHABET IS CONSONENT"<<endl;
        break;
    }
return 0;
}