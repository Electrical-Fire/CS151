# CS151
Indiana Jones: Hidden Diamond Search!

SetUp on Linux (Ubuntu) system
<!-- % open the terminal -->
<!-- % update the Ubuntu package lists -->
$sudo apt update && sudo apt dist-upgrade
% <!-- install the GNU compiler tools (gcc/g++) and the GDB debugger -->
$ sudo apt install build-essential gdb
<!-- % now install git -->
$ sudo apt install git
% <!-- install SFML libraries -->
$ sudo install libsfml-dev
<!-- % clone the repository -->
$ git clone https://github.com/Electrical-Fire/CS151 final
% <!-- got to the final directory -->
$ cd final
<!-- % compile the project -->
$ g++ -std=C++11 *.cpp -o final -lsfml-graphics -lsfml-window -lsfml-system
% run the game
$ ./final

 SetUp on MacOS with M1 chip
<!-- open the terminal -->
<!-- install gcc on mac -->
brew install gcc@9
<!-- % install git-->
brew install git
<!-- % install SFML libraries -->
$ sudo install homebrew
% <!-- clone the repository -->
$ git clone https://github.com/Electrical-Fire/CS151 final
<!-- % got to the final directory -->
$ cd final
% <!-- compile the project: -->
$ g++ *.cpp -o final -lsfml-graphics -lsfml-window -lsfml-system
<!-- % run the game -->
$ ./final

This is a diamond-collecting game where you play as an Indiana Jones character, and the objective is to find hidden diamonds. The diamonds are placed on random squares on the grid and shown only when the character hits the square. When that happens, a diamond appears on the square briefly. There are some barrier walls that the character cannot penetrate. The program has conditionals that prevent diamonds from appearing on barrier squares, so you'll never need to worry about that. The score is incremented every time Jones hits a diamond, and the score is always shown on the console. 

This game is not perfect and certainly not fancy, but it is definitely a fun game. The most fun way to play this game, is by setting a timer on the phone and playing the game until the timer goes off, trying to score as many diamonds as possible in that time. You could pass the laptop around and compete with friends to see who can score the most diamonds in a given time, such as one minute. If you play the game this way, you'll be having so much fun it won't even cross your mind that the game could be fancier. The best attribute of this game is that it's simple and fun to play.

The function responsible for running the game is the runGameJones function which is called in main.cpp, declared in play.h, and defined in play.cpp. Here you will find the code that controls the rendering of the game elements. If you right click on the functions called inside runGameJones, and look at everywhere they're used by clcking "Go To References," that would be the quickest way to understand what all the other files are responsible for. 


<img width="1792" alt="Screen Shot 2023-05-04 at 10 11 07 AM" src="https://user-images.githubusercontent.com/69916317/236276921-71d1b3c8-c685-46db-be3a-aaafede6fd85.png">

Things I Would Improve: 
- I could have figured out how to create a screen output if I had spent more time on it earlier on.
- I would have liked to create a sound effect that goes "Cha-ching" when Jones finds a diamond. That would have been a great touch of creativity.
