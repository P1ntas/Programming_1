#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    bool playerAlive = true;
    bool mazeOpened = false;
    
    string playerMove;

    while (playerAlive) {
        int lineCount = 0;
        if (mazeOpened == false) {
            cout << "Choose the maze's number: "; cin >> mazeNum;
        }

        string line;
        ifstream myfile("MAZE_" + mazeNum + ".txt");
        if (myfile.is_open())
        {

            while (myfile.good())
            {
                getline(myfile, line);
                if (lineCount > 0) {
                    cout << line << endl;
                }
                lineCount++;

            }
            myfile.close();
            mazeOpened = true;
        }


        cout << "Direction to move: "; cin >> playerMove;



    }

    return 0;
}

void MazeOpened() {
    string mazeNum;
    string playerMove;
    string line;
    string mazeFile;
    bool mazeOpened = false;

    ifstream mazeMap;

    while (mazeOpened == false) {
        cout << "Choose the maze's number (for numbers until 10 add a '0' before): ";
        do {
            // This loop clears the input stream and checks if the input is valid
            cin.clear();
            cin.ignore(INT_MAX, "\n");
            cin >> mazeNum;

            if (!cin.good()) {

                cout << "That maze doesn't exist, would you mind trying another one?";

            }
        } while (!cin.good());

        mazeFile = "MAZE_" + mazeNum + ".txt";

        mazeMap.open(mazeFile); // Used to open the maze chosen by the player

        if (mazeMap.is_open()) {
            string playerPos;
            char x;
            int mazeWidth, mazeHeight;
            int robotsNum;

            mazeMap >> mazeHeight >> x >> mazeWidth;

            vector<vector<char>> maze(mazeHeight, vector<char>(mazeWidth));
            mazeMap >> noskipws;

            for (int i = 0; i < mazeHeight; i++) {
                getline(mazeMap, line);
                for (int j = 0; j < mazeWidth; j++) {

                }
            }
        }
    }

}