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


#Example - 

Enter Year: 2023
Enter Month: 5

    May 2023
Su Mo Tu We Th Fr Sa
   1  2  3  4  5  6
  7  8  9 10 11 12 13
 14 15 16 17 18 19 20
 21 22 23 24 25 26 27
 28 29 30 31

Choose an option:
n - Next month
p - Previous month
e - Exit


Algorithm: Zeller's Congruence

Zeller's Congruence is a formula to calculate the day of the week for any given date. In this project, we use Zeller's Congruence to determine the starting day of each month in the calendar, which helps in formatting the calendar correctly.
Zeller's Congruence Formula

Given a date (day, month, year), the day of the week can be calculated as: h=(q+⌊13(m+1)5⌋+K+⌊K4⌋+⌊J4⌋−2J)mod  7h=(q+⌊513(m+1)​⌋+K+⌊4K​⌋+⌊4J​⌋−2J)mod7 where:

    hh: Day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, …)
    qq: Day of the month
    mm: Month (3 = March, 4 = April, …, 12 = December, 1 = January, 2 = February)
    KK: Year of the century (year % 100)
    JJ: Zero-based century (year / 100)

Project Structure

    calendar.c: Main C file containing functions for date calculation, navigation, and user input handling.

Future Improvements

    Support for viewing the full calendar year.
    User interface enhancements for improved usability.
    Add support for highlighting holidays or important dates.



