#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
using namespace std;


//Simulate a simple 5-stage instruction pipeline
//Stages: IF, ID, EX, MEM, WB
//Concepts: instruciton overlap, hazards, and cycle timing

int main() {
    const int stage = 5;
    const int instuctions = 6;
    const string stageNames[stages] = {"IF", "ID", "EX", "MEM", "WB"};

    cout << "This is a simulation of a CPU instruction pipeline\n";
    cout << "------------------------------------------------\n\n";

    for (int cycle = 0; cycle < stage + instructions -1; ++cycle) {
        cout << "Cycle " << setw(2) << cycle + 1 << " | ";
        for (int inst = 0; inst < instructions; ++inst) {
            inst stage = cycle - inst + 1;
            if (stage > 0 && stage <= stages)
                cout << "I" << inst + 1 << "." << stageNames[stage-1] << "  ";
                else
                    cout << "      ";
        }
        cout << "\n";
        this_thread::sleep_for(chrono::milliseconds(250)); //we purposely slowed this down so that it has readability
    }
    cout << "\nThis simulation of a pipeline is now complete\n";
    return 0;
}