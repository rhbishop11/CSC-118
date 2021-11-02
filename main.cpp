// Program Greet Prints

#include <iostream>
#include <string>
using namespace std;

const string  FirstName = "Russell";
const string LastName = " Bishop";

int main() {
    string message;
    string name;
    
    name = FirstName + LastName;
    message = "Good Morning " + name + " how are you today? ";
    cout << message << endl;
    
    return 0;
}
