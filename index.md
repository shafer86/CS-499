                                                      Welcome to My Page 

| INDEX |
| ----- |
| [Introduction](#introduction-and-self-assessment) |
| [Code Review](#code-review)|
| [Software Design Narrative](#software-design-narrative) |
| [Artifact Enhancment Software Design](#artifact-enhancment-software-design) |
| [Algorithm and Data Structure Narrative](#algorithm-and-data-structure-narrative) |
| [Artifact Enhancment Algorithm and Data Structure](#artifact-enhancment-algorithm-and-data-structure) |
| [Database Narative](#database-narative) |
| [Artifact Enhancment Database](#artifact-enhancment-database) |



![me](https://user-images.githubusercontent.com/79005760/145807383-11fbf96f-f710-4692-8d84-892d50f9ae58.jpg)

 ## Introduction and Self Assessment
 
 Hello! My name is Chad Shafer and this is my ePortfolio for Southern New Hampshire University class CS-499.
 This ePorfolio will demonstrate the knowledge and skills that I have developed throughout my journey to complete my B.A. in
 Software Engineering. This journey has been a wholesome one. When I first started with SNHU as a computer science major, I was 
 quickly overwhelmed. It seemed to me that learning to code through you somewhere in the middle of the ocean and it was sink or 
 swim. I had to ask my brother, who already has his degree as a software engineer, who said that it will feel like you are
 working backwards but to stick with it. I took his advice and stuck it out. For a while it was a struggle but one day it clicked. Once that happened, I understood why we seem to start in the middle, work our way all over the place. I feel that I have learned a lot through this program, though I wish that we had focused more on one or two languages instead of jumping around. It was harder to get proficient in a certian language. I progressed, however, and now I am on the capstone to my second B.A. I enjoyed this capstone because you dont really think about how much you learned, or it does not occure to you until you need to consider it. That is what this class did for me. So in order for me to show what I have learned I will showcase artifacts that demonstrate my skills and abilities in three key categories:
 
- Software Design
- Algorithms and Data Structure
- Databases

To acomplish this demonstration I have taken prievious artifacts including open-source code and enhanced it according to the three 
categories above. Before I show the enhancements, I have created a code review that will discuss the functionality of the code as 
well as discuss the planned enhancements. Following the enhancements will be a narrative describing in detail the changes
and justifaction of the artifacts inclusion in this ePortfolio. 




# Code Review

<details><summary>Code Review Intro Part 1</summary>
  
https://user-images.githubusercontent.com/79005760/145661407-538c1911-97cd-4b28-8bf7-506232c5774c.mp4
  
  
  </details>

<details><summary>Code Review Part Intro 2</summary>
  
https://user-images.githubusercontent.com/79005760/145661662-46acb9cd-ca61-435d-b520-92f1b4991403.mp4
  
  
  </details>

<details><summary>Code Review Intro Part 3</summary>
  
https://user-images.githubusercontent.com/79005760/145673629-c19b5ae8-d0b2-422f-94ce-0c8cd53ac4b1.mp4
    
  
  </details>

<details><summary>Code Review Part 1</summary>
  
  Due to the size of the file I have included a link to the code review that has been posted on YouTube.
  
  https://youtu.be/T95YuSByxrQ
  
  
  </details>
 
 <details><summary>Code Review Part 2</summary>
  
  https://youtu.be/Od6pVbPDmZE
  
  
  </details>
  
 <details><summary>Code Review Part 3</summary>
  
  https://youtu.be/vdP5zSQjusk
  
  
  </details>
  
 <details><summary>Code Review Part 4</summary>
  
  https://youtu.be/Ri8VtZzhABg
  
 
  </details>



# Software Design Narrative

  You can find the narrative file [here](https://github.com/shafer86/CS-499/blob/34be71ac1c0302bb11e4833c572b04cca9320914/Milestone%202.docx)
  
  The artifact that I chose to represent is a small game that everyone knows which is Hangman. The code is written in C++ and was created a year or so ago. The program is composed of 7 functions and a main function. The first function is called printMessage. This function sets up the borders to the game and it called when the game wants to print out certain words. The next function is one that I recently added in. This function is called DrawHangman. Its purpose is to print a piece of the hangman every time the user enters an incorrect guess. The third function is called PrintLetters. This function is set to print a list of letters ranging from one character to another, leaving off characters that the player has already guessed. The fourth function is called PrintAvailableLetters. This function prints the letters for the player to guess. The fifth function is PrintWordAndCheckWin. This function prints the word the player must guess. It shows the letter if the player has already guessed it and shows and underscore if the letter remains unguessed. The sixth functions is named LoadRandomWord. Just like the name suggests, this function loads a file containing a list of words and picks a random word to use for the player to guess. The seventh and final function before our main is called TriesLeft. This function determines how many incorrect guesses the player has made. Finally, is our main. This is where our program is run and calls to the other functions. When working correctly, the user has a fun little hangman game.
I used this artifact because I feel that this program, along with the enhancements, is a good representation of the range of skills needed to perform as a coder. I believe that this code demonstrates a combination of knowledge, aptitude, technical capabilities and problem-solving when it comes to developing a working code based of user’s expectations. While I have utilized different coding languages such as Java, Python, and SQL, I prefer to work with C++ as it seems most appropriate to the field of choice. When it comes to the software design of this program, I needed to create a design that met the users’ requirements. When you look at the requirements, the game needed to be the traditional functional, hangman game that everyone knows and loves. This program demonstrates the problem-solving aspect of software design and demonstrates how I can take the problem to the solution. The different functions define the components to define the behavior and boundaries that I wanted in the game. I made some enhancements and that proves that my code is flexible and able to be modified on the changing needs. In the case of design and engineering, I lacked the drawing of the stickman when the user guessed the wrong letter. I developed a function that drew the stick man in on a wrong guess. I feel that this enhancement meets the users’ expectations more than the previous version. I have also cleaned up the code to make if fall under some best practice coding. This creates the clean code approach which is easy to understand and easy to read. Before my functions were practically connected, but now there is adequate space. The last enhancement that I put in place was to accurately comment my code.  This details what the code and functions are doing. I feel with these enhancements in place, this program I have met the course objectives.

I can honestly say that when I was first putting this code together it was a struggle with a lot of research and help from my brother who is a software engineer in Michigan. In the beginning it felt like running on a treadmill. You are running fast but going nowhere. That’s what this journey through this major has felt like. However, when I look back at this code for this course, I was able to see where enhancements were needed and what I could do to make the program better. To me that shows that there is growth and when I felt like I was going nowhere, I was moving more than I thought. There is still a lot I do not understand when it comes to programming but there is always information to learn from. The commenting and clean coding were the easy part to the enhancement, but it does enhance the code greatly. The harder part will come with the algorithms and data structure and working on the seeding randomizer.

  

 
 
 # Artifact Enhancment Software Design
 
 Here you will see the code before I made the changes described above. The code is all bunched up and hard to read. There are also
 no comments which make it hard for any programmer to work.
 
<details><summary>Code Before Enhancement</summary>
  
  ```ruby
	
  #include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;
void PrintMessage(string message, bool printTop = true, bool printBottom = true)
{
    if (printTop)
    {
        cout << "+---------------------------------+" << endl;
        cout << "|";
    }
    else
    {
        cout << "|";
    }
    bool front = true;
    for (int i = message.length(); i < 33; i++)
    {
        if (front)
        {
            message = " " + message;
        }
        else
        {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();

    if (printBottom)
    {
        cout << "|" << endl;
        cout << "+---------------------------------+" << endl;
    }
    else
    {
        cout << "|" << endl;
    }
}
void DrawHangman(int guessCount = 0)
{
    if (guessCount >= 1)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 2)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 3)
        PrintMessage("O", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount == 4)
        PrintMessage("/  ", false, false);

    if (guessCount == 5)
        PrintMessage("/| ", false, false);

    if (guessCount >= 6)
        PrintMessage("/|\\", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 7)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount == 8)
        PrintMessage("/", false, false);

    if (guessCount >= 9)
        PrintMessage("/ \\", false, false);
    else
        PrintMessage("", false, false);
}
void PrintLetters(string input, char from, char to)
{
    string s;
    for (char i = from; i <= to; i++)
    {
        if (input.find(i) == string::npos)
        {
            s += i;
            s += " ";
        }
        else
            s += "  ";
    }
    PrintMessage(s, false, false);
}
void PrintAvailableLetters(string taken)
{
    PrintMessage("Available letters");
    PrintLetters(taken, 'A', 'M');
    PrintLetters(taken, 'N', 'Z');
}
bool PrintWordAndCheckWin(string word, string guessed)
{
    bool won = true;
    string s;
    for (int i = 0; i < word.length(); i++)
    {
        if (guessed.find(word[i]) == string::npos)
        {
            won = false;
            s += "_ ";
        }
        else
        {
            s += word[i];
            s += " ";
        }
    }
    PrintMessage(s, false);
    return won;
}
string LoadRandomWord(string path)
{
    int lineCount = 0;
    string word;
    vector<string> v;
    ifstream reader(path.c_str());
    if (reader.is_open())
    {
        while (std::getline(reader, word))
            v.push_back(word);

        int randomLine = rand() % v.size();

        word = v.at(randomLine);
        reader.close();
    }
    return word;
}
int TriesLeft(string word, string guessed)
{
    int error = 0;
    for (int i = 0; i < guessed.length(); i++)
    {
        if (word.find(guessed[i]) == string::npos)
            error++;
    }
    return error;
}
int main()
{
    srand(time(0));
    string guesses;
    string wordToGuess;
    wordToGuess = LoadRandomWord("words.txt");
    int tries = 0;
    bool win = false;
    do
    {
        system("cls"); //replace this line with system("clear"); if you run Linux or MacOS
        PrintMessage("HANGMAN");
        DrawHangman(tries);
        PrintAvailableLetters(guesses);
        PrintMessage("Guess the word");
        win = PrintWordAndCheckWin(wordToGuess, guesses);

        if (win)
            break;

        char x;
        //cout << ">";
        cin >> x;

        if (guesses.find(x) == string::npos)
            guesses += x;

        tries = TriesLeft(wordToGuess, guesses);

    } while (tries < 10);

    if (win)
        PrintMessage("YOU WON!");
    else
        PrintMessage("GAME OVER");

    system("pause"); //this line wont work on Linux or MacOS so remove it
    getchar();
    return 0;
}
```
  </p>
  </details>
  
<details><summary>Hangman Code After Enhancment</summary> 
  
  ```ruby
  
  #include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <stddef.h>
#include <cstddef>


using namespace std;

//function to print messages to the screen
//the top and bottom borders are optional
void PrintMessage(string message, bool printTop = true, bool printBottom = true)
{
    //if print top parameter is true, print the top border
    if (printTop)
    {
        cout << "+---------------------------------+" << endl;
        cout << "|";
    }
    else
    {
        cout << "|";
    }

    //print message center aligned
    bool front = true;
    for (int i = message.length(); i < 33; i++)
    {
        if (front)
        {
            message = " " + message;
        }
        else
        {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();

    //if print bottom parameter is true, print the bottom border
    if (printBottom)
    {
        cout << "|" << endl;
        cout << "+---------------------------------+" << endl;
    }
    else
    {
        cout << "|" << endl;
    }
}

//function to draw the hanged man based on number of
//incorrect guesses the player has made
void DrawHangman(int guessCount = 0)
{
    if (guessCount >= 1)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 2)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 3)
        PrintMessage("O", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount == 4)
        PrintMessage("/  ", false, false);

    if (guessCount == 5)
        PrintMessage("/| ", false, false);

    if (guessCount >= 6)
        PrintMessage("/|\\", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 7)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount == 8)
        PrintMessage("/", false, false);

    if (guessCount >= 9)
        PrintMessage("/ \\", false, false);
    else
        PrintMessage("", false, false);
}

//function to print a list of letters ranging from
//one character to another, leaving off characters
//that player has already guessed
void PrintLetters(string input, char from, char to)
{
    string s;
    for (char i = from; i <= to; i++)
    {
        if (input.find(i) == string::npos)
        {
            s += i;
            s += " ";
        }
        else
            s += "  ";
    }
    PrintMessage(s, false, false);
}

//print available letters for player to guess
//letters are listed in two separate rows
void PrintAvailableLetters(string taken)
{
    PrintMessage("Available letters");
    PrintLetters(taken, 'A', 'M');
    PrintLetters(taken, 'N', 'Z');
}

//print the word the player must guess, showing the
//letter if the player has guessed it, and showing an
//underscore if the letter remains unguessed
bool PrintWordAndCheckWin(string word, string guessed)
{
    //return a bool that determines whether the player
    //has won or not
    bool won = true;
    string s;
    for (int i = 0; i < word.length(); i++)
    {
        //if there are any letters in the word that are
        //not in the list of guessed letters, then the
        //player has not won, and we will show an underscore
        if (guessed.find(word[i]) == string::npos)
        {
            won = false;
            s += "_ ";
        }
        else
        {
            s += word[i];
            s += " ";
        }
    }
    PrintMessage(s, false);
    return won;
}

//load a file containing a list of words and pick a
//random word to use for the player to guess
string LoadRandomWord(string path)
{
    int lineCount = 0;
    string word;
    vector<string> v;
    ifstream reader(path.c_str());
    if (reader.is_open())
    {
        while (std::getline(reader, word))
            v.push_back(word);

        int randomLine = rand() % v.size();

        word = v.at(randomLine);
        reader.close();
    }
    return word;
}

//function to determine how many incorrect guesses
//the player has made
int TriesLeft(string word, string guessed)
{
    int error = 0;

    //letters in the string of guessed characters
    //that do not appear in the word indicates how
    //many errors the player has made
    for (int i = 0; i < guessed.length(); i++)
    {
        if (word.find(guessed[i]) == string::npos)
            error++;
    }
    return error;
}

//main function
int main()
{
    //seeding randomizer with time this app has been alive
    //Enhanced the srand by adding time(NULL). By adding NULL, the seeder pulls
    // the time from the internal clock of the computer. 
    srand(time(NULL));
    string guesses;
    string wordToGuess;

    //load a random word from a file called words.txt
    wordToGuess = LoadRandomWord("words.txt");

    int tries = 0;
    bool win = false;

    //main game loop will loop at least once, and will continue to loop
    //until the player wins, or until the player has made ten errors
    //in guessing letters
    do
    {
        //clear the screen... we will redraw everything every time we loop
        system("cls"); //replace this line with system("clear"); if you run Linux or MacOS

        //print the name of the game
        PrintMessage("HANGMAN");
        DrawHangman(tries);

         //print the available letters
        PrintAvailableLetters(guesses);

        PrintMessage("Guess the word");

        //print the word and check if player won
        //if player won, exit the game loop
        win = PrintWordAndCheckWin(wordToGuess, guesses);
        if (win)
            break;

        //prompt the player for a letter
        char x;
        //cout << ">";
        cin >> x;

        //if player has not guessed the letter yet,
        //then add it to the string containing all of
        //the players guesses
        if (guesses.find(x) == string::npos)
            guesses += x;

        //get the number of errors the player has made
        tries = TriesLeft(wordToGuess, guesses);

    } while (tries < 10);

    //if the win flag was set to true then the player won
    //otherwise the player exited the game loop by making
    //too many mistakes and lost the game
    if (win)
        PrintMessage("YOU WON!");
    else
        PrintMessage("GAME OVER");

    //pause the console so the player can see the end game message
    //until entering a character in the console
    system("pause"); //this line wont work on Linux or MacOS so remove it
    getchar();
    return 0;
}
/*
+---------------------------------+
|             HANG MAN            |
+---------------------------------+
|               |                 |
|               |                 |
|               O                 |
|              /|\                |
|               |                 |
|              / \                |
|         +----------+            |
|         |          |            |
+---------------------------------+
|        Available letters        |
+---------------------------------+
|     A B C D E F G H I J K L M   |
|     N O P Q R S T U V W X Y Z   |
+---------------------------------+
|         Guess the word          |
+---------------------------------+
| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |
+---------------------------------+
>
*/
```
   </p>
  </details>

  
# Algorithm and Data Structure Narrative
  
  You can find the file [here](https://github.com/shafer86/CS-499/blob/fbb3c7bb2062c11818d9c666914b531c35890328/Milestone%203.docx)
  
 
When it comes to algorithms and data structure, I feel this code is a great representation and example. Programming algorithms are the “recipe” or procedure for solving a problem. For instance, I wanted the function LoadRandomWord to do just that, load a random word. I needed the code in that function to be a specific sequence of actions that tell the program exactly what to do and receive an output. Data structures organizes data in the memory such as an array, or vector. The way that my code is set up, organized, and the way the functions are built are all great showcases of a good algorithm. For the data structure, one part of the code showcases this skill better than others. This part of the code is also part of my enhancement. In my function LoadRandomWord, I have the reader go into a save .txt file, load the file containing a list of words and save them into a vector. I have multiple data structures in play in this function such as a string, vector, and integers. Once the words are loaded into the vector, we choose a random word from the vector for the player to guess, using rand() and the size of the vector. The only problem is that the word is not too random. This is because that rand generates a range of integers by a mathematical algorithm. The numbers are given a starting number and if that starting number is the same it will always be the same sequence. To get around this I wanted to change the seed value. In my main I used srand which sets the starting value. I did not want to just give it an integer because the starting value will always be the same. To solve this problem I used the time() function. With srand(time(NULL)), I am able to change the seed value based off of the time the user started the game, from the computer’s internal clock. That way this will always be different. 
  
Enhancing this randomizer was a lot of fun. I played around with different equations and ideas on how I can randomly generate numbers. The hard part was knowing that there is no such thing as “random numbers” in computers, just pseudo-random numbers. Doing research on how to utilize this in my code was simple. I already had the base, I just needed to identify a value to seed and I needed that to change every time. 


# Artifact Enhancment Algorithm and Data Structure
  
  The code below is the same program as the Software Design enhancment. The major changes are:
  
 ```ruby
  int main()
{
    srand(time(0));
  }
  ```
    
  
 <details><summary>Hangman Code After Enhancment</summary> 
  
  ```ruby
  
  #include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <stddef.h>
#include <cstddef>


using namespace std;

//function to print messages to the screen
//the top and bottom borders are optional
void PrintMessage(string message, bool printTop = true, bool printBottom = true)
{
    //if print top parameter is true, print the top border
    if (printTop)
    {
        cout << "+---------------------------------+" << endl;
        cout << "|";
    }
    else
    {
        cout << "|";
    }

    //print message center aligned
    bool front = true;
    for (int i = message.length(); i < 33; i++)
    {
        if (front)
        {
            message = " " + message;
        }
        else
        {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();

    //if print bottom parameter is true, print the bottom border
    if (printBottom)
    {
        cout << "|" << endl;
        cout << "+---------------------------------+" << endl;
    }
    else
    {
        cout << "|" << endl;
    }
}

//function to draw the hanged man based on number of
//incorrect guesses the player has made
void DrawHangman(int guessCount = 0)
{
    if (guessCount >= 1)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 2)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 3)
        PrintMessage("O", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount == 4)
        PrintMessage("/  ", false, false);

    if (guessCount == 5)
        PrintMessage("/| ", false, false);

    if (guessCount >= 6)
        PrintMessage("/|\\", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount >= 7)
        PrintMessage("|", false, false);
    else
        PrintMessage("", false, false);

    if (guessCount == 8)
        PrintMessage("/", false, false);

    if (guessCount >= 9)
        PrintMessage("/ \\", false, false);
    else
        PrintMessage("", false, false);
}

//function to print a list of letters ranging from
//one character to another, leaving off characters
//that player has already guessed
void PrintLetters(string input, char from, char to)
{
    string s;
    for (char i = from; i <= to; i++)
    {
        if (input.find(i) == string::npos)
        {
            s += i;
            s += " ";
        }
        else
            s += "  ";
    }
    PrintMessage(s, false, false);
}

//print available letters for player to guess
//letters are listed in two separate rows
void PrintAvailableLetters(string taken)
{
    PrintMessage("Available letters");
    PrintLetters(taken, 'A', 'M');
    PrintLetters(taken, 'N', 'Z');
}

//print the word the player must guess, showing the
//letter if the player has guessed it, and showing an
//underscore if the letter remains unguessed
bool PrintWordAndCheckWin(string word, string guessed)
{
    //return a bool that determines whether the player
    //has won or not
    bool won = true;
    string s;
    for (int i = 0; i < word.length(); i++)
    {
        //if there are any letters in the word that are
        //not in the list of guessed letters, then the
        //player has not won, and we will show an underscore
        if (guessed.find(word[i]) == string::npos)
        {
            won = false;
            s += "_ ";
        }
        else
        {
            s += word[i];
            s += " ";
        }
    }
    PrintMessage(s, false);
    return won;
}

//load a file containing a list of words and pick a
//random word to use for the player to guess
string LoadRandomWord(string path)
{
    int lineCount = 0;
    string word;
    vector<string> v;
    ifstream reader(path.c_str());
    if (reader.is_open())
    {
        while (std::getline(reader, word))
            v.push_back(word);

        int randomLine = rand() % v.size();

        word = v.at(randomLine);
        reader.close();
    }
    return word;
}

//function to determine how many incorrect guesses
//the player has made
int TriesLeft(string word, string guessed)
{
    int error = 0;

    //letters in the string of guessed characters
    //that do not appear in the word indicates how
    //many errors the player has made
    for (int i = 0; i < guessed.length(); i++)
    {
        if (word.find(guessed[i]) == string::npos)
            error++;
    }
    return error;
}

//main function
int main()
{
    //seeding randomizer with time this app has been alive
    //Enhanced the srand by adding time(NULL). By adding NULL, the seeder pulls
    // the time from the internal clock of the computer. 
    srand(time(NULL));
    string guesses;
    string wordToGuess;

    //load a random word from a file called words.txt
    wordToGuess = LoadRandomWord("words.txt");

    int tries = 0;
    bool win = false;

    //main game loop will loop at least once, and will continue to loop
    //until the player wins, or until the player has made ten errors
    //in guessing letters
    do
    {
        //clear the screen... we will redraw everything every time we loop
        system("cls"); //replace this line with system("clear"); if you run Linux or MacOS

        //print the name of the game
        PrintMessage("HANGMAN");
        DrawHangman(tries);

         //print the available letters
        PrintAvailableLetters(guesses);

        PrintMessage("Guess the word");

        //print the word and check if player won
        //if player won, exit the game loop
        win = PrintWordAndCheckWin(wordToGuess, guesses);
        if (win)
            break;

        //prompt the player for a letter
        char x;
        //cout << ">";
        cin >> x;

        //if player has not guessed the letter yet,
        //then add it to the string containing all of
        //the players guesses
        if (guesses.find(x) == string::npos)
            guesses += x;

        //get the number of errors the player has made
        tries = TriesLeft(wordToGuess, guesses);

    } while (tries < 10);

    //if the win flag was set to true then the player won
    //otherwise the player exited the game loop by making
    //too many mistakes and lost the game
    if (win)
        PrintMessage("YOU WON!");
    else
        PrintMessage("GAME OVER");

    //pause the console so the player can see the end game message
    //until entering a character in the console
    system("pause"); //this line wont work on Linux or MacOS so remove it
    getchar();
    return 0;
}
/*
+---------------------------------+
|             HANG MAN            |
+---------------------------------+
|               |                 |
|               |                 |
|               O                 |
|              /|\                |
|               |                 |
|              / \                |
|         +----------+            |
|         |          |            |
+---------------------------------+
|        Available letters        |
+---------------------------------+
|     A B C D E F G H I J K L M   |
|     N O P Q R S T U V W X Y Z   |
+---------------------------------+
|         Guess the word          |
+---------------------------------+
| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |
+---------------------------------+
>
*/
```
   </p>
  </details>
   
   
# Database Narative
   
   You can find the file [here](https://github.com/shafer86/CS-499/blob/058c73a26c06c53319bd7eb439bf32290d74657b/Milestone%204.docx)
   
   The article that I have chosen to use is a simple program meant to demonstrate a database in C++. This article is a simple program that allows a user to preform basic CRUD operations for a personnel management system. As of right now the only information to be stored is a name, age, and salary. The program starts off with our includes and declaring our using namespace std. Next, II declared my functions so the compiler could understand the function name, arguments, and return type. I then go right into the main function. The first three lines I build the aesthetics of the command box with title and color. The next part in my main is the option menu followed by a switch statement based on the option menu. For each switch case, I have a function that will be called upon. The database system is old school, in the sense that it is through a text file, using ofstream, with input/output operations rather than connecting to MySQL. The original had three cases: input, search and quit. My final code is different, but I will go over those changes in the enhancement section of this essay. 
	This code was functional but, in my opinion, it was not fully complete. To completely utilize the database, this code needed to have full CRUD (Create, Read, Update, Delete) operations. As I stated before I only had three case options: input, search, and quit. This only had two of the four options in CRUD, and one was not fully complete. To enhance this program, I first added more functions. I now have 9 different functions to make this code operate and five case options. The addition was the delete files. I needed a way to delete the entries that were saved to the text file database. The second option I added was the edit function. The editFile() function allowed me to change the name, age and salary of information that has already been added to the database. The function will search for the information and once found it will confirm the selection and ask for the updates. The last enhancement I complete was to the search function. Now I already had the search function but all I could do was search for a user’s name. This really limited the ability of searching the database. It either returned one name or many users with that same name. What if I wanted to search for everyone making a certain salary or for everyone who was 20 years old? So, I changed the search function, adding in a switch statement with 6 case options. Now I could search by name, age, salary, or display all information on the database.
	I selected this article because I feel it is a good representation of using a (text) database. This program demonstrates each CRUD operation. It has you input to create new entries, it has your search function to read what is already put into your database, it has your edit function for you update portion, and it allows you to delete information already put into the system. This program also demonstrates creating a text file for the information to be store on, then pulling that text file into other functions, searching the text file for information that might match and changing the information around. I feel that this program has met the course objectives and my enhancements have made this program better demonstrate the use of a database.
	Through my time here at SNHU, a lot of my classes has delt with student databases either through MySQL or text files. I was comfortable reworking this program and I can remember struggling with it when I first attended SNHU. That is not to say this programming has come easy to me. In fact, it took a lot of research, and looking up C++ references to complete the enhancements. I am glad that I can overcome problems and challenges rather than being unable to complete a project. Programming is a puzzle with more than one way to solve the puzzle. Finding those solutions is half the fun of programming.

   
 # Artifact Enhancment Database
   
<details><summary>Database Code Enhancement</summary>
 <p>
	 
```ruby
	 
	 #include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

void input();
void searchname();
void searchage();
void searchsalary();
void quit();
void displayall();
void search();
void deleteFile();
void editFile();

int main()
{

    system("title CS499 Database Demo Program");
    system("cls");
    system("color 0F");
    int choice;
    cout << "1.Input a new name" << endl;
    cout << "2.Search database for employee" << endl;
    cout << "3.Clear Log" << endl;
    cout << "4.Edit file" << endl;
    cout << "5.Exit Program" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        input();
        break;
    case 2:
        search();
        break;
    case 3:
        deleteFile();
        break;
    case 4:
        editFile();
        break;
    case 5:
        quit();
        break;

        cin.get();


    }
}
void editFile()
{
    string name, input, newName, decision;
    int age;
    double salary;
    ifstream employee("newemployee.txt");
    if (!employee.eof()) {
        employee >> name >> age >> salary;
    }
    system("cls");

    cout << "Enter the name of the employee:";
    cin >> input;

    if (input == name)
    {

        cout << name << ' ' << age << ' ' << salary << endl;
        cout << "Is this the correct employee[y][n]:";
        cin >> decision;
        if (decision == "y") {
            cout << "Enter the new name:";
            cin >> newName;
            name = newName;
        }

        employee.close();
    }

    ofstream employee2("newemployee.txt", ios::app);
    employee2 << name << ' ' << age << ' ' << salary << endl;
    employee2.close();
    system("pause");
    main();
}

void input()
{
    string name;
    int age;
    long int salary;
    ofstream newemployee("newemployee.txt", ios::app);
    system("cls");
    cout << "Enter the new employee's name" << endl;
    cin >> name;
    cin.sync();
    system("cls");
    cout << "Enter the employee's age." << endl;
    cin >> age;
    system("cls");

    cout << "Enter the employee's yearly salary" << endl;
    cin >> salary;


    newemployee << name << ' ' << age << ' ' << salary << endl;
    newemployee.close();
    main();
}
void searchname()
{
    ifstream employee("newemployee.txt");
    string name;
    string str, line;
    int age, offset;
    long int salary;
    system("CLS");
    cout << "Enter the emplyee's name:";
    cin >> str;

    while (employee >> name >> age >> salary) {
        if (str == name) {
            system("CLS");
            cout << "Employee found" << endl;
            cout << "Name" << ' ' << "Age" << ' ' << "Salary" << endl;
            cout << "---------------" << endl;
            cout << name << ' ' << age << ' ' << "$" << salary << endl;
        }
    }


    while (employee >> name) {
        if (str != name) {
            system("CLS");
            cout << "Nobody under that name exists" << endl;

        }
    }
    system("pause");
    main();


}
void searchage()
{
    ifstream employee("newemployee.txt");
    string name;
    int age;
    int fage;
    long int salary;
    system("CLS");
    cout << "Enter the age of an employee:";
    cin >> fage;
    while (employee >> name >> age >> salary) {
        if (fage == age) {
            system("CLS");
            cout << "Employee(s) found" << endl;
            cout << "Name" << ' ' << "Age" << ' ' << "Salary" << endl;
            cout << "---------------" << endl;
            cout << name << ' ' << age << ' ' << "$" << salary << endl;
        }
    }
    while (employee >> age) {
        if (fage != age) {
            system("CLS");
            cout << "No employee(s) found" << endl;


        }
    }
    system("pause");
    cin.get();
    main();
}
void searchsalary()
{
    ifstream employee("newemployee.txt");
    string name;
    int age;
    long int salary;
    long int fsalary;
    system("CLS");
    cout << "Enter an employee's salary:";
    cin >> fsalary;
    while (employee >> name >> age >> salary) {
        if (fsalary == salary) {
            system("cls");
            cout << "Employee found" << endl;
            cout << "Name" << ' ' << "Age" << ' ' << "Salary" << endl;
            cout << "---------------" << endl;
            cout << name << ' ' << age << ' ' << "$" << salary << endl;;

        }
    }
    while (employee >> salary) {
        if (fsalary != salary) {
            system("CLS");
            cout << "No employee(s) found" << endl;
        }
    }
    system("pause");
    cin.get();
    main();
}
void quit()
{
    system("CLS");
    cout << "Thank you for using the ItalyHorse45 database program" << endl;
    system("pause");
    cin.get();
}
void displayall()
{
    ifstream employee("newemployee.txt");
    int age;
    long int salary;
    string name;
    system("CLS");
    cout << "Entire employee database" << endl;
    cout << "Name" << ' ' << "Age" << ' ' << "Salary" << endl;
    cout << "---------------" << endl;
    while (employee >> name >> age >> salary) {
        cout << name << ' ' << age << ' ' << "$" << salary << endl;
    }
    system("pause");
    cin.get();
    main();

}
void search()
{
    int age;
    string name;
    long double salary;
    int choice2;
    system("CLS");

    cout << "1.Search by name" << endl;
    cout << "2.Search by age" << endl;
    cout << "3.Search by salary" << endl;
    cout << "4.Display all employees" << endl;
    cout << "5.Back" << endl;
    cout << "6.Exit program" << endl;
    cin >> choice2;

    switch (choice2) {
    case 1:
        searchname();
        break;
    case 2:
        searchage();
        break;
    case 3:
        searchsalary();
        break;
    case 4:
        displayall();
        break;
    case 5:
        main();
        break;
    case 6:
        quit();
        break;
    }




}
void deleteFile()
{

    string decision;
    cout << "Are you sure?[Y]es[N]o" << endl;
    cin >> decision;
    if (decision == "y") {
        ofstream employee("newemployee.txt");
        system("cls");
        cout << "Successfully Completed!" << endl;
        system("pause");
        employee.close();
        main();
    }
    else {
        main();
    }
}
```
	 </p>
	 </details>




 
