#include "iostream"
#include "cmath"   //Used for using pow() function
using namespace std;

int main()
{
    int bin,dec=0;
    cout<<"Enter binary number: ";
    cin>>bin;
    int temp = bin;  //Storing it into a buffer variable
    int powerVal = 0;  //Current exponent value, increments with each bit
    while(temp)  //Traversing the binary code in reverse order
    {
        int rem = temp%10;  
        dec = dec + (rem*(pow(2,powerVal++)));   // Multiplying the remainder bit with pow(2,exponent value)
        temp /= 10;
    }
    cout<<"Decimal conversion of ("<<bin<<") is "<<dec<<endl;
    return 0;
}