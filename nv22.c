#include <stdio.h>
int gcd(int x, int y)
{ 
    if (x== 0 || y== 0)
       return 0;
    if (x == y)
        return x;
    if (x > y)
        return gcd(x-y,y);
    return gcd(x, y-x);
}
int main()
{
    int x = 98, y = 56;
    printf("gcd is %d%d%d", a,b,gcd(a, b));
    return 0;
}
