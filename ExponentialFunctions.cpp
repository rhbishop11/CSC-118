#include<iostream>
#include<string>
using namespace std;
int main()
{
    int square(int);
    int poly(int,int);
    int cube(int);
    
    cout<< square(3) <<endl;
    cout<< cube(3) <<endl;
    cout<< poly(4,5) <<endl;
  
    
    return 0;
}

int square(int x){
    int y;
    y = x*x;
    return y;
}

int poly(int x, int y){
    int z;
    z = ((3*(x*x)*(5*y)+10));
    
    
    return z;
}int cube(int x){
    int r;
    r = (x*x*x);
    
    return r;
}
