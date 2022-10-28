/*
Name: Sumit Subhash Jadhav
U89612131.
This program displays all the integers that appear twice.
*/
#include <stdio.h>
void find_duplicates(int *a, int n, int *b, int *size)    //defining function
{
    int *p,*q,c=0;
    for(p=a;p<a+n;++p)
    {
        for(q=p+1;q<a+n;++q)
        {
            if(*p==*q)   //condition to proceed futher
            {
                *(b + c) = *p;
                c++;
                *size=c;
               // *(size)=*(size)+1;
                break;
            }
        }
    }
}
int main()    //main function
{
    int i,n,size=0;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n],b[n/2];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++) //loop to check condition
    {
        scanf("%d",&a[i]);
    }
    find_duplicates(a,n,b,&size);   //calling function, defined earlier
    printf("Output: ");
    for (i=0; i<size;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
