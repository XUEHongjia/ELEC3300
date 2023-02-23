#include <iostream>
#include <cmath>
using namespace std;

float sqr_rt ( int X )
{
    float a = 1;
    for ( int i = 0; i < 30; i++ )
    {
        a = ( a + X/a )/2;
    }

    return a;
}

int round( float x )
{
    return int( x + 0.5 );
}

int main ()
{
    const int x = 10 ;
    cout << sqr_rt(x) << endl;
    cout << sqrt(x) << endl;
    cout << round( sqrt(x) + 0.4 ) << endl;
    return 0;
}