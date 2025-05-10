#include <stdio.h>

int main(){
  //making quiz system about general knowlenge for user to choice 1 answer
  //from multiple choice

  char  name[30];
  char  answer;
  int score = 0;
  printf("WELCOME TO QUIZ SYSTEM\n");
  printf("Please Input Your Name\n"); //let user input their name
  scanf(" %s", &name);
  printf("The Quiz Start\n");

  //question 1
  printf("1. What is the capital of Canada?\n A) Toronto\nB) Vancouver\nC) Ottawa\nD) Montreal\n");
  scanf(" %c", &answer);


  //question 2
  printf("2. Which planet is known as the Red Planet?\nA) Jupiter\nB) Venus\nC) Saturn\nD) Mars\n");
scanf(" %c", &answer);

  //question 3
  printf("3. Who wrote the play Romeo and Juliet?\nA) William Shakespeare\nB) Charles Dickens\nC) Jane Austen\nD) Mark Twain\n");
scanf(" %c", &answer);


  //question 4
  printf("4. What is the chemical symbol for gold?\nA) Ag\nB) Au\nC) Pb\nD) Go\n");
  scanf(" %c", &answer);


  //question 5
  printf("5. In computing, what does CPU stand for?\nA) Central Processing Unit\nB) Computer Power Unit\nC) Central Performance Utility\nD) Core Processing Unit  give me the answert\n");
  scanf(" %c", &answer);


  if(answer == 'C' || answer == 'c' )score++;
  if(answer == 'D' || answer == 'd') score++;
  if(answer == 'A' || answer == 'a') score++;
  if(answer == 'B' || answer == 'b') score++;
  if(answer == 'A' || answer == 'a') score++;


  //output the Result
  printf("\n%s, your score is %d out of 5.\n", name, score);
  if(score == 5){
    printf("Excellent\n");
  }
  else if(score == 3){
    printf("very Good\n");
  }
  else{
    printf("please try again.");
  }
    return 0;
}
