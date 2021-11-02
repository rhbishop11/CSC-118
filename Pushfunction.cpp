#include<iostream>
#include<string>
using namespace std;
int main(){

// Declaring string
    string str;
    
    // Taking string input using getline()
    // " I love C++ programming" in giving output
    cout<<"Enter anything"<<endl;
    getline(cin,str);
    
    // Displaying string
    cout << "I love c++ programming ";
    cout << str << endl;
    
    // Using push_back() to insert a character
    // at end
    // pushes 's' in this case
    str.push_back('s');
    
    // Displaying string
    cout << "I love c++ programmings ";
    cout << str << endl;
    
    // Using pop_back() to delete a character
    // from end
    // pops 's' in this case
    str.pop_back();
    
    // Displaying string
    cout << "I love c++ programming ";
    cout << str <<endl;
    
    return 0;
    
    }

    
    

