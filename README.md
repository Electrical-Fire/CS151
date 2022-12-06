# CS151
Final Project for Computer Science 151
 test
 lyle's test
 //Lance's branch
 
 //Lyle's branch
SetUp on MacOS:
<!-- open the terminal -->
<!-- update the Ubuntu package lists -->
$sudo apt update && sudo apt dist-upgrade
% install the GNU compiler tools (gcc/g++) and the GDB debugger
$ sudo apt install build-essential gdb
<!-- now install git -->
$ sudo apt install git
% install SFML libraries
$ sudo install homebrew
<!-- clone the repository -->
$ git clone  SnakeGame
% got to the final directory
$ git clone 
$ cd final
% compile the project:
$ g++ *.cpp -o final -lsfml-graphics -lsfml-window -lsfml-system
% run the game
$ ./final


SetUp on Linux (Ubuntu) system
% open the terminal
% update the Ubuntu package lists
$sudo apt update && sudo apt dist-upgrade
<!-- install the GNU compiler tools (gcc/g++) and the GDB debugger -->
$ sudo apt install build-essential gdb
% now install git
$ sudo apt install git
<!-- install SFML libraries -->
$ sudo install libsfml-dev
% clone the repository
$ git clone  final
<!-- got to the final directory -->
$ cd final
% compile the project
$ g++ -std=C++11 *.cpp -o final -lsfml-graphics -lsfml-window -lsfml-system
run the game
$ ./final
This is meant to be a treasure hunt game with an Indiana Jones character. Pressing the arrow keys will move 
the character. When you land on a special square, you will receive a textbox which will tell you what 
happens next. That basically sums it up.



