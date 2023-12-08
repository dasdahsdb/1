#include <stdio.h>


#define BUFFER_SIZE 10

int main()

  {  int array[BUFFER_SIZE] = { 0 };
    /*数组的越界访问*/
    /*判断索引的有效性：索引必须是合理的范围RANGE [0 - BUFFER_SIZE -1]*/
     printf（“array[-1];%d\n"，array[-1]）;
     printf（“array[10];%d\n"，array[10]）;
     printf（“array[15];%d\n"，array[15]）;
}

   //静态数组//
   int desk [BUFFER_SIZE] = { 0 };

   /*动态数组*/
   /*动态数组：数组的长度是可变的，通过malloc函数动态的分配内存*/
   


 


