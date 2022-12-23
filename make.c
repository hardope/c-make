# include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
     char command[100];

     sprintf(command, "gcc %s.c -o %s", argv[1], argv[1]);
}