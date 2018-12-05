// ============================================================================
//  File:  ClassRomanType.h
//  Purpose:  Header file for Roman Numeral conversion. It contains all
//  declarations and prototypes for the class members to carry out the
//  conversion
// ============================================================================
#include <string>
using namespace std;

class   ClassRomanType
{
public:
    ClassRomanType();
    /*   Function: constructor initializes class variables to "0"
     Precondition: none
     Postcondition: defines private variables */
    
    // member functions
    void GetDecimalNumber(int  decimalNumber);
    /*   Function: gets decimal number
     Precondition: none
     Postcondition: Gets arabic number from user */
    
    void GetRomanNumeral(char romanNumeral[]);
    /*   Function: gets roman numeral
     Precondition: none
     Postcondition: Gets roman numeral from user */
    
    void ConvertDecimalToRoman();
    /*   Function: converts decimal number to ronman numeral
     Precondition: arabic and roman numeral characters should be known
     Postcondition: Gets roman numeral from user */
    
    void ConvertRomanToDecimal();
    /*   Function: converts roman numeral to arabic number
     Precondition: arabic and roman numeral characters should be known
     Postcondition: Gets decimal number from user */
    
    int ReturnDecimalNumber();
    /*   Function: displays converted decimal number
     Precondition: the converted roman numeral to decimal number
     Postcondition: displays decimal number to user */
    
    string ReturnRomanNumber();
    /*   Function: displays converted roman numeral
     Precondition: the converted decimal number to roman numeral
     Postcondition: displays roman numeral to user */
    
    ~ClassRomanType();
    /*   Function: destructor used to return memory to the system
     Precondition: the converted decimal number to roman numeral
     Postcondition: none */
    
private:
    char	m_romanValue[150];  // An array holding the roman value within the class
    int	m_decimalValue;	// Holds the final output answer of the roman to decimal conversion
}; 
