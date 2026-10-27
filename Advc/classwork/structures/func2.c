//time calculation
#include<stdio.h>
struct time_calculation
{
    int hours;
    int mins;
    int seconds;
};
void display_time(struct time_calculation var);
int main()
{
    struct time_calculation s;
    printf("enter the hours : ");
    scanf("%d",&s.hours);
    printf("enter the mintues : ");
    scanf("%d",&s.mins);
    printf("enter the seconds : ");
    scanf("%d",&s.seconds);
    display_time(s);
    return 0;
}
void display_time(struct time_calculation var)
{
  if(var.hours<=60&&var.mins<=60&&var.seconds<=60)
  {
  printf("%d:",var.hours);
  printf("%d:",var.mins);
  printf("%d",var.seconds);
  }else{
    printf("invalid time\n");
    return;
  }
}
