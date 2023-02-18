# include <stdio.h>
# include <stdlib.h>
# include <string.h>


/**
 * main - The main function
 * Description - This program is to make compilation of c code easier by reducing the compiler commands
 * @argc: Number of command line arguments
 * @argv: List of command Line arguments
 * 
 * Return 0: success
*/
int main(int argc, char *argv[])
{
     /* Initialize Variable to store derived command */
     char command[100];

     /* If command line arguments is 3 */
     if (argc == 3) {

          /* if correct option "-f" is passed in to compile folder */
          if (strcmp(argv[1], "-f") == 0){

               /* Generate and store command*/
               sprintf(command, "gcc *.c -o %s -Wall -Werror -pedantic -Wextra -std=gnu89", argv[2]);

               /* run command */
               system(command);
          }

          else {

               printf("*** Invalid Command ***\n");

          }
     }

     /* If command line arguments is 2 */
     else if (argc == 2) {

          /* Generate and store command*/
          sprintf(command, "gcc %s.c -o %s -Wall -Werror -pedantic -Wextra -std=gnu89", argv[1], argv[1]);

          /* run command */
          system(command);

     }

     else {

          printf("*** Invalid Command Line Arguments ***\n");

     }

     return (0);
}