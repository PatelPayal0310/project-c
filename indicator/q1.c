//Develop a program that finds the length of a string using a pointer.
#include<stdio.h>
int main(){
	char *ptr;
	char str[100];
	printf("Enter any string:");
	gets(str);
	int i,count=0;
	for(i=0; str[i] !='\0';i++){
//		ptr =&str;
//		printf("%u\n",ptr);
		count++;
	}
	printf("The length of string is :%d",count);	
}
