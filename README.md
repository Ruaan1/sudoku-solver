# Sudoku Solver (9x9)

A simple 9x9 Sudoku solver implemented in C++ using backtracking.

## How it works
- Uses recursive backtracking to fill empty cells (0 values)
- Validates candidate numbers using row, column, and 3x3 subgrid constraints

## How to run
Compile:
```bash
g++ -std=c++17 sudoku_solver.cpp -O2 -o sudoku
```
## Input Format

The solver expects **81 integers** representing a 9×9 Sudoku grid.

- Use numbers `1–9` for filled cells
- Use `0` for empty cells
- Values can be space-separated or line-separated

### Example Input (`input.txt`)
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
