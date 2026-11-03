#include<iostream>
using namespace std;

int main(){

    // Implicit Type Casting -> Automatice Type casting done by compiler
    // This happens when we perform operation b/w two different data type,compiler will promote one data type to higher data type(higher size like char to int ,int to float ) to maintain precision
    
    // 1) num to float
    int num1=5;
    float num2=6.5;
    float result = num1+num2; //compiler promote num1 to float then perform operation
    int  result = num1+num2;//gives 11 not 11.0 remember //here first compiler promote num1 to float then perform operation result float value then again convert to int bcoz result data type is int
    cout<<result<<endl;

    // 2)char to int
    char ch='a';
    int num = ch+1;//implicit conversion from char to int
    cout<<num<<endl;

    // 3) int to char
    int ch1=65;
    char a=ch1+1;//implict convert from int to char (66 to B)
    cout<<a<<endl;


    // Explicit Type Casting(Manual Type Conversion) 
    // Allow you to explicitly specified desired data type during an assignment or an operation
    // we use casting operator (dataType)

    // 1) double to int
    double pi=3.14159265;
    int PI = (int)pi;//Explicit Type conversion from double to int
    cout<<PI<<endl;

    // 2) float to char
    float fN=65.5;
    char chVal=(char)fN;//Explicit Type conversion from float to char
    cout<<chVal<<endl;

    // 3) int to float
    int a11=10;
    int b11=3;
    float c11=a11/(float)b11; // usecase of explicit type conversion we have 2 int varaible after operation ans can be float we can't change data type so here we use explict type conversion from either a11/b11 from int to float
    cout<<c11<<endl;

    // int/int -> int 
    // float/int -> float
    // int/float -> float
    // float/float -> float

    // if 3 is stored in float variable,then it will be stored as 3 not 3.0 but when doing int /float of that variable it will give float,so always check data type


}