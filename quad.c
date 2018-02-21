/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct complex{
    float r;
    float i;
};

void learnstructbyref(struct complex *r)
{
    r->r=10;
    r->i=20;
}

void printcomplex(struct complex r)
{
    printf("%f + i%f",r.r,r.i);
}

int main()
{
    struct complex r={1,1};
    printcomplex(r);
    learnstructbyref(&r);
    printcomplex(r);
    return 0;
}
