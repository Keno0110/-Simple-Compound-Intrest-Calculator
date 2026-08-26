# Simple Compound Interest Calculator

A lightweight terminal application written in C that calculates how money grows over time. It computes the total accrued balance and the total interest earned based on user-defined inputs.

## Features
* Computes compound interest based on custom principal, rate, and time.
* Handles monthly, quarterly, or annual compounding frequencies.
* Clear, readable breakdown of total savings vs. interest earned.

## How to Run
1. Compile the code using any standard C compiler (like GCC):
   ```bash
   gcc main.c -o interest_calc -lm
   ```
   *(Note: The `-lm` flag links the math library for the power function).*

2. Run the executable:
   ```bash
   ./interest_calc
   ```
