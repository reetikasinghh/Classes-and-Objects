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


//WAP TO FIND THE VOL OF THE SHAPES 
#include<iostream>
using namespace std;

class shapes
{
public:
    double h;  // Height for cuboid
    double wid; // Width for cuboid
    double len; // Length for cuboid
    double r;  // Radius for sphere
    double s;  // Side length for cube

    // Constructor for cuboid
    shapes(double height, double width, double length)
    {
        h = height;
        wid = width;
        len = length;
    }

    // Constructor for cube
    shapes(double sideLength)
    {
        s = sideLength;
    }

    // Constructor for sphere
    shapes(bool isSphere, double radius)
    {
        if (isSphere) {
            r = radius;
        }
    }

    // Method to calculate and display the volume of a cuboid
    double cuboid_volume()
    {
        double vol = h * wid * len;
        cout << "Volume of the cuboid is = " << vol << endl;
        return vol;
    }

    // Method to calculate and display the volume of a cube
    double cube_volume()
    {
        double cube_vol = s * s * s;
        cout << "Volume of the cube is = " << cube_vol << endl;
        return cube_vol;
    }

    // Method to calculate and display the volume of a sphere
    double sphere_volume()
    {
        double sphere_vol = 1.33 * 3.14 * r * r * r;
        cout << "Volume of the sphere is = " << sphere_vol << endl;
        return sphere_vol;
    }
};

int main()
{
    // Create instances of different shapes with their respective constructors
    shapes cuboid1(2.0, 3.0, 5.0);
    shapes cube1(2.0);
    shapes sphere1(true, 2.0);  // Use a boolean flag to specify sphere

    double vCu;
    double vC;
    double vS;

    // Calculate and store the volumes
    vCu = cuboid1.cuboid_volume();
    vC = cube1.cube_volume();
    vS = sphere1.sphere_volume();

    return 0;
}

/*OUTPUT
Enter the dimensions of cuboid :2 2 2
Enter the dimensions of cube :2
Enter the dimensions of sphere :2
volume of the cuboid is = 8
Volume of the cube is = 8
Volume of the sphere is = 33.4096
*/


//Write the program using class which will display the given Date,Month,Year*/
#include<iostream>
using namespace std;

class Date
{
    private :
    const char* mon_name[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    public :
    int date;
    int month;
    int year;

    input(int d,int m,int y)
    {
        date = d;
        month = m;
        year = y;
    }

    display()
    {
        cout<< "The date is :" << date << "th " << mon_name[month-1] << " 20" << year;
    }

    bool isleap()
    {

    }

};

int main()
{
    Date d1;
    int d,m,y;
    cout << "Enter the date :";
    cin >> d;
    cout << "Enter the month :";
    cin >> m;
    cout << "Enter the year :";
    cin >> y;
    d1.input(d,m,y);
    d1.display();

    return 0;
}
/*Output
Enter the date :2
Enter the month :8
Enter the year :23
The date is :2th August 2023
*/

