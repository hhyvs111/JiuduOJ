#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild,*rchild;

}BiTNode,*BiTree;

int  BST_Insert(BiTree &T,int k)
{
    if(T == NULL)   //如果树为空
    {
        T = (BiTree)malloc(sizeof(BiTNode));
        T->data = k;
        T->lchild = T->rchild = NULL;
        return 1;
    }
    else if(k == T->data)
        return 0;
    else if(k < T->data)
        return BST_Insert(T->lchild,k);  //插入到T的左子树中
    else
        return BST_Insert(T->rchild,k);
}

void PreOrder(BiTree T)
{
    if(T != NULL)
    {
        printf("%d ",T->data);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

void InOrder(BiTree T)
{
    if(T != NULL)
    {
        InOrder(T->lchild);
        printf("%d ",T->data);
        InOrder(T->rchild);
    }
}

void PostOrder(BiTree &T)
{
    if(T != NULL)
    {
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        printf("%d ",T->data);
    }
}

void Create_BST(BiTree &T,int num[],int n)
{
    T = NULL;
    int i = 0;
    while(i < n)
    {
        BST_Insert(T,num[i]);
        i++;
    }
}

int main()
{

    int n;
    while(~scanf("%d",&n))
    {

        BiTNode *T;
        int num[n];
        for(int i = 0 ;i < n;i++)
            scanf("%d",&num[i]);
        Create_BST(T,num,n);
        PreOrder(T);
        printf("\n");
        InOrder(T);
        printf("\n");
        PostOrder(T);
        printf("\n");
    }
    return 0;
}
