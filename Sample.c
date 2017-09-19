#include <stdio.h>
int main(){
  char name[25];
  char ch[10];
  printf("Hello! \nWhat's Your Name? ");
  scanf("%s",name);
  printf("Cute Name %s !\nHave You Ever Used GIT? ",name);
  scanf("%s",ch);
  if(ch[0]=='y' || ch[0]=='Y'){
	printf("That's Cool\n");
  }
  else if(ch[0]=='n' || ch[0]=='N'){
	printf("You Should Try It Buddy!\n");
  }
  else{
	printf("Couldn't Understand You Mate!\n");
  }
  return 0;
}
