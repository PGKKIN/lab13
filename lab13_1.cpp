#include<iostream>
#include<cmath>
using namespace std;

int fibonacci(int b);



int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int b)
{
    if (b==0)
    {
        return b;
    }
    else if(b==1)
    {
        return b;
    }
    else
    {
     return fibonacci(b-1)+ fibonacci(b-2);
    }
    
    
}