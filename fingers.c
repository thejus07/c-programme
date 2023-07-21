#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int value = 0,count = 0;
    for (int i=1; i<n+1; i++){
        if(count == 0){
            value++;
        }else{
            value--;
        }
        if( value == 5){
            count = 1;
        }else if( value == 1){
            count = 0;
        }
    }
    char a[][6] = {"Thumb", "Index", "Middle", "Ring", "Little"};
    printf("%s \n",a[value-1]);
}

