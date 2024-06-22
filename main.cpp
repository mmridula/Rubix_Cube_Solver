#include <bits/stdc++.h>

#include "Solver/DFSSolver.h"
#include "Solver/BFSSolver.h"

#include "PatternDatabases/CornerDBMaker.h"

using namespace std;

int main()
{

    RubiksCubeBitboard cube;
    auto shuffleMoves = cube.randomShuffleCube(13);
    cube.print();
    for (auto move : shuffleMoves)
        cout << cube.getMove(move) << " ";
    cout << "\n";

    // DFSSolver<RubiksCubeBitboard, HashBitboard> solver(cube);
    BFSSolver<RubiksCubeBitboard, HashBitboard> solver(cube);

    auto moves = solver.solve();

    solver.rubiksCube.print();
    for (auto move : moves)
        cout << cube.getMove(move) << " ";
    cout << "\n";

    return 0;
}