/*
Reference:
Null & Lobur page 345

Purpose:
To demonstrate how cache hit rates affect Average Access Time (AAT)
using a simplified two-level slice of the memory hierarchy pyramid.

AAT = (Hit Rate x Cache Time) + (Miss Rate x Memory Time)

This program numerically models how a fast, small cache layer reduces
average latency when paired with slower main memory.

Context: Figure 6.1 - The Memory Hierarchy Pyramid

CPU Registers           ->          ~0.3 ns
L1 / L2 Cache (SRAM)    ->          ~3 - 8 ns
Main Memory (DRAM)      ->          ~30 - 100 ns
Solid-State / Disk      ->          ~0.1 - 15 ns
Archival Storage        ->          seconds - minutes

*"We classify memory based on its "distance" from the processor, with 
distance meaured by the number of machine cycles required for access. 
The closer memory is to the processor, the faster it should be."

Smaller, Faster, More Expensive per bit
Larger, Slower, Cheaper per bit

The constants below (5 ns vs 100 ns) corresponds roughly to the
Cache <> Main Memory boundary within this hiearchy.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    const double cacheHitRate = 0.9;
    const int cacheAccessTime = 5;
    const int memoryAccessTime = 100;

    double avgAccessTime = (cacheHitRate * cacheAccessTime) + 
    ((1 - cacheHitRate) * memoryAccessTime);


    cout << "== Memory Hierarchy Simulation ==n";
    cout << fixed << setprecision(1);
    cout << "Cache Hit Rate: " << cacheHitRate * 100 << "%\n";
    cout << "Cache Access Time: " << cacheAccessTime << " ns\n";
    cout << "Memory Access Time: " << memoryAccessTime << " ns\n";
    cout << "----------------------------------\n";
    cout << "Average Memory Access Time: " << avgAccessTime << " ns\n";

    return 0;
}