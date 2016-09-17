        /** Sahil Rajput **/
    /* BUBBLE-SORT with FILE handling. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    long int i,j,n,t=0;
    float start,end,total;
    FILE *fp;
    scanf("%ld",&n);    //Limit of array
    long int a[n];
    fp=freopen("random_input.txt","r",stdin); //File open(Read mode)
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    fclose(fp); //File close
    start=clock();  //Clock start
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    end=clock();    //Clock end
    total=(end-start)/CLOCKS_PER_SEC;   //Total time
    printf("TIME: %.10fsec\n",total);
    fp=freopen("bubble_sort.txt","w",stdout);   //File open(Write mode)
    for(i=0;i<n;i++)
    {
        printf("%ld\n",a[i]);
    }
    fclose(fp); //File Close
    return 0;
}