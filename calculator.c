#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>

int add(int val1,int val2){
 int total=0;

  total=val1+val2;
  return total;

}


int sub(int val1,int val2){
 int total=0;

  total=val1-val2;
  return total;

}



int main(){
  assert (add(2,2)==4);
  assert (add(2,-2)==0);
  assert (add(-2,4)==2);
  assert (add(-2,-4)==-6);
  printf("all test cases passed\n");

  assert (sub(2,4)==-2);
  assert (sub(2,-4)==6);
  assert (sub(-2,4)==-6);
  assert (sub(-2,-4)==2);
    printf("all test cases passed\n");

}
