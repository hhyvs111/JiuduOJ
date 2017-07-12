#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j;
    int Matrix[101][101];
    Matrix[0][0] = Matrix[0][1] = 1;
    while(scanf("%d",&n) != EOF){
        for(i = 1;i < n-1;i++){
            Matrix[i][0] = 1;
            for(j = 1;j <= i;j++){
                Matrix[i][j] = Matrix[i-1][j-1] + Matrix[i-1][j];
            }
            Matrix[i][j] = 1;
        }
        //Êä³ö
        for(i = 0;i < n-1;i++){
            for(j = 0;j <= i+1;j++){
                printf("%d",Matrix[i][j]);
                if(j != i+1){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
