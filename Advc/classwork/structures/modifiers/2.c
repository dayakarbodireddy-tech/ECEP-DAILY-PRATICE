#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double e;
    short sh;//short int sh;
    long int distance;
    long long int time;
    long double fraction;
    //short float c;short cannot be used with float and double

    printf("size of intger=%lu\n",sizeof(int));
    printf("size of float=%lu\n",sizeof(float));
    printf("size of char=%lu\n",sizeof(char));
    printf("size of double=%lu\n",sizeof(double));
    printf("size of short=%lu\n",sizeof(sh));
    printf("size of long int=%lu\n",sizeof(distance));
    printf("size of long long int=%lu\n",sizeof(time));
    printf("size of long double=%lu\n",sizeof(fraction));
}