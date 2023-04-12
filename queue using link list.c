//queue using link list
//sigly link list
#include<stdio.h>
int insert_end();
int delete_front();
int display();
struct node
{
    int val;
    struct node *next;

};
struct node *head=NULL,*temp=NULL;

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
        printf("\n NOthing to print.");
    }
    else
    {
        printf("\n Enter value:");
        scanf("%d",&data);
        ptr->val=data;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=NULL;

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
    printf("\n Enter your choice:\n 1)display \n 2)insert at ending \n 3)delete at front\n 4)exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        display();
        break;
    case 2:
        insert_end();
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

