#include<cstdio>
#include<cstdlib>
using namespace std;

typedef struct LNode{     //�������ѭ���ṹ
    int data;
    struct LNode *next;
}LNode, *LinkList;

LinkList CreatList2(LinkList &L)
{
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->data = 1;   //��ͷ���ĵ�����
    LNode *s, *r = L,*q;
    x = 2;
    while(x != 22)   //�����˽��
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
    LNode *p = r;   //����ʼ�Ľ��ָ��β���
//    printf("%d\n",L->data);
//    printf("p = %d\n",p->data); //βָ��ָ��ͷ��㣬ѭ������
    for(int i = 1;i < 21;i++)
    {
        int cnt = 16;
           //ָ��ͷ���
        while(cnt--)
        {
            p = p->next;
        }
        q = p->next;  //��17�����
//        printf("%d = %d\n",i,q->data);
        p->next = q->next; //17���ڵ�18�����
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
