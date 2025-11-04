#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
using namespace std;


//Simulates how a simple 5-stage CPU instruction pipeline operates.
//Shows instruction overlap (pipelining), cycle timing, and stage transitions
//Concepts: instruction overlap, hazards, and cycle timing

int main() {
    const int stages = 5;
    const int sequences = 6;

    //Stage names were expanded for readability

    const string stageNames[stages] = {
        "Fetch Instructions", //IF
        "Decode Instruction", //ID
        "Execute Operations", //EX
        "Memory Access",      //MEM
        "Write-back result"   //WB
    };

    cout << "This is a simulation of a CPU instruction pipeline\n";
    cout << "------------------------------------------------\n\n";

    //This outer loop represents the clock cycle of the CPU.
    for (int cycle = 0; cycle < stages + sequences - 1; ++cycle) {
        cout << "Cycle " << setw(2) << cycle + 1 << " | ";
        //This inner loop tracks each sequence's position within the pipeline
        for (int inst = 0; inst < sequences; ++inst) {
            int stage = cycle - inst + 1;
            //This only prints the stage currently active in the cycle
            if (stage > 0 && stage <= stages)
                cout << "I" << inst + 1 << "." << stageNames[stage-1] << "  ";
                else
                    cout << "      "; //This empty slot is for bubble or idle cycles
        }
        cout << "\n";
        this_thread::sleep_for(chrono::milliseconds(250)); //we purposely slowed this down so that it has readability
    }
    //CPU Pipeline Simulation (Fetch->Decode->Execute->Memory->Write Back
    //A way to visualize instruction overlap across cycles

    cout << "\nThis simulation of a pipeline is now complete\n";
    cout << "(Fetch -> Decode -> Execute -> Memory -> Write-Back)\n";
    cout << "This code demonstrates how instructions overlap across cycles\n";
    return 0;
}
