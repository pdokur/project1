#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

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
int pos=0,j=1;
printf("Enter the position do you want to insert:\n");
scanf("%d", &pos);
if(pos<=0 || pos>size)
{
    printf("Invalid position you requested, pls specify the below or equal of size %d \n", size);
}
else{
tail=head;
while(tail!=NULL)
{
if (pos==j && head==tail)
    {
        printf("Enter the %d-NODE Data: ",pos);
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode-> next=NULL;

        temp=tail->next;
        head=newnode;
        head->next=tail;
        tail->next=temp;
        break;
    }
 if(pos-1==j)
 {
        printf("Enter the %d-NODE Data: ",pos);
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode-> next=NULL;
        temp=tail->next;
        tail->next=newnode;
        tail=newnode;
        newnode->next=temp;
        break;
}
j++;
tail=tail->next;
}

tail=head;
int k=1;
while(tail!=NULL)
{
    printf("This %d-NODE Data : %d \n",k, tail->data);
    tail=tail->next;
    k++;
}
}

///swapping the data
int x,y;
printf("Enter the first position do you want :\n ");
scanf("%x", &x);
printf("Enter the second position do you want : \n");
scanf("%x", &y);
int l=1,xflag=0,yflag=0;
tail=head;
struct node *xprev, *xvalue, *xnext, *yprev, *yvalue, *ynext;
while(tail!=NULL)
{
    if(x==l && tail==head)
    {
     xvalue=tail;
     xnext=tail->next;
     xflag++;
     break;
    }
    if(x-1==l)  //x-1==l
    {
    xprev=tail;
    xvalue=tail->next;
    xnext=tail->next->next;
    printf("x tail data %d \n", xnext->data);
    xflag=xflag+2;
    break;
    }
    tail=tail->next;
    l++;
}
tail=head;
int m=1;
while(tail!=NULL)
{
    if(y-1==m && tail->next->next==NULL)
    {
        yprev=tail;
        yvalue=tail->next;
        ynext=tail->next->next;
        yflag++;
        break;
    }
    if(y-1==m) // y-1==m
    {
    yprev=tail;
    yvalue=tail->next;
    ynext=tail->next->next;
    printf("y tail data %d \n", ynext->data);
    yflag=yflag+2;
     break;
    }
    tail=tail->next;
    m++;
}
if(xflag==2 && yflag==2)
{
    xprev->next=yvalue;
    yvalue->next=xnext;
    yprev->next=xvalue;
    xvalue->next=ynext;
}
if(xflag==1 && yflag==1)
{
    yprev->next=xvalue;
    xvalue->next=ynext;
    yvalue->next=xnext;
    head=tail=yvalue;
}
if(xflag==1 && yflag==2)
{
    yprev->next=xvalue;
    xvalue->next=ynext;
    yvalue->next=xnext;
    tail=head=yvalue;
}
if(xflag==2 && yflag==1)
{
    yprev->next=xvalue;
    xvalue->next=ynext;
    xprev->next=yvalue;
    yvalue->next=xnext;
}
tail=head;
int n=1;
while(tail!=NULL)
{
    printf("This %d-NODE Data : %d \n",n, tail->data);
    tail=tail->next;
    n++;
}
return 0;
}