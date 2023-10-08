#include<iostream>
using namespace std;

// Define a class named 'cuboid' to represent a cuboid (rectangular box)
class cuboid
{
public:
    // Function to calculate the volume of the cuboid
    float calculate(float a, float b, float c)
    {
        float vol = a * b * c; // Calculate the volume
        return vol;           // Return the calculated volume
    }

    // Function to display the volume of the cuboid
    void display(float a)
    {
        cout << "Volume of cuboid = " << a; // Display the volume
    }
};
// WAP TO FIIND THE VOLUME VIA TAKING THE IINPUT FROM THE USER 
int main()
{
    cuboid c1;        // Create an instance of the 'cuboid' class named 'c1'
    float h, b, l;    // Declare variables to store the length, breadth, and height

    cout << "Enter the length, breadth, and height: ";
    cin >> l >> b >> h; // Input the length, breadth, and height from the user

    float vol = c1.calculate(l, b, h); // Calculate the volume using the 'calculate' function
    c1.display(vol); // Display the calculated volume using the 'display' function

    return 0;
}

/* OUTPUT 
           > cd "f:\c++\c\" ; if ($?) { g++ TRIAL.CPP -o TRIAL } ; if ($?) { .\TRIAL }
Enter the length, breadth, and height: 
56
78
12
Volume of cuboid = 52416*/
