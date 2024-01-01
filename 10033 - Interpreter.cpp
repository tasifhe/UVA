//*Solved by Tasif Hossain Emon
//*Student of SMUCT //BATCH 29th //ID:221071042
#include<bits/stdc++.h>

using namespace std;

int main() {
  // Read number of test cases
  int num_cases;
  cin >> num_cases;
  
  // Process test cases
  while (num_cases--) {
    // Read program
    vector<int> program;
    int instruction;
    while (cin >> instruction) {
      program.push_back(instruction);
      if (instruction == 100) {
        break;
      }
    }
    
    // Initialize registers and counter
    vector<int> registers(10, 0);
    int counter = 0;
    
    // Execute instructions
    for (int pc = 0; program[pc] != 100; ) {
      // Fetch instruction
      int instruction = program[pc];
      counter++;
      
      // Decode instruction
      int opcode = instruction / 100;
      int d = (instruction / 10) % 10;
      int s = instruction % 10;
      
      // Execute instruction
      switch (opcode) {
        case 2:
          // Set register d to n
          registers[d] = s;
          pc++;
          break;
        case 3:
          // Add n to register d
          registers[d] = (registers[d] + s) % 1000;
          pc++;
          break;
        case 4:
          // Multiply register d by n
          registers[d] = (registers[d] * s) % 1000;
          pc++;
          break;
        case 5:
          // Set register d to the value of register s
          registers[d] = registers[s];
          pc++;
          break;
        case 6:
          // Add the value of register s to register d
          registers[d] = (registers[d] + registers[s]) % 1000;
          pc++;
          break;
        case 7:
          // Multiply register d by the value of register s
          registers[d] = (registers[d] * registers[s]) % 1000;
          pc++;
          break;
        case 8:
          // Set register d to the value in RAM whose address is in register a
          registers[d] = program[registers[s]];
          pc++;
          break;
        case 9:
          // Set the value in RAM whose address is in register a to the value of register s
          program[registers[d]] = registers[s];
          pc++;
          break;
        case 0:
          // Goto the location in register d unless register s contains 0
          if (registers[s] != 0) {
            pc = registers[d];
          } else {
            pc++;
          }
          break;
      }
    }
    
    // Print the number of instructions executed
    cout << counter << endl;
    
    // Print blank line between test cases
    if (num_cases > 0) {
      cout << endl;
    }
  }
  
  return 0;
}
