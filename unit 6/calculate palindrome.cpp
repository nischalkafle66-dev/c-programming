//write a program to read a string 
//check whether is a palindrome
//convert the string to uppercase without built string functions
#include<stdio.h>
int main () {
char str[100];
int i,lenght=0;
int flag=1;
printf("enter a string");
scanf("%s",str);
while(str[length]!='\0'){
	lenght++;
}
for(int i=0; i<lenght/2; i++){
	if(str[i]!=str[lenght-i-1]){
		flag=0;
		break;
	}
}
if(flag==1)
printf("the string is a palindrome\n");
else
printf("the string is not palindrome\n");
for(int i=0; i<length; i++){
	if(str[i]>='a' && str[i]<='z'){
		str[i]=str[i]-32;
	}
}
printf("string in uppercase is %s",str);
	return 0;
}
