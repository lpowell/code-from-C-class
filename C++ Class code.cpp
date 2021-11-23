#include <iostream>
#include <Windows.h>

using namespace std;

class Car {
    public:
        string brand;
        int number_of_passengers;
        int current_speed;

        void Speed_up(){
        current_speed += 1;
        }
        void Slowdown(){
        current_speed -= 1;
        }
        int Show_car_speed(){
        return current_speed;}

        void Set_Speed(int speed){
        current_speed = speed;
        }

    };

int main()
{
    Car Honda;
    Honda.brand = "Honda";
    Honda.number_of_passengers = 4;
    Honda.current_speed = 0;

    int input;
    cout << "Starting the car!" << endl;
    Sleep(1000);
    cout << "Current speed: " << Honda.Show_car_speed() << endl;
    Sleep(1000);
    cout << "Let's speed up!" << endl;
    Sleep(1000);
    Honda.Speed_up();
    cout << "Current speed: " << Honda.Show_car_speed() << endl;
    Sleep(1000);
    Honda.Slowdown();
    cout << "Whoah! That's fast! \nLet's slow down!" << endl;
    Sleep(1000);
    cout << "Current speed: " << Honda.Show_car_speed() << endl;
    Sleep(1000);
    cout << "Here, I'll let you set the speed now" << endl;
    Sleep(500);
    cout << "Speed: ";
    cin >> input;
    Honda.Set_Speed(input);
    cout << "Now we're going " << Honda.Show_car_speed() << "MPH!" << endl;
    Sleep(500);
    return 0;
}
