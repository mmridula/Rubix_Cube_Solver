# Rubiks Cube Solver 

A project to solve the Rubik's Cube using Depth-First Search (DFS) and Breadth-First Search (BFS) algorithms. The cube is represented in three formats: 1D array, 3D array, and bitboard, each solvable using either DFS or BFS.

- Features
    - Multiple Representations: 1D array, 3D array, and bitboard.
- Algorithms: DFS and BFS for solving the cube.
- Efficient Storage: Bitboard representation for fast operations.
- Prerequisites
    - C++ Compiler (C++11 or higher)
    - CMake
    - Git

## Steps to run

- compile using `cmake -S . -B build/`
- build using `cd build && make all`
- run using `./rubiks_cube_solver`