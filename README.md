# Hangman Project
#### Video Demo: [Hangman](https://youtu.be/FE3ir4s-JDI)
#### Description: 
This is the final project for CS50.This project is a simple implementation of the classic Hangman game written in C and it utilizes simple ASCII graphics. The objective of the game is to guess the hidden word by suggesting letters within a certain number of guesses.While the game is a Hangman game that selects a random word, my primary goal and challenge was to be as meticulous as possible to ensure that users cannot misuse it maliciously while simultaneously improving the user experience. 
The program consists of about 700 lines of code .Lastly, the program was designed for use exclusively on Linux-based systems as it uses system calls that may not be available on other systems.




## Features
- Command-line interface for gameplay.
- Randomly selects words from a predefined list.
- Displays the current state of the hangman and the word being guessed.
- **Add New Words**: Users can add new words by inserting them into a specific file.
- **Color Options**: Provides options for setting foreground and background colors using ANSI escape codes.
- **Security and Validation**: Extensive validation checks to prevent malicious use and improve user experience.
- **ASCII Graphics**: Utilizes simple ASCII graphics for visual representation.
- **Multiple Characters Handling**: Handles multiple character inputs by checking each one individually. Correct characters that haven't 
been guessed before are added, while incorrect ones, if already guessed, are ignored; otherwise, they progress the hangman stage.

## Requirements
- `gcc`
- `make`
- `git`

## Follow the steps below to download and compile
First open your terminal and use `cd` command to navigate to the directory where you want your project to be downloaded
```bash
git clone https://github.com/KonstantinosRamm/FinalProject.git

cd FinalProject/Hangman

make hangman

./hangman
```


## Uninstall
1. `cd` inside hangman directory
2. `make clean` to remove the executable

## Adding more words
The game comes with 127 words, but you can add more by simply inserting the words into the file `words.txt`, which is located in the directory: `FinalProject/Hangman/`.
To add a word, all you need to do is open the file and write the word at the end of the file or next to any existing word, making sure to insert a space character first.

## Color Options
I have added the feature to change the foreground and background colors of the game. This is done within the program by selecting the options in the menu. It is important 
to note that the colors may differ slightly from user to user as they are affected by the system theme and the terminal theme. For example choosing the color green may not be 
exactly green but a lighter shade.another example is black which in some terminals appears as gray (as in mine with the specific theme I use).


## License
This project is licensed under the terms of the Custom License.

### License Terms
- You are free to use, modify, and distribute this code for personal and commercial purposes.
- **Copying, using, or submitting this code for academic purposes is strictly prohibited**
- [CS50 academic honesty](https://cs50.harvard.edu/x/2023/honesty/)







