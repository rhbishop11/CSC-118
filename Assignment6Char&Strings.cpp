//Demonstrates the use of Charaters and Strings
//Russell Bishop

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    const string FAVORITESODA = "Dr. DoLittle";
    
    const char BESTRATING = 'A';
    
    const char RATING = 'B';
    
    const string FAVORITESNACK = "Crackers";
    
    int numberofpeople = 250;
    int topchoicetotal = 148;
    
    cout<<"The preferred soda is "<<FAVORITESODA<<endl;
    
    cout<<"The preferred snack is "<<FAVORITESNACK<<endl;
    
    cout<< "Out of "<<numberofpeople<<" people "<< topchoicetotal << " chose these items! "<<endl;
    
    cout<<"Each of the products were given a rating of "<<BESTRATING<<endl;
    
    cout<<"from our expert tasters" <<endl;
    
    cout<<"The other products were rated no higher than a "<<RATING<<endl;
    
    
    return 0;
}
