//cpp
#include "decision.h"



string get_letter_grade_using_if(int grade)
{
    
    if (grade >= 90){
        return "A";
    }
    else if (grade >= 80){
        return "B";
    }
    else if (grade >= 70){
        return "C";
    }
    else if (grade >= 60){
        return "D";
    }
    else {
        return "F";
    }

    return "If error"; 

}

   string get_letter_grade_using_switch(int grade)
{
    grade /= 10;

    switch(grade){

        case 10: case 9:
                return "A";
        case 8: 
            return "B";
        case 7:
            return "C";
        case 6:
            return "D";
        default:
            return "F";
    }
        
    return "Switch error";

}