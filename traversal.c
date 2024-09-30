#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5]={6,2,0,1,4};
    int n;
    printf("Enter value of n:-\n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("\nEnter the values:-\n");
    for(int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    printf("Values are:-\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("Forward traversal:-\n");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    printf("Reverse traversal:-\n");
    for(int i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }

    printf("%d %d",sizeof(arr),sizeof(int));
    int arr1[5] = {22, 11, 33, 44, 55};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    printf("length = %d", size);
    return 0;

}