#include <stdio.h>

#define BUFFER_SIZE 10


int main()
/*如何获取数组有多少个元素：数组的总长度 /每个元素的长度*/
    long array[BUFFER_SIZE] = { 0 }



    
/*字符数组*/
/*Q1:什么叫字符？*/
char pNum = 'a';
printf（"pNum:%c）














char buffer[] = {'h','e', 'l', 'l', 'o','w', 'o','r','l','d', '\0'};
int buflen = sizeof(buffer);
printf("buffer:%d\n", buffer);





















/*字符数组初始化定义的两种方式*/
/*如果是以双引号（字符串）的方式，默认加上‘\0’*/
/*如果是以单引号（字符）的方式，则默认不加‘\0’*/

char buffer1[] = {'helloworld\0'};
char  buffer2[] = {'h','e', 'l', 'l', 'o','w', 'o','r','l','d', '\0'};
int buflen1 = sizeof(buffer1);
int buflen2 = sizeof(buffer2);

printf("buffer1:%d\n", buffer1);
printf("buffer2:%d\n", buffer2);

return 0;