#include<stdio.h>
void produce();
void consume();
void display();
int capacity=10;
int avaialabiliy;
void produce()
{
    if(avaialabiliy>=10)
    {
        printf("storage is fulll\n");
        return;
    }else if(avaialabiliy<=capacity)
    {
        printf("item produced\n");
        avaialabiliy++;
        printf("availability=%d\n",avaialabiliy);
    }
}
void consume()
{
    if(avaialabiliy<0)
    {
        printf("no items is available\n");
    }
    else if(avaialabiliy>0)
    {
        avaialabiliy--;
        printf("availability %d\n",avaialabiliy);
    }
}
void display()
{
    printf("present availability is %d\n",avaialabiliy);
    return;
}
int main()
{
    printf("produce\n");
    printf("consume\n");
    printf("display\n");
    int choice;
    while(1)
    {
        printf("enter the choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            produce();
            break;
            case 2:
            consume();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("exit\n");
            break;
            default:
            printf("exiting program\n");
        }
    }
    return 0;
}