#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Treenode
{
    char c;
    struct Treenode *left;
    struct Treenode *right;
}Node;

void BuildTree(char *pre,char *in,int length)
{
    if(length == 0)
        return;
    Node *node = new Node;
    node->c = pre[0];
    int rootindex = -1;
    for(int i = 0;i < length;i++)
    {
        if(in[i] == pre[0])
        {
            rootindex = i;
            break;
        }
    }
    BuildTree(pre+1,in,rootindex);//left  ×ó±éÀú£¿ Ç°ÐòµØÖ·+1
    BuildTree(pre+1+rootindex,in+1+rootindex,length-rootindex-1);//right
    printf("%c",node->c);//root
}

int main()
{
    char pre[26],in[26];
    while(scanf("%s",pre) != EOF)
    {
        scanf("%s",in);
        BuildTree(pre,in,strlen(pre)) ;
        printf("\n");
    }
}
