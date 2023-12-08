#include <stdio.h>
#include <string.h>


#define BUFFER_SIZE 10
/*数组：
      1.一段连续的存储空间
      2.它里面存放的数据类型必须是一致的
      3.数组的长度是确定的，一旦定义，不能更改*/

int main()
{

    int a;
    printf("%d", a);
    /*方法一：使用定义进行初始化*/
    int array [BUFFER_SIZE] = { 0 };


    for (int idx = 0 ; idx < BUFFER_SIZE; idx++)
    {
        /* code */
        printf(array[%d]= %d  \n, idx, array[idx]);
    }
     int len = sizeof(array) ;
     printf("len=%d\n", len);

     /*地址*/
    printf("%p\n",&array[0]);
    printf("%p\n",&array[1]);
    printf("%p\n",&array[9]);
    /*数组的（首）地址和数组的首元素的地址是一样的*/


   /*二进制*/
   /*八进制*/
   /*十进制*/
   /*十六进制*/






    /*清楚脏数据*/
    memset(array, 0, sizeof(array));
    printf（"============\n”）;

    for （int idx = 0; idx <BUFFER_SIZE;idx++）

    {

        printf（“array[%d] = %d\n"，idx，array[idx]）;

    }
    //memset
    return 0;


    /*数组的越界访问*/
    /*判断索引的有效性*/
     printf（“array[-1];%d\n"，array[-1]）;
     printf（“array[10];%d\n"，array[10]）;

     return 0;