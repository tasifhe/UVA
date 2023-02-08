//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042
#include <iostream>
#include <sstream>
#include <queue>
#include <utility>

using namespace std;

const int MAX_SIZE = 250;

// 2D array to store the colors of each pixel
char table[MAX_SIZE][MAX_SIZE];

// Dimensions of the table
int m, n;

// Initializes a new table of size m x n
void createNewTable(int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            table[i][j] = 'O';
        }
    }
}

// Clears the table by setting all elements to 'O'
void clearTable() {
    createNewTable(m, n);
}

// Colors the pixel at position (x, y) with color c
void colorPixel(int x, int y, char c) {
    table[x][y] = c;
}

// Draws a vertical segment of color c in column x between rows y1 and y2, inclusive
void drawVerticalSegment(int x, int y1, int y2, char c) {
    for (int y = y1; y <= y2; y++) {
        table[x][y] = c;
    }
}

// Draws a horizontal segment of color c in row y between columns x1 and x2, inclusive
void drawHorizontalSegment(int x1, int x2, int y, char c) {
    for (int x = x1; x <= x2; x++) {
        table[x][y] = c;
    }
}

// Draws a filled rectangle of color c with upper left corner at (x1, y1) and lower right corner at (x2, y2)
void drawRectangle(int x1, int y1, int x2, int y2, char c) {
    for (int x = x1; x <= x2; x++) {
        for (int y = y1; y <= y2; y++) {
            table[x][y] = c;
        }
    }
}

// Fills the region with color c starting at pixel (x, y)
void fillRegion(int x, int y, char c) {
    // Initialize the queue with the starting pixel
    queue<pair<int, int>> q;
    q.emplace(x, y);
    // Initialize the color of the starting pixel
    char oldColor = table[x][y];

    while (!q.empty()) {
        // Get the next pixel from the queue
        int x, y;
        tie(x, y) = q.front();
        q.pop();

        // Color the pixel with the new color
        table[x][y] = c;

        // Check the pixels to the left, right, top, and bottom of the current pixel
        for (int dx : {-1, 1}) {
            int x2 = x + dx;
            if (x2 >= 0 && x2 < m && table[x2][y] == oldColor) {
                q.emplace(x2,y);
            }
        }
        for (int dy : {-1, 1}) {
            int y2 = y + dy;
            if (y2 >= 0 && y2 < n && table[x][y2] == oldColor) {
                q.emplace(x, y2);
            }
        }
    }
}

// Outputs the file name and the current table
void saveImage(string name) {
    cout << name << endl;
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            cout << table[x][y];
        }
        cout << endl;
    }
}

int main() {
    string line;
    while (getline(cin, line)) {
        // Split the line by space
        istringstream iss(line);
        char command;
        iss >> command;
        switch (command) {
            case 'I': {
                iss >> m >> n;
                createNewTable(m, n);
                break;
            }
            case 'C': {
                clearTable();
                break;
            }
            case 'L': {
                int x, y;
                char c;
                iss >> x >> y >> c;
                colorPixel(x - 1, y - 1, c);
                break;
            }
            case 'V': {
                int x, y1, y2;
                char c;
                iss >> x >> y1 >> y2 >> c;
                drawVerticalSegment(x - 1, y1 - 1, y2 - 1, c);
                break;
            }
            case 'H': {
                int x1, x2, y;
                char c;
                iss >> x1 >> x2 >> y >> c;
                drawHorizontalSegment(x1 - 1, x2 - 1, y - 1, c);
                break;
            }
            case 'K': {
                int x1, y1, x2, y2;
                char c;
                iss >> x1 >> y1 >> x2 >> y2 >> c;
                drawRectangle(x1 - 1, y1 - 1, x2 - 1, y2 - 1, c);
                break;
            }
            case 'F': {
                int x, y;
                char c;
                iss >> x >> y >> c;
                fillRegion(x - 1, y - 1, c);
                break;
            }
            case 'S': {
                string name;
                iss >> name;
                saveImage(name);
                break;
            }
            case 'X': {
                return 0;
            }
        }
    }
    return 0
}
