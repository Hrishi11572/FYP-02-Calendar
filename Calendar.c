// Project : Making a Gregorian - Calendar using Zeller's Congruence Rule //
#include<stdio.h>
#include<stdlib.h>
#define ANSI_COLOR_BRIGHT_BLUE "\x1b[94m"
#define ANSI_COLOR_BRIGHT_RED "\x1b[91m"
#define ANSI_COLOR_BRIGHT_GREEN "\x1b[92m"
#define ANSI_COLOR_BRIGHT_MAGENTA "\x1b[95m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_YELLOW "\033[1;33m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_STYLE_BOLD "\x1b[1m"

int days_of_months[] = { 0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31} ;

char * months[] = { 
       " " , 
    "January" ,
    "Feburary",
      "March" , 
      "April" ,
       "May"  , 
       "June" ,
       "July" , 
       "August" , 
    "September" ,
      "October" ,
      "November",
      "December"
      } ;

void check_leap_year( int year ) 
{
    if(year% 4 == 0 && year%100 != 0 || year%400 == 0 )
	{
		days_of_months[2] = 29;
        // The Condition for leap Year //
		
	}
	else
	{
		days_of_months[2] = 28;
		// The Condition for non leap Year //
	}  
}

int day_number_zeller(int year , int m )
{    
    if( m <3 )
    {
        m = m + 12 ;
        year = year - 1 ;
    }
    // m stands for month //
    int h  ;
    int q  = 1 ;  //day or say date like 1  , 2 , 3  .... 30/31 //  
    int k = year%100 ;
    int j = year/100 ;

     h = q + (13 * (m + 1))/ 5 + k + k / 4 + j / 4 + 5 * j;
     h = h % 7;

     // result of the method is a number between 0 and 6 </both inclusively > //
     /* 0 == saturday 
        1 == sunday
        2 == monday
        3 == tuesday
        4 == wednesday
        5 == Thursday
        6 == friday 
     */
     return h ;
}

void calendar( int year  ,  int h , int m )
{    
     int positioner = 0  ;

       // Year is like 2001 //
       // h is the day_code //
         /* 0 == saturday 
        1 == sunday
        2 == monday
        3 == tuesday
        4 == wednesday
        5 == Thursday
        6 == friday 
         */

        printf(ANSI_STYLE_BOLD) ;
        printf(ANSI_COLOR_BRIGHT_BLUE) ;
        printf(" ==================================================\n") ;
        printf("                    %s , %d                       \n " , months[m] , year ) ;
        printf("==================================================\n") ;
        printf(ANSI_COLOR_BRIGHT_MAGENTA) ;
        printf("Sun     Mon     Tue     Wed     Thu     Fri     Sat  \n") ;
        printf(ANSI_COLOR_RESET) ;

        if( h == 0)
        {
        for( int i = 1 ; i<7 ; i++)
        {   
            positioner++ ;
            printf("        ") ;
        }
        }
        for( int i = 1 ; i<h && h!=0 ; i++)
        {   
            positioner++ ;
            printf("        ") ;
        }

    for( int i = 1 ; i<=days_of_months[m] ; i++)
    {  
        positioner++ ; // for Proper Spacing of blank spaces //
        if( positioner%7 == 1 ){
        printf(ANSI_STYLE_BOLD);    
        printf(ANSI_COLOR_BRIGHT_RED); // Set console color to bright red
        }

        if( i<10)  // For proper spacing of digits //
        printf("%d       " , i) ;
        else if( i>=10)
        printf("%d      " , i) ;
        if( positioner%7 == 0 )
        printf("\n") ;
        printf(ANSI_COLOR_RESET); // Reset console color and style//

    }
}


void next_prev(int year, int m) {
    char cha;
    int h_n, h_p;
 
    printf("\033[1;33m"); // Set console color to bright yellow
    printf("\nPress 'n' to go to next month\n");
    printf("Press 'p' to go to prev month\n");
    printf("Or 'e' to exit from the program\n") ;
    printf("\033[0m"); // Reset console color

    // Consume any extra characters, including newline character, from input stream
    int c;
    while ((c = getchar()) != '\n' && c != EOF) 
        ;
    cha = getchar(); // Read a character from the input

    if (cha == 'n') {

        if(m == 12){
            h_n = day_number_zeller( year+1 , 1) ;
            calendar( year+1 , h_n , 1 ) ;
        } else {
        h_n = day_number_zeller(year, m+1);
        calendar(year, h_n, m+1);
        }
    } 
    else if (cha == 'p') {

        if(m == 1){
            h_p = day_number_zeller( year-1 , 12) ;
            calendar( year-1 , h_p , 12 ) ;
        } else {
        h_p = day_number_zeller(year, m-1);
        calendar(year, h_p, m-1);
        }
    }
    else if( cha == 'e') return ;
    
}

int main()
{  
    int year , month ;
    printf("Input Year (in numbers) : ") ;
       scanf("%d" , &year ) ;
        printf("Input Month (in numbers): ") ;
          scanf("%d" , &month) ;

        //  printf("%d\n" ,day_number_zeller( year , month ) ) ;
        // the above commented statement is used to check for any disperancy //

         printf("\n") ;
         check_leap_year( year) ;
         calendar( year , day_number_zeller( year , month ) , month ) ;
         printf("\n") ;

    next_prev( year , month ) ;   

   return 0 ;
} 