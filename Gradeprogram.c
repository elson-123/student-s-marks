#include<stdio.>
int main(){
int m;
  printf("Enter marks:");
  scanf("%d",&m);
  if(m>=85&&m<=100){
    printf("Grade A");
    }
  else
  if(m>=70&&m<=84){
    printf("Grade B");
    }
  if(m>=55&&m<=69){
    printf("Grade C");
    }
  if(m>=40&&m<=54){
    printf("Grade D");
    }
  if(m<40){
    printf("Grade F");
    }
