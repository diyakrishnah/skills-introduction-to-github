//diya
//frequency
#include<stdio.h>
#include<string.h>
int main(){
  char string[200];
  int count[26]={0};
  printf("Enter a string:");
  scanf("%s",string);
  //printf("enter the charecter you want to count:");
  //scanf("%d",count);
  for (int i=0;string[i]!='\0';i++){
   char ch=string[i];
   if(string[i]>='A'&& string[i]<='Z'){
     ch=ch+32;
     }
    if (ch>='a'&& ch<='z'){
    count[ch-97]++;
    }
  }
  for (int i=0;i<26;i++){
    if (count!=0){
      printf("%c=%d\n",i+97,count[i]);
     }
    }
    return 0;
}
  
