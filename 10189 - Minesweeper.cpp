//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042

#include<bits/stdc++.h>

using namespace std;

void solve_field(vector<string>& field, int num_rows, int num_cols) {
  for (int row = 0; row < num_rows; row++) {
    for (int col = 0; col < num_cols; col++) {
      if (field[row][col] != '*') {
        int count = 0;
        for (int i = -1; i <= 1; i++) {
          for (int j = -1; j <= 1; j++) {
            if (!(i == 0 && j == 0) && 0 <= row + i && row + i < num_rows && 0 <= col + j && col + j < num_cols) {
              if (field[row + i][col + j] == '*') {
                count++;
              }
            }
          }
        }
        field[row][col] = to_string(count)[0];
      }
    }
  }
}

int main() {
  int field_num = 1;
  while (true) {
    int num_rows, num_cols;
    cin >> num_rows >> num_cols;
    if (num_rows == 0 && num_cols == 0) {
      break;
    }

    vector<string> field;
    for (int i = 0; i < num_rows; i++) {
      string line;
      cin >> line;
      field.push_back(line);
    }

    cout << "Field #" << field_num << ":" << endl;
    solve_field(field, num_rows, num_cols);
    for (const string& row : field) {
      cout << row << endl;
    }
    cout << endl;
    field_num++;
  }

  return 0;
}