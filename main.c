#include <stdio.h>

int strLength(char* input){
  int counter;
  
  for (counter = 0; input[counter] != '\0'; counter++);

  return counter - 1;
}

int compare(char* input, char* output){
  int counter = 0;

  for (int i = 0; i < strLength(input); i++){
    if ((int)input[counter] == (int)output[counter]){
      counter++;
    } else {
      break;
    }
  }

  if (counter == strLength(input)){
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  while (1) {
    char usr_input[1024];

    printf("\n>>");

    scanf("%s", usr_input);

    int joe = compare(usr_input, "joe");
    int bob = compare(usr_input, "bob");

    if (joe) {
      printf("1");
    } else if (bob) {
      printf("0");
    } else {
      printf("invalid input");
    }
  }
}
