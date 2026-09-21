#include <iostream>

using namespace std;

int main()
{
    /* Task 1
    int year, result;
    cout << "Enter the year: \n";

    cin >> year;


    result = ((year % 4 + 3) % 4) / 3;

    cout << year << ' ' << '%' << ' ' << 4 << ' ' << '=' << ' ' << (year % 4 + 3) << endl;

    cout << 3 << ' ' << '%' << ' ' << 4 << ' ' << '=' << ' ' << ((year % 4 + 3) % 4) <<  endl;

    cout << 3 << ' ' << '/' << ' ' << 3 << ' ' << '=' << ' ' << ((year % 4 + 3) % 4) / 3 << endl;

    cout << "In" << ' ' << year << ' ' << "year" << ' ' << "=" << ' ' << 365 + result << ' ' << "days";

    */ 

    
    /* Task 2 

    int money, cent;
    cout << "Enter the price in hryvnias: \n";

    cin >> money;

    cout << "Enter the price in cents: \n";

    cin >> cent;

    money += cent / 100;
    cent %= 100;

    cout << money << " " << "hryvnias" << " " << cent << " " << "cents.";

    */

    /* Task 3 

    float length, width, height;

    cout << "Calculating the volume of a parallelepiped.\n";

    cout << "Enter the length: \n";
    cin >> length;

    cout << "Enter the width: \n";
    cin >> width;

    cout << "Enter the height: \n";
    cin >> height;

    cout << "Volume: " << " " << (length * width * height) << " " << "cubic centimeters.";

    */

    /* Task 4 

    float scale, distance; 
    cout << "Distance Calculator\n";

    cout << "Enter the map scale (km per cm): \n";
    cin >> scale;

    cout << "Enter the map distance(cm): \n";
    cin >> distance;

    cout << "The actual distance is:" << " " << (scale * distance) << " " << "km.";
    */

    /* Task 5 */

    float radius;

    cout << "Sphere Volume Calculator \n";

    cout << "Enter the sphere radius: \n";

    cin >> radius;

    cout << "The volume of the sphere is:" << " " << ((4.0/3.0) * 3.14 * (radius * radius * radius)) << " " << "cubic centimeters.";


        
}

