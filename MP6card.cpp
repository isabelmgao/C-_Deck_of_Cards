//  MP6
//  Created by Isabel Gao  on 4/15/15.
//  This program loops through a 'deck of 52 cards' and reports the suit, value, and description of each card as well as echoing the card #.

#include <iostream>
#include "card.h"

using namespace std;

int main()
{
    int integer, remainder;
    cardType card1;
    
    
    for(integer=1; integer<=52; integer++)
    {
        card1.Set_Card(integer, remainder);
        
        card1.Card_Value (remainder);
        
        card1.Display (integer);
       
    
    }
    

    return 0;
}
