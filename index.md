                                                      Welcome to My Page 

| INDEX |
| ----- |
| [Introduction](#introduction) |
| [Code Review](#code-review)|
| Software Design Narrative |
| Artifact Enhancment Software Design |
| Artifact Enhancment Algorithm and Data Structure |           
| Algorithm and Data Structure Narrative |
| Artifact Enhancment Database |
| Database Narative |
| Self Assesment |


![me](https://user-images.githubusercontent.com/79005760/145807383-11fbf96f-f710-4692-8d84-892d50f9ae58.jpg)

 ## Introduction
 Hello! My name is Chad Shafer and this is my ePortfolio for Southern New Hampshire University class CS-499.
 This ePorfolio will demonstrate the knowledge and skills that I have developed throughout my journey to complete my B.A. in
 Software Engineering. To do so, I will showcase artifacts that demonstrate my skills and abilities in three key categories:
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
  
  </p>
  </details>

<details><summary>Code Review Part Intro 2</summary>
  
https://user-images.githubusercontent.com/79005760/145661662-46acb9cd-ca61-435d-b520-92f1b4991403.mp4
  
  </p>
  </details>

<details><summary>Code Review Intro Part 3</summary>
  
https://user-images.githubusercontent.com/79005760/145673629-c19b5ae8-d0b2-422f-94ce-0c8cd53ac4b1.mp4
    
  </p>
  </details>

<details><summary>Code Review Part 1</summary>
  
  Due to the size of the file I have included a link to the code review that has been posted on YouTube.
  
  https://youtu.be/T95YuSByxrQ
  
  </p>
  </details>
 
 <details><summary>Code Review Part 2</summary>
  
  https://youtu.be/Od6pVbPDmZE
  
  </p>
  </details>
  
 <details><summary>Code Review Part 3</summary>
  
  https://youtu.be/vdP5zSQjusk
  
  </p>
  </details>
  
 <details><summary>Code Review Part 4</summary>
  
  https://youtu.be/Ri8VtZzhABg
  
  </p>
  </details>



# Software Design Narrative


  

 
 
# Artifact Enhancment Software Design
  
 
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
  
