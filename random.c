    /** Sahil Rajput **/
    /*Program which generate Random Number and save them into a file.*/
#define max 1000000
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    FILE *fp;
    fp=freopen("random_input.txt","w",stdout);
    for(i=0;i<=max;i++)
    {
        n=rand();
        printf("%d ",n);
    }
    fclose(fp);
    return 0;
}