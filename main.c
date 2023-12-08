#include <stdio.h>
int main ()
{}
  /*判断语句*/
  int money = 50;

  int apple = 5;
  int pear = 6;
  int orange = 7;
  if (money > apple)
  {
    printf("get a apple!\n");
  }
  else if (money > pear)
  {
    /* code */
    printf("get a pear!\n");
  }
  else if (money > orange)
  {
    /* code */
    printf("get an orange!\n");
  }
  









int budget = 5000;
int iphone = 8999;
int mi14   = 4999;
int huawei = 6000;
int minbudget = 4000;
int maxbudget = 6000;
/*只要有一个条件满足，那么就为1（成立）*/

if (buget < iphone || buget < mi14 || buget < huawei)
{
    /* code */
    printf("not enough money!\n");
}
else{
    printf("enough money!\n");
    
}
  /*都为1 为1*/
 if（minbudget < budget）&&(budget < maxbudget)
 {
    printf("success get a phone\n");

 }
else
{
    printf("error get a phone\n");
} 



#if
 /*swift*/
Switch（expression）
{
    case/*constant-expression*/;
    /**/
    break;

    default;

}


/*状态码*/
enum STATUS_CODE
{
    REGISTER;
    LOGIN;
    QUIT;

};

/*宏定义*/
/*代码规范：宏必须大写*/
#define COUNT_NUM 100
#define RANGE_NUM 200





/*代码规范1：一个函数尽量不要超过80行，最多不要超过120行*/
#if
/*坑1：每一个case都需要有break;*/
int choice = 0;
printf("输入你的选项：");
scanf("%d",&choice);
switch （choice）
{
case1:{
    /*坑2：如果case里面的语句过多，一定要加上{}来包含*/
    printf("welcome to 1 city\n");
}
    break;
case2:
    printf("welcome to 2 city\n");
    break;
case3:
    printf("welcome to 3 city\n");
    break;
default    ;
}



# include <stdio.h>
# include <stdlib.h>
# include <.h>




#if 1
 srand(time(NULL));

 /*循环*/
 /*for循环*/
for （size_t i = 0)
{
    /* code */
}
/*代码规范：循环不允许使用i*/
/*代码规范：不允许使用魔鬼数字*/
for (int idx = 0; idx < COUNT_NUM; idx++)
{
    /* code */
    random = rand()%RANGE_NUM+1;
    printf("randomNum = %d\n",randomNum);
}
#endif
 /*请你写一个100以内的数1-100*/
 int randomNum = rand()%100+1;
 printf("randomNum = %d\n",randomNum);

 int randomNum2 = rand()%100+1;
 printf("randomNum2 = %d\n",randomNum2);


#if 1
/*编码规范:变量使用驼峰式命令*/
int circleTime = COUNT_NUM >> 1;
int randomNum = 0;
/*一定需要有退出的条件*/
while (circleTimes)
{
    /**/
    randomNum = rand()%RANGE_NUM+1;
    printf("randomNum = %d\n",randomNum);
}
#endif

#if 1
  int varaNum = 0；
  do {
    /**/
    printf（"varaNum:%d\n",vara）
  }

 return 0;
