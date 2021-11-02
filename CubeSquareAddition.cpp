#include<string>
#include<iostream>

using namespace std;
float add(float x, float y);
int square(int x);
int cube(int x);

int main(){
    
    cout<<cube(5)<<endl;
    cout<<square(5)<<endl;
    cout<<add(4,5)<<endl;
    
    cout<<"So the cube of five is"<< cube(5)<<" and the square is"<< square(5)<<" lastly adding four to five give you"<< add(4,5)<<endl;
    
}

float add(float x, float y){
    
    float z;
    z = x+y;
    return z;
}

int square(int x){
    
    return x*x;
}

int cube(int x){
    
    return x*x*x;
}
