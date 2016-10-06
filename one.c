#include<stdio.h>
#include<stdlib.h>
int Iterative(int n){
  int ans=n;
  int i=n;
  for(i;i>1;i--){
    ans=ans*(i-1);
    }
return ans;
}

int Recursive(int n){
  int ans=n;
  if(n==1){
    return ans;
    }

  else{
  ans=n*Recursive(n-1);
  return ans;
  }
}

int main()
{
  int a;
  int x;
  int y;
  printf("Please enter a number bigger than 0. enter '-1' to end program\n");
  scanf("%d",&a);
  if(a<=-1){
    exit(1);
  }
  x=Iterative(a);
  y=Recursive(a);
  printf("Iterative: %d\nRecursive: %d\n",x,y);
return 0;
} 
