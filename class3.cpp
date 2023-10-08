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
