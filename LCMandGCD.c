#include<stdio.h>

int gcd(int a,int b){
  int t;
  while(b>0){
    t = b;
    b = a%b;
    a=t;
  }
  return a;
}
int main(){
  int t;
  scanf("%d",&t);

  while(t--){
    int a,b;
    scanf("%d %d",&a,&b);
    int g = gcd(a,b);
    int l = (a*b)/g;
    printf("%d %d",l,g);
    printf("\n");
  }
}
