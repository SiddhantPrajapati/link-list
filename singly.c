//sigly link list
#include<stdio.h>
int insert_front();
int insert_end();
int insert_random();
int delete_front();
int delete_end();
int delete_random();
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
int insert_end()
{
    struct node *ptr,*temp=NULL;
    int data;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("\n nothing to print.");
    }
    else
    {
        printf("\n Enter value:");
        scanf("%d",&data);
        ptr->val=data;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;

        }
        else
        {
            temp=head;
            while(temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
        }
    }
}
/*
int insert_random()
{
    struct node *ptr,*temp=NULL,*temp2=NULL;
    int data,loc,c=1;
    printf("\n Enter the location from where you want to insert the value:");
    scanf("%d",&loc);
    if(ptr==NULL)
    {
        printf("\n nothing to print..");
    }
    else
    {
        printf("\n Enter value:");
        scanf("%d",&data);
        ptr->val=data;
        if(head==NULL)
        {
            ptr->next=head;
            head=ptr;
        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                temp2=temp;
                temp=temp->next;
                c++;
                if(c==loc)
                break;
            }

            ptr->next=temp;
            temp2->next=ptr;
        }
    }
}
*/

int insert_random()
{
struct node *ptr,*temp=NULL,*temp2=NULL;
int data,loc;
printf("\n Enter the location from where you want to insert the value:");
scanf("%d",&loc);
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n nothing to print..");
}
else
{
printf("\n Enter value:");
scanf("%d",&data);
ptr->val=data;
if(head==NULL)
{
ptr->next=head;
head=ptr;
}
temp=head;
int c=1;
while(temp != NULL)
{
temp2=temp;
temp=temp->next;
c++;
printf("\n C=%d , temp2=%d , temp=%d",c,temp2->val,temp->val);
if(c==loc)
break;
}
temp2->next=ptr;
ptr->next=temp;

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
int delete_end()
{
    struct node *ptr1=NULL,*ptr;
    if(head==NULL)
    {
        printf("Nothing to delete.");
    }
    else if(head->next==NULL)
    {
        ptr=head;
        ptr=NULL;
        free(ptr);
    }
    else
    {

        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(ptr);
    }
}
int delete_random()
{
    int ch,i;
    struct node *ptr1=NULL,*ptr;
    if(head==NULL)
    {
        printf("\n Nothing to delete.");
    }
    else if(head->next==NULL)
    {
        ptr=head;
        ptr=NULL;
        free(ptr);
    }
    else
    {
        printf("\n Enter the loc from where you want to delete element:");
        scanf("%d",&ch);
        ptr=head;
        for(i=0;i<
        ch;i++)
        {
            ptr1=ptr;
            ptr=ptr->next;
            if(ptr==NULL)
            {
                printf("\n NOTHING TO DELETE");
                return;
            }
        }
        ptr1->next=ptr->next;
        free(ptr);
    }
}
int main()
{
    int ch;
    while(ch!=8)
    {
    printf("\n Enter your choice:\n 1)insert at beginning \n 2)display \n 3)insert at ending \n 4)insert at random place\n 5)delete at front\n 6)delete at end\n 7)delete at random position\n 8)exit\n");
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
        insert_end();
        break;
    case 4:
        insert_random();
        break;
    case 5:
        delete_front();
        break;
    case 6:
        delete_end();
        break;
    case 7:
        delete_random();
        break;
    default :
        printf("\n Enter valid choice.");
        break;
    }
    }

}
