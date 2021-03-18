#include "dna.h"
#include <iostream>
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dnaString){

    int length = dnaString.length();
    int count = 0;

    
    for (int i = 0; i < length;i++)
    {
      
        char c = dnaString[i];
   
        if (c == 'c' || c == 'C' || c == 'g' || c == 'G')        
        {
        count = count + 1;
 
        }
    }
    double gc = 0.0;
    if (count > 0)
    {

        gc = ((double)count) / ((double)length);

    }

    return gc;

}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dnaString)
{

    int length = dnaString.length();
    string reverse = dnaString;
    for (int i = 0; i < length; i++)
    {
        int index = (length-1) - i;
       

        reverse[i] = dnaString[index];
    }
    return reverse;
}




string get_dna_complement(string dnaString)
{

    string newString = get_reverse_string(dnaString);
    
    int length = newString.length();
    for (int i = 0; i < length; i++)
    {
        

        if(newString[i] == 'A')
        {
            newString[i] = 'T';
        }
        else if (newString[i] == 'T')
        {
            newString[i] = 'A';
        }
        else if (newString[i] == 'C')
        {
            newString[i] = 'G';
        }
        else if (newString[i] == 'G')
        {
            newString[i] = 'C';
        }
    }

    return newString;


}
