/*travelCost.cpp
Feb 25, 2017
Jayson Mallari
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//variables
	double mpg, distanceInMiles, numOfGallons, pricePerGallon, totalCosts;

	//input for mpg
	cout<<"Enter mpg: "<<endl;

	cin>>mpg;

	//input for distanceInMiles
	cout<<"Enter distance in miles: "<<endl;
	cin>>distanceInMiles;

	//input for pricePerGallons
	cout<<"Enter the price per gallon: "<<endl;
	cin>>pricePerGallon;

	//Calculate the gallons that the user needed
	numOfGallons = distanceInMiles/mpg;

	//Display the total gallons we needed, fixed setprecision is to set the decimal places in this case is set to 2.
	cout<<"The total gallons for this trip : "<<fixed<<setprecision(2)<<numOfGallons<<endl;

	//Calculate the total cost for the user
	totalCosts = numOfGallons * pricePerGallon;

	//Display the total cost output, fixed setprecision is to set the decimal places in this case is set to 2.
	cout<<"The total cost for this trip is : "<<fixed<<setprecision(2)<<totalCosts<<endl;

return 0;
}
