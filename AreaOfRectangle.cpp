//  Created by Russell Bishop on 10/18/19.

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int length1;
    int width1;
    int area1;
    int length2;
    int width2;
    int area2;
    
    cout<<"Enter first length"<<endl;
    cin>>length1;
    cout<<"Enter first width"<<endl;
    cin>>width1;
    
    area1 = length1*width1;
    
    cout<<area1<<endl;

    cout<<"Enter second length"<<endl;
    cin>>length2;
    cout<<"Enter second width"<<endl;
    cin>>width2;
    
    area2 = length2*width2;
    
    cout<<area2<<endl;
    
    if(area1 > area2)
        cout<<"First area is greater than second area"<<endl;
    else if(area1 == area2)
        cout<<"Areas are equal"<<endl;
    else
        cout<<"Second area is larger than first area"<<endl;
    
    return 0;
}