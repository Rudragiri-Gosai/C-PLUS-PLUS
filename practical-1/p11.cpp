#include<iostream>
using namespace std;
void vowel_or_not(char c);

int main(){
    char a;
    cout<<"This program will print the entered character is vowel or not."<<endl;
    cout<<"Enter any character : ";
    cin>>a;

    vowel_or_not(a);

    return 0;
}
void vowel_or_not(char c){
	if(c>='a' && c<='z'){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            cout<<"Entered Charter "<<c<<" is an vowel.";
        else
            cout<<"Enter charter "<<c<<" is not an vowel.";
    }
}
