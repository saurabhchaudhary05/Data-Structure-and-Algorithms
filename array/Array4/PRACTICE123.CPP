#include <iostream>
using namespace std;
// Define a union to hold different data types
union Data {
    int intValue;
    char charValue;
    double doubleValue;
};
	int main() {
    const int SIZE = 5;
    Data dataArray[SIZE]; // Array of unions to store different data types
 //Populate the array with data
   /* dataArray[0].intValue = 42;
    dataArray[1].charValue = 'A';
    dataArray[2].doubleValue = 3.14;
    dataArray[3].intValue = 100;
    dataArray[4].charValue = 'Z';*/

    // Access and display the data from the array
    cout << "Array of Union:" << endl;
    for (int i = 0; i < SIZE; ++i)
{
	cin>>dataArray[i].intValue;
	cin>>dataArray[i].charValue;
	cin>>dataArray[i].doubleValue;
}
for (int i = 0; i < SIZE; ++i)
{
	cout<<dataArray[i].intValue;
	cout<<dataArray[i].charValue;
	cout<<dataArray[i].doubleValue;
}
   /* cout << "Index " << i << ": ";
// Since a union can only hold one value at a time, we need to know the type stored at each index
        if (i % 3 == 0) {
            cout << "Integer Value: " << dataArray[i].intValue << endl;
        } 
else if (i % 3 == 1) {
            cout << "Character Value: " << dataArray[i].charValue << endl;
        }
else {
            cout << "Double Value: " << dataArray[i].doubleValue << endl;
        }
    }
*/
    return 0;
}


