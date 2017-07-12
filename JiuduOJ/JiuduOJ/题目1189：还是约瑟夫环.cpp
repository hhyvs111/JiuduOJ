#include<cstdio>
#include<cstdlib>
using namespace std;

typedef struct LNode{     //单链表的循环结构
    int data;
    struct LNode *next;
}LNode, *LinkList;

LinkList CreatList2(LinkList &L)
{
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->data = 1;   //带头结点的单链表
    LNode *s, *r = L,*q;
    x = 2;
    while(x != 22)   //建立了结点
    {

        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
//       printf("%d ",x);
        r->next = s;
        r = s;
        x++;
    }
//    printf("\n");
    r->next = L;
//    printf("r %d\n",r->data);
    LNode *p = r;   //将开始的结点指向尾结点
//    printf("%d\n",L->data);
//    printf("p = %d\n",p->data); //尾指针指向头结点，循环链表
    for(int i = 1;i < 21;i++)
    {
        int cnt = 16;
           //指向头结点
        while(cnt--)
        {
            p = p->next;
        }
        q = p->next;  //第17个结点
//        printf("%d = %d\n",i,q->data);
        p->next = q->next; //17等于第18个结点
        free(q);
    }
    printf("%d\n",p->data);
}
//17 13 10 8 7 9 12 16 21 5 19 11 4 6 18 14 20 1 3 15 2
int main()
{
    LinkList L;
    CreatList2(L);
    return 0;
}
