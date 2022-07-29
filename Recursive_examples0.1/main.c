#include <stdio.h>
#include <stdlib.h>

int f1(int x, int y) //f1 fonksiyonu içerik
{
    if(x == 0)
        return y; // base-case
    else
        return f1(x-1, x+y); // döngünün baþladýðý yer
}



int f2(int n)       //f2 fonksiyonu içerik
{
    int i=0;
    if(n>1)
    {
        f2(n-1);     //  döngünün baþladýðý yer
        printf("\n");
    }
    for(i=0; i<n; i++) //base-case
        printf(" * ");
}


int main()
{
    int a=5, b=2, c;
    c = f1(a,b);
    printf("%d\n", c );
    f2(5);
    return 0;
}
