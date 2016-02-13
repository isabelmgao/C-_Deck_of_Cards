//  MP6
//  Created by Isabel Gao  on 4/15/15.

#include <iostream>
#include <string>

using namespace std;

class cardType
{
public:
    cardType();
    void Set_Card(int &integer, int &remainder);
    void Display (int &integer);
    void Card_Value (int &remainder);
    string descrip;
    
    
private:
    //string descrip;
    enum suits {HEARTS, DIAMONDS, CLUBS, SPADES};
    suits suit; 
    int value, remainder;

};



