#include<iostream>

using namespace std;

double areaCircle(float radius){
    return 3.14 * radius * radius;
}

int factorial(int num){

    int fact=1;
    while(num>0){
        fact*=num;
        num--;
    }
    return fact;
}

bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
    
}

void printPrime1ToN(int N){
    for(int i=2;i<=N;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

void printDigits(int num){

    int digit,reverse=0;
    //reverse a number
    while(num){
        digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }

    while(reverse){
        digit=reverse%10;
        cout<<"The digit is "<<digit<<endl;
        reverse/=10;
    }
}

//i/p total digits(3) digit 1 3 8
// o/p number 138
int createNumberUsingDigits(int totalDigits){
   
    int answer=0;
    for(int i=0;i<totalDigits;i++){
        int digit;
        cout<<"Enter Digit "<<i+1<<": ";
        cin>>digit;
        answer=answer*10+digit;
        cout<<answer<<endl;
    }
    return answer;

}

int DecimalToBinary(int num){
    // 8 ->1000    
    int decimal=0,unit=0;
    while(num){
        int bit=num & 1;
        decimal +=bit*pow(10,unit++);
        num = num >> 1;
    }
    return decimal;
}

float convertKMToMiles(float km){
    float _1kmMiles = 0.621371;
    float miles = km * _1kmMiles;
    return miles;
}

float convertFahrenheitToCelsius(float fahrenheit){
    float celsius;
    // celsius = ((fahrenheit - 32) * 5)/9;
    celsius = ((fahrenheit - 32) * (float)5)/9;
    return celsius;
}

int countSetBitsOfNumber(int num){
    int totalSetBits=0;
        while(num){
            int rightMostBit= num & 1;
            if(rightMostBit){
                totalSetBits+=1;
            }
            num>>=1;
        }
    return totalSetBits;
}

bool checkOddEvenUsingBitwise(int num){
    return num&1;
}
int main(){
    // float radius=2.5;
    // double area = areaCircle(radius);
    // cout << area <<endl;

    // cout << factorial(5)<<endl;

    // printPrime1ToN(100);

    // printDigits(12382);

    int totalDigits,ans=0,digit;
    cin>>totalDigits;
    cout << createNumberUsingDigits(totalDigits);

    // int num=8;
    // cout<<"Binary of decimal "<<num<<" is "<<DecimalToBinary(num);

    // cout << convertKMToMiles(12);

    // cout << convertFahrenheitToCelsius(80.0)<<"°Celsius";

    // if(checkOddEvenUsingBitwise(12)){
    //     cout<<"Odd";
    // }else{
    //     cout<<"Even";
    // }
    // int x=3.2;

    // cout<<"Set Bits of a number:"<<countSetBitsOfNumber(255);
    }