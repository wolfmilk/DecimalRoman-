// ============================================================================
//  File: Menu.cpp
//  Purpose: Converts a number enetered in Decimal to Roman Numeral and a
//  Roman Numeral to a Decimal Number
// ============================================================================
#include <iostream>
#include <iomanip>
#include <string>
#include "ClassRomanType.h"
using namespace std;

// function prototypes
void DisplayMenu();
int GetCommand(int command);
void RunChoice(int command, ClassRomanType& romanObject);

int main()
{
    int command=7;	// Holds which action the user chooses to make
    ClassRomanType	romanObject;	// Gives access to the class
    
    do{
        DisplayMenu();
        command = GetCommand(command);
        RunChoice(command, romanObject);
        cout<<"n--------------------------------------------------------------------n";
    }while(command!=7);
    
    cout<<"nBye!n";
    
    return 0;
}// End of main

void RunChoice(int command, ClassRomanType& romanObject)
{// Function: Execute the choice selected from the menu
    
    // declare private variables
    int decimalNumber=0;	// Holds decimal value
    char romanNumeral[150];	//Holds value of roman numeral
    
    // execute the desired choice
    cout <<"ntYou selected choice #"<<command<<" which will: ";
    switch(command)
    {
        case 1:
            cout << "Get Decimal Numbernn";
            cout <<"Enter a Decimal Number: ";
            cin >> decimalNumber;
            romanObject.GetDecimalNumber(decimalNumber);
            break;
        case 2:
            cout << "Get Roman Numeralnn";
            cout <<"nEnter a Roman Numeral: ";
            cin >> romanNumeral;
            romanObject.GetRomanNumeral(romanNumeral);
            break;
        case 3:
            cout << "Convert from Decimal to Romannn";
            romanObject.ConvertDecimalToRoman();
            cout<<"Running....nComplete!n";
            break;
        case 4:
            cout << "Convert from Roman to Decimalnn";
            romanObject.ConvertRomanToDecimal();
            cout<<"Running....nComplete!n";
            break;
        case 5:
            cout << "Print the current Decimal numbernn";
            cout<<"n The current Roman to Decimal Value is: ";
            cout << romanObject.ReturnDecimalNumber()<<endl;
            break;
        case 6:
            cout << "Print the current Roman Numeralnn";
            cout<<"n The current Decimal to Roman Value is: ";
            cout << romanObject.ReturnRomanNumber()<<endl;
            break;
        case 7:
            cout << "Quitnn";
            break;
        default:
            cout << "nError, you entered an invalid command!nPlease try again...";
            break;
    }
}//End of RunChoice

int GetCommand(int command)
{// Function: Gets choice from menu
    cout <<"nPlease enter a selection: ";
    cin>> command;
    return command;
}// End of GetCommand

void DisplayMenu()
{// Function: Displays menu
    cout <<"From the following menu:n"<<endl;
    cout <<left<<setw(2)<<"1."<<left<<setw(15)<<"  Enter a Decimal number"<<endl;
    cout <<left<<setw(2)<<"2."<<left<<setw(15)<<"  Enter a Roman Numeral"<<endl;
    cout <<left<<setw(2)<<"3."<<left<<setw(15)<<"  Convert from Decimal to Roman"<<endl;
    cout <<left<<setw(2)<<"4."<<left<<setw(15)<<"  Convert from Roman to Decimal"<<endl;
    cout <<left<<setw(2)<<"5."<<left<<setw(15)<<"  Print the current Decimal number"<<endl;
    cout <<left<<setw(2)<<"6."<<left<<setw(15)<<"  Print the current Roman Numeral"<<endl;
    cout <<left<<setw(2)<<"7."<<left<<setw(15)<<"  Quit"<<endl;
}// http://programmingnotes.org/
