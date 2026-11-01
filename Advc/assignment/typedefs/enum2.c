#include<stdio.h>
int main()
{
    enum day{sunday,one=10,monday};
    switch(10)
    {
        case one : printf("one\n");
        break;
    }
}