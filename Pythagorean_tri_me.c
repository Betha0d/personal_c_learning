#include<stdio.h>
#include<math.h>
int isInteger(double ppp) {
    // 比较浮点数和向下取整后的值是否相等
    return ppp == floor(ppp);
}
int main(){
  int num=5000,count=0;
  /*求num以内勾股数*/
  for (int i=1;i<=num;i++){
    for (int k=i-1;k>1;k--){
      if (isInteger(sqrt(i*i-k*k))&&(int)sqrt(i*i-k*k)<k){//判斷這一組是否爲勾股數
        //printf("%d,  %d,  %d,     ",(int)sqrt(i*i-k*k),k,i);
        count++;
        //if(count%4==0)  /*每输出4组解就换行*/
        //  printf("\n");
      }
      else if ((int)sqrt(i*i-k*k)>=k){//剪剪剪
        break;
      }
    }
  }
  printf("%d",count);
  return 0;
}
