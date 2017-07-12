/*********************************
 *    ���ڣ�2013-3-7
 *    ���ߣ�SJF0115
 *    ���: �Ŷ�OJ ��Ŀ1184������������
 *    ��Դ��http://ac.jobdu.com/problem.php?pid=1184
 *    �����AC
 *    ��Դ��2002�껪�пƼ���ѧ������о�����������
 *    �ܽ᣺
**********************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char array[101];

//���������
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

//���������д���������
int CreateBiTree(BiTree &T,int &index,int &n){
    if(index == n){
        return 0;
    }
    //�������������������н���ֵ��һ���ַ�������#����ʾ����
    if(array[index] == '#'){
        T = NULL;
        index++;
    }
    else{
        T = (BiTree)malloc(sizeof(BiTNode));
        //���ɸ����
        T->data = array[index];
        index++;
        //����������
        CreateBiTree(T->lchild,index,n);
        //����������
        CreateBiTree(T->rchild,index,n);
    }
    return 0;
}
//���
void Visit(BiTree T){
    if(T->data != '#'){
        printf("%c ",T->data);
    }
}
//�������
int InOrder(BiTree T){
    if(T != NULL){
        //�������ӽ��
        InOrder(T->lchild);
        //���ʸ��ڵ�
        Visit(T);
        //�������ӽ��
        InOrder(T->rchild);
    }
    return 0;
}
int main()
{
    int len,index;
    while(scanf("%s",array) != EOF){
        BiTree T;
        len = strlen(array);
        index = 0;
        //����������
        CreateBiTree(T,index,len);
        //�������
        InOrder(T);
        printf("\n");
    }
    return 0;
}

