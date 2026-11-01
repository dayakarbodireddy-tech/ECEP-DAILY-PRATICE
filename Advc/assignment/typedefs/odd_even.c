#include<stdio.h>
enum name{
    even,
    odd
};
int main()
{
    int num=10;
    enum name odd_even(int);
    int res=odd_even(num);
    if(res==even)
    {
        printf("even\n");
    }else{
        printf("odd\n");
    }
    return 0;

}
enum name odd_even(int num)
{
    if(num % 2 == 0)
    {
        return even;
    }else{
        return odd;
    }
}