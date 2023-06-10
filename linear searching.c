#include <stdio.h>
int main(){

int flag=0,i,key,arr[10];
for(i=0;i<10;i++){
    printf("Enter a number :");
    scanf("%d",&arr[i]);
}
printf("Enter a number which you want :");
scanf("%d",&key);
for(i=0;i<10;i++){
    if(arr[i]==key)
        flag=1;

}
printf("flag=%d\n",flag);

if(flag==1){
    printf("found");
}
else{
    printf("not found");
}
}
