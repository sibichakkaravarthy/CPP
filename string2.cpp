#include<iostream>
#include<string> // for string class
using namespace std;
int main()
{
    // Initializing string
    string str = "Welcome to VIT-AP, No-1 University";
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
    string str2 = str.substr (11,6); // This will results the sub-string "VIT-AP".
	size_t pos = str.find("VIT-AP"); // This gives the position (11) of the VIT-AP in str.
	string str3 = str.substr (pos); // get from "VIT-AP" to the end
	cout << str2 << ' ' << str3 << '\n';
	// Resizing string using resize()
    str.resize(13);
    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;
    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;
    str.shrink_to_fit();
    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;
	return 0;
}


