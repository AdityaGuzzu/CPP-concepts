#include "visits.cpp"
#include "printvisits.cpp"
/*
    When we run this file, 
    FIRSTLY the preprocessor commands are executed.
    So, pastes all the contents of the visits and printvisits files in our main file.
    Then, in the visits file, we have the inclusion of declaration.cpp which has the declaration
    of the variable glob_var.

*/
int main()
{
   visits();
   visits_statement();
   visits();
   visits_statement();
   visits();
   visits_statement();
}