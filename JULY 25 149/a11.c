#include<stdio.h>
int main(){
    char c[50];
    char *ptr;
    ptr = &c;

    int count = 0;
    printf("\nEnter your string: ");

    scanf("%s",ptr);

    for(int i=0; *(ptr+i)!='\0'; i++){
        count++;
    }

    printf("\nThe length of the string is: %d",count);
}
