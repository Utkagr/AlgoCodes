#include <stdio.h>
#define SWAP(a, b, c){c t; t=a,a=b,b=t;}
int main()
{
int x=10, y=20;
SWAP(x, y, int);
printf("%d %d\n", x, y);
return 0;
}