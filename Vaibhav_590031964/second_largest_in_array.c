#include <stdio.h>
int main(){
    int a[5],l=0,s=0;
    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    if(a[0] > a[1]){
    l = a[0];
    s = a[1];
}
else{
    l = a[1];
    s = a[0];
}
    for(int i=2;i<=4;i++){
        if(a[i]>l){
            s=l;
            l=a[i];
        }
        else if(a[i]>s&&a[i]<l){
            s=a[i];
        }
    }
    printf("second largest= %d\n",s);
    return 0;
}