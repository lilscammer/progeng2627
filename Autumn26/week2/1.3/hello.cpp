#include <iostream>
#include <string>

//std::cout represents console output (screen)

//<<std::endl basically represents a new line. "endl" = endline

//difference between <<std::endl and /n. 
//Both send the information to a buffer, but the former forces the information to get output onto the terminal
//the latter means that the item will be sent to the terminal when convinient.  

//I need to include "std::"" before everything because it allows the compiler to know I am referencing a function in the std library.   

//direction of the << and >> matter for cout and cin.
//think of it as a funnel that funnels info into or out of the subsequent code you type

int main()
{
    std:: string user_name;
//this is the declaration of a variable, with the name "user_name", containing some information. 
//the variable is a string, which can contain text as an information

    std::cout << "what is your name" << std::endl;
    std::cin >> user_name;
//this reads information from the keyboard. 
//cin is console input, which stores the info under the variable "user_name". 

    std::cout << "Hello " << user_name << std::endl;
}