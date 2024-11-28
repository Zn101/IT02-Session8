#include <stdio.h>
int main(){
    int n[2][3]={
        {1,2,3},
        {4,5,6}
    };
    for(int i=1;i>=0;i--){
        for(int f=2;f>=0;f--){
            printf("n[%d][%d]=%d\n",i,f,n[i][f]);
        }
    }
}
