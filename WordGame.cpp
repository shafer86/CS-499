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
