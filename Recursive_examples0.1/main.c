#include <stdio.h>
#include <stdlib.h>

int f1(int x, int y) //f1 fonksiyonu i�erik
{
    if(x == 0)
        return y; // base-case
    else
        return f1(x-1, x+y); // d�ng�n�n ba�lad��� yer
}



int f2(int n)       //f2 fonksiyonu i�erik
{
    int i=0;
    if(n>1)
    {
        f2(n-1);     //  d�ng�n�n ba�lad��� yer
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
