# ASCII Timer CLI
```latex
    ___   _____ ______________   ____________  _____________
   /   | / ___// ____/  _/  _/  /_  __/  _/  |/  / ____/ __ \
  / /| | \__ \/ /    / / / /     / /  / // /|_/ / __/ / /_/ /
 / ___ |___/ / /____/ /_/ /     / / _/ // /  / / /___/ _, _/
/_/  |_/____/\____/___/___/    /_/ /___/_/  /_/_____/_/ |_|
```
This is a simple command-line interface (CLI) timer application written in C. The program allows the user to set a countdown timer and display chosen ASCII art while the timer counts down.

## Features
- Set a countdown timer for any duration in seconds.
- Display ASCII art from a specified file during the countdown.
- Clear and concise time display that updates every second.

## Prerequisites
- A C compiler (e.g. `gcc`)
- A linux machine to run the program
    - I personally do not recommend windows for C like language development for various reasons.

## Getting Started
1. Clone the repositories
```bash
git clone https://github.com/MingFei2001/ascii-timer.git
cd ascii-timer
```
2. Compile the program
```bash
gcc -o timer timer.c
```
3. run the program
```bash
./timer
```

## Usage
Upon running the program, you will be prompted to enter the duration of the timer in seconds and the file path to the ASCII art. For example:
```txt
How long do you want to count down?
time: 10
Enter the ASCII art file path: ascii.txt
```
The program will display the ASCII art and start the countdown timer, updating the time left every second until the timer reaches zero and displays "Time's up!".

## ASCII Example File
Create a file named ascii.txt with the following content as an example:
```txt
______________
|    TIMER    |
|_____________|
```

## LICENSE
This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgement
Thanks to the developers of the standard C libraries and POSIX for their powerful APIs.

