//stack using link list
//sigly link list
#include<stdio.h>
int insert_front();
int delete_front();
int display();
struct node
{
    int val;
    struct node *next;

};
struct node *head=NULL,*temp=NULL;
int insert_front()
{
    int data;
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {

        printf("\n nothing to print.");
    }
    else
    {
        printf("\n enter value:");
        scanf("%d",&data);
        ptr->val=data;
        ptr->next=head;
        head=ptr;
    }
}
int display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\n nothing to print\n");
    }
    else
    {
        printf("\n print values..\n");
        while(ptr!=NULL)
        {
          printf("%d\n",ptr->val);
          ptr=ptr->next;
        }

    }
}

int delete_front()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\n list is empty.");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
    }
}
int main()
{
    int ch;
    while(ch!=4)
    {
    printf("\n Enter your choice:\n 1)insert at beginning \n 2)display \n  3)delete at front\n  4)exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        insert_front();
        break;
    case 2:
        display();
        break;

    case 3:
        delete_front();
        break;

    default :
        printf("\n Enter valid choice.");
        break;
    }
    }

}
