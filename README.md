# FYP-02-Calendar

Calendar Project in C

This project is a command-line based Calendar application built using the C programming language. It takes a specific year and month as input from the user and displays a monthly calendar. It also allows users to navigate forward and backward through months, providing a simple but interactive experience.
Features

Display a calendar for a specific month and year.
Navigation options to view previous or next months.
Exit functionality to end the program.
Utilizes Zeller's Congruence algorithm to determine the starting day of the week.

Requirements

    C Compiler: Ensure you have a C compiler installed (e.g., GCC).

Getting Started: 

1. Compilation

  To compile the project, use the following command:

<I>gcc calendar.c -o calendar</I>

2. Running the Program

  To run the program, execute:

<I>./calendar</I>

Usage

    Enter Year and Month: Upon starting, the program prompts the user to enter the year and month they want to view.
    View Calendar: The program displays a neatly formatted calendar for the entered month and year.
    Navigation: After viewing a calendar, the program prompts the user to:
        Press 'n' to navigate to the next month.
        Press 'p' to navigate to the previous month.
        Press 'e' to exit the program.

Project Structure

    calendar.c: Main C file containing functions for date calculation, navigation, and user input handling.

Future Improvements

    Support for viewing the full calendar year.
    User interface enhancements for improved usability.
    Add support for highlighting holidays or important dates.



