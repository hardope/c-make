# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(int argc, char *argv[])
{
     char command[100];

     if (argc == 3) {

          if (strcmp(argv[1], "-f") == 0){

               sprintf(command, "gcc *.c -o %s -Wall -Werror -pedantic -Wextra -std=gnu89", argv[2]);

               system(command);
          }

          else {

               printf("*** Invalid Command ***\n");

          }
     }

     else if (argc == 2) {

          sprintf(command, "gcc %s.c -o %s -Wall -Werror -pedantic -Wextra -std=gnu89", argv[1], argv[1]);

          system(command);

     }

     else {

          printf("*** Invalid Command Line Arguments ***\n");

     }

     return (0);
}