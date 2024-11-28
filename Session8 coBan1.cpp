#include <stdio.h>
int main(){
    int n[2][3]={
        {1,2,3},
        {4,5,6}
    };
    for(int i=0;i<2;i++){
        for(int f=0;f<3;f++){
            printf("n[%d][%d]=%d\n",i,f,n[i][f]);
        }
    }
}
