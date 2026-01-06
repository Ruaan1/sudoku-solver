# Sudoku Solver (9x9)

A simple 9x9 Sudoku solver implemented in C++ using backtracking.

## How it works
- Uses recursive backtracking to fill empty cells (0 values)
- Validates candidate numbers using row, column, and 3x3 subgrid constraints

## How to run
Compile:
```bash
g++ -std=c++17 sudoku_solver.cpp -O2 -o sudoku
