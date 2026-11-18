#include<iostream>
using namespace std;
class car
{
    void turn_on()
    {
        cout <<"AC has turned on " << endl;
    }
    void turn_off()
    {
        cout <<"AC has turned off " << endl;
    }

public:
void start()
{
    cout <<"Engine started " << endl;
    turn_on();

}
void stop()
{
    cout <<"Engine stopped " << endl;
    turn_off();
}

};
int main()
{
    car c1;
    c1.start();
    c1.stop();

}

