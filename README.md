# C Math Quiz Game

This portfolio is a portfolio-focused C application designed to demonstrate core programming skills and understanding of data flow in C programming

---

## Features

- Random arithmetic questions: addition, subtraction, multiplication, division
- 5-question rounds with dynamic difficulty scaling
- Tracks user score and calculates percentage
- Assigns grade based on percentage (HD / D / C / P / F)
- Replayable rounds for continuous practice
- User-friendly terminal interface with immediate feedback

---
## Skills Demonstrated

C Programming: variables, data types, operators, type casting

Control Flow: loops (for, do-while), conditional logic (if, else if, else)

Functions: modular design, parameter passing, return values

Pointers: updating score inside functions

Randomisation: dynamic question generation

User Interaction: scanf, printf, formatted output

Problem Solving: dynamic difficulty scaling, grade calculation

## Future Improvements 


-Floating-point Division Questions
 Currently, the division uses integer division. Adding floating-point division would allow decimal answers and increase the complexity of the quiz.

-Per-Operator Performance Tracking
 Track how the user performs on addition, subtraction, multiplication, and division separately.

-High Score / Session Tracking
 Save the user’s best score in the current session or to a file.

-Timed Questions
Limit the time a user has to answer each question.

-Text-Based Menu
 Implement a text-based menu to start a quiz, view stats, or exit.



## How to Run

1. Clone the repository:
```bash
git clone https://github.com/yourusername/c-math-quiz.git
```
2. Compile the Code
```bash
gcc quiz.c -o quiz
```
3. Run the program
   ```bash
   ./quiz
     ```
