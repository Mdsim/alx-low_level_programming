#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*The length of the password*/
#define PASSWORD_LENGTH 10

/*The characters that are allowed in the password*/
char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char *password = malloc(PASSWORD_LENGTH + 1);

/*Generates a random password*/
char *generate_password() {
  /*Seed the random number generator with the current time*/
  srand(time(NULL));

  /*Allocate memory for the password*/
  if (password == NULL) {
    return NULL;
  }

  /*Generate a random password character by character*/
  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = characters[rand() % sizeof(characters)];
  }

  /*Terminate the password with a null character*/
  password[PASSWORD_LENGTH] = '\0';

  /*Return the password*/
  return password;
}

int main()
{
  /*Generate a random password*/
  char *password = generate_password();

  /*Print the password to the console*/
  printf("Password: %s\n", password);

  /*Free the memory allocated for the password*/
  free(password);

  return 0;
}
