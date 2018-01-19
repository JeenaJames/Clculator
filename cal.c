#include<stdio.h>
int main(int argc, char const *argv[]) {
  int x=9,y=8;
  int sub(int x,int y);
  printf("%d",sub(x,y));

  return 0;
 }

function sub(int x,int y){
  return x-y;
}
