#include <stdio.h>
int main(){
    int n=0,r=0,rev=0;
    printf("enter= ");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        rev=(rev*10)+r;
    }
    printf("%d",rev);
    return 0;
}