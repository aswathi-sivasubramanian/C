#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*head,*tail,*temp;

void rev();
void display();
int main()
{



    rev();
    display();
    return 0;
}

void display()
{
    int i=1;
    temp=head;
    while(temp!=NULL)
    {
        printf("the data at node %d\t is%d\n",i,temp->data);
        temp=temp->next;
        i++;
    }
}
void rev()
{
    int n,i;
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be inserted");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    }
}
