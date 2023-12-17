#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *tail, *temp, *newnode;
    head=NULL;
    int size;
    printf("Enter how many nodes do you want: \n");
    scanf("%d", &size);

    for (int i=1; i<=size; i++)
    {
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("Enter the %d-Node data:\n", i);
        scanf("%d", &newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    int i=0;
    temp=head;
    while(temp!=NULL)
    {
        printf("This is %d-Node node data: %d\n",i+1, temp->data);
        temp=temp->next;
        i++;
    }

    int pos=0;
    printf("which node do you want: delete \n");
    scanf("%d", &pos);

    temp=head;
    for (int i=1; i<pos; i++)
    {
        tail=temp;
        temp=temp->next;
        if(i==pos-1)
        {
            tail->next=temp->next;
            free(temp);
        }
    }

    int j=0;
    temp=head;
    while(temp!=NULL)
    {
        printf("This is %d-Node node data: %d\n",j+1, temp->data);
        temp=temp->next;
        j++;
    }
}

/*
int main()
{
struct node *head, *tail, *temp, *newnode;
head= NULL;
int size;
printf("Enter How nodes do you want to create : \n");
scanf("%d", &size);
for(int i=1;i<=size;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the %d-NODE Data: ",i);
scanf("%d", &newnode->data);
newnode-> next=NULL;

if(head==NULL){
    head=tail=newnode;
}
else{
    tail->next=newnode;
    tail=newnode;
}
}
tail=head;
int i=1;
while(tail!=NULL)
{
    printf("This %d-NODE Data : %d \n",i, tail->data);
    tail=tail->next;
    i++;
}
}
*/