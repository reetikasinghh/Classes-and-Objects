#include<iostream>
using namespace std;

// Define a class named 'cuboid' to represent a cuboid (rectangular box)
class cuboid
{
public:
    double height = 5.0;  // Define the height of the cuboid and initialize it to 2.0
    double width = 6.0;   // Define the width of the cuboid and initialize it to 3.0
    double length = 8.0;  // Define the length of the cuboid and initialize it to 5.0
};

int main()
{
    cuboid c1;           // Create an instance of the 'cuboid' class named 'c1'

    // Calculate the volume of the cuboid (rectangular box)
    double vol = c1.height * c1.width * c1.length;

    // Output the calculated volume
    cout << "Volume of the cuboid us : " << vol << endl;

    return 0;
}

/*output:
Volume of the cuboid is : 240 */
