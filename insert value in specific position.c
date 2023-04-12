//insert value in specific position.
#include<stdio.h>
void main()
{
    int a[10],n,i,pos;
    for(i=0;i<5;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n enter the value and position\n");
    scanf("%d%d",&n,&pos);

    for(i=4;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=n;
    printf("\n after insertion\n ");
    for(i=0;i<6;i++)
    {
        printf("%d element:%d\n",i+1,a[i]);
    }
}
