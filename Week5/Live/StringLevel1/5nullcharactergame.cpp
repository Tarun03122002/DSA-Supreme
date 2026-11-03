#include<iostream>

using namespace std;

int main(){

    char ch[10] = "ABCDEFGHI";
    // char ch[10] = "ABCDEFGHIJ"; //initializer string list too long error
    char ch2[5] = {'a','b','c','d','e'};
    char ch3[5];
    // for(int i=0;i<=3;i++){
    //     cin.get(ch3[i],4);
    // }
    // cin.getline(ch3,5); //starting 4 charcter stored in ch3
    cin.getline(ch3,10);  //starting 9 charcters stored in ch3 but ye dangerous/undefined behavior hai ensure char size and getLine maxInput size same.
    // cin>>ch3;
    cout<<ch3;

    // cout<<ch;

}