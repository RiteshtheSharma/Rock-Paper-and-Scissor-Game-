#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void lowerc(char *s){int i,n=strlen(s);
for(i=0;i<n;i++){char c=s[i];
(c>='A' && c<='Z')?s[i]=('a'+c-'A'):c;
}
}
int main(){srand(time(0));// Use current time as seed for random generator
  char choice[3][8]={"rock","paper","scissor"},yourchoice[9];

printf("Hey buddy!wana play rock ,paper,Scissor-----\n");
printf("lets get started :)\n");
int count=0,index;
while(count>-20 ){
printf("enter your choice:\t");
scanf("%s",yourchoice);
lowerc(yourchoice);
if(strcmp(yourchoice,"rock")==0 || strcmp(yourchoice,"paper")==0 || strcmp(yourchoice,"scissor")==0 ){index=rand()%3;
if(strcmp(yourchoice,"rock")==0)
{if(strcmp(choice[index],"scissor")==0){
count++;
printf(":)--great choice--\n");}
else if(strcmp(choice[index],"paper")==0)
{count--;
printf(":(--bad choice--\n");}
else{printf(":| ~tie~\n");}}
  if(strcmp(yourchoice,"paper")==0)
  {if(strcmp(choice[index],"rock")==0){
  count++;
  printf(":)--great choice--\n");}
  else if(strcmp(choice[index],"scissor")==0)
  {count--;
  printf(":(--bad choice--\n");}
  else{printf(":| ~tie~\n");}}
    if(strcmp(yourchoice,"scissor")==0)
    {if(strcmp(choice[index],"paper")==0){
    count++;
    printf(":)--great choice--\n");}
    else if(strcmp(choice[index],"rock")==0)
    {count--;
    printf(":(--bad choice--\n");}
    else{printf(":| ~tie~\n");}
  }
printf("--my choice %s--\n",choice[index]);
}
else if(strcmp(yourchoice,"exit")==0){printf("Are you sure to quit the game Y |N :\t");
char c;
getchar();
scanf("%c",&c);
if(c=='N'){
  continue;}
  else break;}
else{printf(":>()--%s is--invalid - choice--:>()\n",yourchoice);}
}
printf("--total score is %d",count);
return 0;}
