#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*pnext
    }*ptop;
struct node* creatnode(int data);
void push(int data);
int pop();
int peack();

int main()
{
    printf("Hello world!\n");
    return 0;
}
struct node* creatnode(int data)
{
    struct node*pnode=(struct node*) malloc(sizeof(struct node));
    if(pnode!=null)
    {
        pnode->pnext=ptop;
        pnode->data=data;
        ptop=pnode;
    }

    return pnode;
}

void push(int data)
{
    struct node*pnode=creatnode(data);
    if(pnode != null)
    {
        }
    }
}
int pop();
{

}
;
