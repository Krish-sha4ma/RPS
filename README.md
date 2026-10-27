# Rock Paper Scissors 🎮

A simple command-line Rock Paper Scissors game built using C. The player competes against the computer by choosing Rock, Paper, or Scissors.

## Features

- Play Rock Paper Scissors in the terminal.
- Computer generates a random choice.
- Detects wins, losses, and draws.
- Supports multiple rounds.
- Handles invalid player inputs.

## Technologies Used

- **Language:** C
- **Libraries:** `stdio.h`, `stdlib.h`, `time.h`

## How to Play

1. Enter the number of rounds you want to play.
2. Choose your move by entering the corresponding number:

   | Choice | Move |
   |---|---|
   | 1 | Rock |
   | 2 | Paper |
   | 3 | Scissors |

3. The computer selects a move.
4. The game displays the result of each round.

## How to Run

**1. Compile the program**

```bash
gcc main.c -o rps
```

**2. Run the executable**

On Linux:

```bash
./rps
```

On Windows:

```bash
rps.exe
```

## Rules

- Rock beats Scissors.
- Scissors beats Paper.
- Paper beats Rock.
- Matching moves result in a draw.

## Future Improvements

- Generate a new computer choice in every round.
- Add a scoreboard to track total wins and losses.
- Display the computer's move by name instead of a number.
- Fix round counting and improve input validation.

## Author

Krish

---

*Built as a beginner-friendly C programming project to practise loops, conditional statements, random number generation, and standard library functions.*