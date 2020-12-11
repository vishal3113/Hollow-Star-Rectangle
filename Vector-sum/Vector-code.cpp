#include<iostream>
using namespace std;

void main()
{
    int n, sum = 0;
    cin>> n;
    sum = n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;

    cout<<sum;
}