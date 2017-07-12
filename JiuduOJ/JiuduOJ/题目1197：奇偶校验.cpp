#include <stdio.h>
#include <string.h>

int main(){
    char character[101];
    int k,n,len,count,i,j;
    //freopen("C:\\Users\\SJF\\Desktop\\acm.txt","r",stdin);
    while(scanf("%s",character) != EOF){

        int binaryArray[8];
        len = strlen(character);
        for(i = 0;i < len;i++){
            n = (int)character[i];  //得到阿斯卡码
//            printf("%d\n",n);
            k = 0;
            count = 0;
            //转换称二进制
            for(j = 0;j < 7;j++){
                if(n % 2 == 1){
                    count ++;
                }
                binaryArray[k++] = n % 2;
                n = n / 2;
            }
            //奇检验
            if(count % 2 == 0){
                binaryArray[j] = 1;
            }
            else{
                binaryArray[j] = 0;
            }
            //输出二进制位
            for(j = 7;j >= 0;j--){
                printf("%d",binaryArray[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
