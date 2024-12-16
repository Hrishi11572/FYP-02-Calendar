# FYP-02-Calendar

This project is a command-line-based calendar application implemented in C. It allows users to input a specific year and month, then displays the corresponding calendar for that month in a clean, easy-to-read format. In addition to viewing a specific month's calendar, the application also offers interactive navigation, enabling users to seamlessly move forward and backward through months. This feature makes it possible to explore different months and years, providing a dynamic and engaging experience. The project is designed to be simple yet functional, demonstrating key concepts of C programming such as date manipulation, loops, and user input handling.


### Features

    1. Display a calendar for a specific month and year.
    2. Navigation options to view previous or next months.
    3. Exit functionality to end the program.
    4. Utilizes Zeller's Congruence algorithm to determine the starting day of the week.

### Requirements

    C Compiler: Ensure you have a C compiler installed (e.g., GCC). 

### Getting Started: 

1. Compilation

To compile the project, use the following command:

    gcc calendar.c -o calendar


2. Running the Program

  To run the program, execute:

    ./calendar


### Usage

1. Enter Year and Month: Upon starting, the program prompts the user to enter the year and month they want to view.
2. View Calendar: The program displays a neatly formatted calendar for the entered month and year.
3. Navigation: After viewing a calendar, the program prompts the user to:
   
        Press 'n' to navigate to the next month.
        Press 'p' to navigate to the previous month.
        Press 'e' to exit the program.

### Project Structure

    calendar.c: Main C file containing functions for date calculation, navigation, and user input handling.

### Future Improvements

    Support for viewing the full calendar year.
    User interface enhancements for improved usability.
    Add support for highlighting holidays or important dates.

### Example : 

<img width="1440" alt="Screenshot 2024-12-16 at 11 11 06 PM" src="https://github.com/user-attachments/assets/594bb332-dec5-453e-af63-545ab1035ab3" />


PS : And the output is correct as I know I was born on Sunday ;)

