#include <stdio.h>
int main(){
    int answer;
    printf("moi nhap vao mot phan tu: ");
    scanf("%d",&answer);
    int n[answer][answer];
    for(int i=0;i<answer;i++){
        for(int f=0;f<answer;f++){
                n[i][f]=answer;
                printf("[%d]",n[i][f]);
        }
        printf("\n");
    }
}
