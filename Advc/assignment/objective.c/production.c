#include<stdio.h>
void produce();
void consume();
void display();
int capacity=10;
int availability;
void produce()
{
    if(availability>=10)
    {
        printf("storage is full\n");
        return;
       
    }
    else if(availability<=capacity)
    {
        printf("item produced\n");
        availability++;
        printf("avaialabiliy = %d\n",availability);
    }
}
void consume()
{
    if(availability<0)
    {
        printf("no item is avaialable");
        return;
        
    }
    if(availability>0)
    {
       availability--;
       printf("availability is %d\n",availability);
    }
}
void display()
{
    printf("availability is %d\n",availability);
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
        printf("Exit\n");
        return 0;
        default:
        printf("Exiting program\n");


        
    }

}
return 0;
}