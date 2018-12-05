// ============================================================================
//  File:  RomanType.cpp
//  Purpose:  Contains the implementation of the class members for the
//  roman numeral conversion
//
//  *NOTE*: Uncomment cout statements to visualize whats happening
// ============================================================================
#include <iostream>
#include <string>
#include <cstring>
#include "ClassRomanType.h"
using namespace std;

ClassRomanType::ClassRomanType()
{
    m_decimalValue=0;
    strcpy(m_romanValue,"Currently Undefined");
}// end of ClassRomanType

void ClassRomanType:: GetDecimalNumber(int decimalNumber)
{
    m_decimalValue = decimalNumber;
}// end of GetDecimalNumber

void ClassRomanType:: GetRomanNumeral(char romanNumeral[])
{
    strcpy(m_romanValue,romanNumeral);
}// end of GetRomanNumeral

void ClassRomanType:: ConvertDecimalToRoman()
{
    strcpy(m_romanValue,""); // erases any previous data
    int numericValue[]={1000,500,100,50,10,5,1};
    char *romanNumeral[]={"M","D","C","L","X","V","I"};
    
    for (int x=0; numericValue[x] > 0; ++x)
    {
        //cout<<endl<<numericValue[x]<<endl;
        while (m_decimalValue >= numericValue[x])
        {
            cout<<"current m_decimalValue = " <<m_decimalValue<<endl;
            out<<"current numericValue = "<<numericValue[x]<<endl<<endl;
            if(strlen(m_romanValue)==0)
            {
                strcpy(m_romanValue,romanNumeral[x]);
            }
            else
            {
                strcat(m_romanValue,romanNumeral[x]);
            }
            m_decimalValue  -= numericValue[x];
        }
    }
}// end of ConvertDecimalToRoman

void ClassRomanType:: ConvertRomanToDecimal()
{
    int currentNumber = 0;	// Holds value of each letter numerical value
    int previousNumber = 0; // Holds the numerical value being compared
    m_decimalValue=0; // Resets the current 'romanToDecimalValue' to zero
    
    if(strcmp(m_romanValue,"Currently Undefined")!=0)
    {
        for (long counter = strlen(m_romanValue)-1; counter >= 0; counter--)
        {
            if ((m_romanValue[counter] == 'M') || (m_romanValue[counter] == 'm'))
            {
                currentNumber = 1000;
            }
            else if ((m_romanValue[counter] == 'D') || (m_romanValue[counter] == 'd'))
            {
                currentNumber = 500;
            }
            else if ((m_romanValue[counter] == 'C') || (m_romanValue[counter] == 'c'))
            {
                currentNumber = 100;
            }
            else if ((m_romanValue[counter] == 'L') || (m_romanValue[counter] == 'l'))
            {
                currentNumber = 50;
            }
            else if ((m_romanValue[counter] == 'X') || (m_romanValue[counter] == 'x'))
            {
                currentNumber = 10;
            }
            else if ((m_romanValue[counter] == 'V') || (m_romanValue[counter] == 'v'))
            {
                currentNumber = 5;
            }
            else if ((m_romanValue[counter] == 'I') || (m_romanValue[counter] == 'i'))
            {
                currentNumber = 1;
            }
            else
            {
                currentNumber = 0;
            }
            //cout<<"previousNumber = " <<previousNumber<<endl;
            //cout<<"currentNumber = " <<currentNumber<<endl;
            
            if (previousNumber > currentNumber)
            {
                m_decimalValue -= currentNumber;
                previousNumber = currentNumber;
            }
            else
            {
                m_decimalValue += currentNumber;
                previousNumber = currentNumber;
            }	
            //cout<<"current m_decimalValue = " <<m_decimalValue<<endl<<endl;
        }
    }
}// end of ConvertRomanToDecimal

int ClassRomanType::ReturnDecimalNumber()
{
    return m_decimalValue;
}// end of ReturnDecimalNumber

string ClassRomanType::ReturnRomanNumber()
{
    return  m_romanValue;
}// end of ReturnRomanNumber

ClassRomanType::~ClassRomanType()
{
    m_decimalValue=0;
    strcpy(m_romanValue,"Currently Undefined");
}
