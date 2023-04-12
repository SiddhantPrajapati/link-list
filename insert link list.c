#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int begininsert();
int display();
int begininsert()
{
    int item;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("\n enter value:");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\n node inserted.");
    }
}
int display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\n nothing to print.\n");
    }
    else
    {
        printf("\n printing values...");
        while(ptr!=NULL)
        {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
        }
    }
}
int main()
{
    int ch;
    while(ch!=3)
    {
    printf("\nEnter choice\n 1)insert \n 2)display \n 3)exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1 :
        begininsert();
        break;
    case 2:
        display();
        break;
    default :
        printf("\n enter valid choice");
        break;
    }
    }
}
