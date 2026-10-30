#include <stdio.h>
int main(){
    int a[5];
    printf("enter 5 elements of an array: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0],sec_max=-999999;
    for(int i=0;i<5;i++){
        if (a[i]>max){
            sec_max=max;
            max=a[i];
        }
    }
    if(sec_max==-999999){
        printf("second maximum number does not exist.");
    }
    else printf("second maximum number: %d",sec_max);
}