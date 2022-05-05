#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("\n");
    for( int i=n;i>=0;i--){
        for( int j=1;j<=i-1;j++){
            printf(" ");
        }
        for( int k=1; k<=n; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
