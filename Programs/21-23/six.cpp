/*
You are a travel enthusiast planning a road trip to different destinations around the world.
You want to create a C++ program that helps you convert distances between different units to make your travel planning easier.
Convert distance from meters to kilometers and from kilometers to miles using method overloading.

Example:

Enter the distance in meters: 100
Distance in kilometers: 0.1
Enter the distance in kilometers: 0.1
Distance in miles: 0.0621371
Enter the distance in miles: 0.0621371
Distance in kilometers: 0.1
Enter the distance in kilometers: 0.1
Distance in meters: 100

*/

#include<iostream>


// Convert distance from meters to kilometers
float convertToKilometers(float meters)
{
    return meters / 1000;
}

// Convert distance from kilometers to miles
float convertToMiles(float kilometers)
{
    return kilometers * 0.621371;
}

// Convert distance from miles to kilometers
float convertToKilometers(float miles, bool reverse)
{
    return miles / 0.621371;
}

// Convert distance from kilometers to meters
float convertToMeters(float kilometers, bool reverse)
{
    return kilometers * 1000;
}

int main()
{

    float meters, kilometers, miles;

    // Meters to kilometers
    std::cout << "Enter the distance in meters: ";
    std::cin >> meters;
    std::cout << "Distance in kilometers: " << convertToKilometers(meters) << std::endl;

    // Kilometers to miles
    std::cout << "Enter the distance in kilometers: ";
    std::cin >> kilometers;
    std::cout << "Distance in miles: " << convertToMiles(kilometers) << std::endl;

    // Miles to kilometers
    std::cout << "Enter the distance in miles: ";
    std::cin >> miles;
    std::cout << "Distance in kilometers: " << convertToKilometers(miles, true) << std::endl;

    // Kilometers to meters
    std::cout << "Enter the distance in kilometers: ";
    std::cin >> kilometers;
    std::cout << "Distance in meters: " << convertToMeters(kilometers, true) << std::endl;

    return 0;
}

/*
Program above asks for the distance value and its unit from the user, and based on the chosen unit, it will convert the distance to the desired unit.
The user can switch between meters to kilometers and kilometers to miles conversions as needed.

*/


