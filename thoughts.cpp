#include <iostream>
#include <string>
using namespace std;
int main()
 {
   //DECLARING OUR INTEGERS HERE : -
   int option1, option2, option3, answer;
   char question[100];
   char my_name[100] = "your name?";
   char name[20];
   option1 = 1;
   option2 = 2;
   option3 = 3;



   //HELLO WORLD OF CHATBOTS
   std::cout << "\n Please enter your name : \n" << '\n';
   std::cin >> name;
   std::cout << "Hello " << name << " how can I help you ? (◠‿◠✿) \n" << "\nHere are some tasks I can do for you !!\n";
   std::cout << "Slect number according to your need (from option 1-3)" << '\n';
   std::cout << "  ̑̑ෆ(⸝⸝⸝◉⸝ ｡ ⸝◉⸝✿⸝⸝) " << '\n';
   std::cout << "\n1• Ask me any Question" << "\n2• Get a friendly advice on any situation you are facing \n" << "3• Tell you a joke ! \n";
   std::cin >> answer;
   //MAIN WORK HERE
   if(answer == option1) {
     std::cout << "Type your Question here  \n";
     std::cin >> question;
     if (question == my_name) {
       std::cout << "My name is GHOST !\n";
     }

   }

 }
