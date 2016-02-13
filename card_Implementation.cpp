//  MP6
//  Created by Isabel Gao  on 4/15/15.

#include <iostream>
#include <string>
#include "card.h"

using namespace std;
#ifndef card_h
#define card_h

    //default constructor
cardType::cardType()
{
    suit = SPADES;
    descrip = "No Card";
    value = 0;
    remainder = 0;
}

void cardType::Set_Card(int &integer, int &remainder)
{
    
    if (integer >=1 && integer <= 13)
    {
        suit = HEARTS;
    }
    else if (integer >= 14 && integer <= 26)
    {
        suit = DIAMONDS;
    }
    else if (integer >= 27 && integer <= 39)
    {
        suit = CLUBS;
    }
    else if (integer >= 40 && integer <= 52)
    {
        suit = SPADES;
    }
    
    remainder = integer % 13;
    
    switch (remainder) {
        case 1:
            descrip = "Ace";
            break;
        case 2:
            descrip = "Two";
            break;
        case 3:
            descrip = "Three";
            break;
        case 4:
            descrip = "Four";
            break;
        case 5:
            descrip = "Five";
            break;
        case 6:
            descrip = "Six";
            break;
        case 7:
            descrip = "Seven";
            break;
        case 8:
            descrip = "Eight";
            break;
        case 9:
            descrip = "Nine";
            break;
        case 10:
            descrip = "Ten";
            break;
        case 11:
            descrip = "Jack";
            break;
        case 12:
            descrip = "Queen";
            break;
        case 0:
            descrip = "King";
            break;
    }


}
void cardType::Display (int &integer)
{
    cout << "Testing the integer " << integer << endl;
    cout << "Card Information is: " << descrip << " of ";
    
        //cannot directly output enums, instead you can output as follows:
    switch (suit)
    {
        case HEARTS:
            cout << "hearts   ";
            break;
        case DIAMONDS:
            cout << "diamonds   ";
            break;
        case CLUBS:
            cout << "clubs   ";
            break;
        case SPADES:
            cout << "spades   ";
            break;
        
            
    }
    cout << "Value of card is " << value << endl << endl;
}

void cardType::Card_Value (int &remainder)
{
        //catch the 'King' cases where the remainder is 0 but value should be 13
    if (remainder == 0 || (remainder >= 11 && remainder <= 12))
        value = 10;
    else
        value = remainder;
    
}
#endif