
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//greets the user asks if they want to do some questions exits program if they say no 

char greet(char user_choice){


    printf("welcome to the math quiz: would you like to answer 5 questions: Y or N");
    scanf(" %c", &user_choice);

if (user_choice == 'Y'){
    printf("generating questions\n");
}   else if (user_choice =='N'){
    printf("Goodbye");
    
}
return user_choice;
}



// picks between add sub mult div
char operation_select(){

    char operations[] = {'+','-','*','/'};
    int index = rand() % 4;

    char operator = operations[index];

    return operator;
}
 

//makes questions  and scales difficulty. difficulty grows by making divisor smaller so numbers get bigger  
//loops 5 times in main to generate 5 questions 

int question_generate (int difficulty,char operator, int *score){

int a, b;

    a = rand() %  (difficulty * 10) + 1;
    b =  rand() %  (difficulty * 10) + 1;

    int response ;
    int answer ;


if (operator == '+'){

    answer = a + b ;
    printf("answer '%d' + '%d' : " , a , b);

} else if (operator == '-'){

    answer = a - b ;
    printf("answer '%d' - '%d' : " , a , b);
    
} else if (operator == '*'){
  
   answer = a * b ;
   printf("answer '%d' * '%d' : " , a , b);

}  else {

    answer = a / b ;
    printf("answer '%d' / '%d' (integer division): " , a , b);
    
}

    scanf("%d", &response);

    if(response != answer){
    printf("incorrect answer, answer is: '%d\n' ", answer);
    difficulty = difficulty - 1;


    } else {
    printf("congrats!\n "); 
    difficulty = difficulty + 1 ;
    (*score)++;
}

if (difficulty < 1)
    difficulty = 1;

return(difficulty);

}

//calculates percentage of questions correct prints user score returns a grade letter
float percentage_calc(int score){

float percentage = ((float)score / 5) * 100;
char grade; 



if (percentage >= 85){
    grade = 'H';

} else if (percentage >= 75){
    grade = 'D';
} else if(percentage >= 65) {
    grade = 'C';
}else  if ( percentage >= 50 ){
grade = 'P';
}else {
    grade = 'F';
}



printf("you got %.2f%% percent on the quiz\n ", percentage);

if (grade == 'H'){
    printf("your grade is HD\n");
}else{
printf("your grade is  %c\n", grade);
}
return percentage;
}




// calls other functions

int main(){

    srand(time(NULL));

int score = 0; 
int difficulty = 1;     
char operator;
char user_choice = 'Y';
 int i;


do{
user_choice =greet(user_choice);

for (i = 0;i < 5; i++){
    operator = operation_select();
    difficulty = question_generate(difficulty, operator,&score);
    
}

percentage_calc(score);
printf("do you want to do another 5 questions: Y or N");
scanf(" %c", &user_choice);

int score = 0;

} while(user_choice == 'Y');


return (0);

}


