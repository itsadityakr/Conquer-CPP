/*__________________________PROBLEM__________________________*/
/*
#### 1. Shortest Path

Suppose you want to go a location, located at (X,Y starting from origin 0,0).
Your friend tells you a long way by telling the steps you should walk in each distance(N, W, E or S). Find the shortest path.

sample input: NNNEEWS

sample output: NNE / ENN
*/

/*__________________________PROGRAM__________________________*/
#include <iostream>
#include <string>
using namespace std;

string shortestPath(string steps) {
    int x = 0, y = 0;
    for (char step : steps) {
        if (step == 'N')
            y++;
        else if (step == 'S')
            y--;
        else if (step == 'E')
            x++;
        else if (step == 'W')
            x--;
    }

    string path = "";
    for (int i = 0; i < abs(x); i++) {
        if (x > 0)
            path += 'E';
        else
            path += 'W';
    }
    for (int i = 0; i < abs(y); i++) {
        if (y > 0)
            path += 'N';
        else
            path += 'S';
    }

    return path;
}

int main() {
    string steps;
    cout << "Enter steps: ";
    cin >> steps;

    string shortest = shortestPath(steps);
    cout << "Shortest path: " << shortest << endl;

    return 0;
}
