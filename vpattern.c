#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int c=i;
        for(int j=1;j<=2*n;j++){
            if(j<=i){
                printf("%d",j);
            }
            else if(j>(2*n-i)){
                printf("%d",c);
                c--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}