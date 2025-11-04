Week 2 – Memory Hierarchy & Average Access Time (AAT)

Reference
Null & Lobur, *Essentials of Computer Organization & Architecture*, 4th Edition  
Chapter 6 Figure 6.1 – The Memory Hierarchy Pyramid  


Concept
Average Access Time (AAT) represents the effective latency a processor experiences when memory requests are served partly by fast cache and partly by slower main memory.

\[
AAT = (Hit Rate × Cache Access Time) + (Miss Rate × Memory Access Time)
\]

Simulation Summary
Program file: `memory_demo.cpp`  
Constants:
| Parameter | Value | Meaning |
|------------|-------|----------|
| Cache Hit Rate | 0.9 (90 %) | % of requests served from cache |
| Cache Access Time | 5 ns | Typical L1/L2 SRAM speed |
| Memory Access Time | 100 ns | Typical DRAM speed |

Output Example
== Memory Hierarchy Simulation ==
Cache Hit Rate: 90.0%
Cache Access Time: 5.0 ns
Memory Access Time: 100.0 ns

Average Memory Access Time: 14.5 ns

Interpretation
- 90 % of requests complete in 5 ns; 10 % fall through to 100 ns.  
- Effective average ≈ 14.5 ns → **cache cuts latency by ~85 %.**  
- The closer memory is to the CPU, the more valuable each nanosecond becomes.

Context – Figure 6.1 Memory Pyramid
CPU Registers → ~0.3 ns
L1 / L2 Cache (SRAM) → ~3 – 8 ns
Main Memory (DRAM) → ~30 – 100 ns
Solid-State / Disk → ~0.1 – 15 ms
Archival Storage → seconds – minutes
↑ Smaller, Faster, More Expensive per bit
↓ Larger, Slower, Cheaper per bit


Key Insight
> “Every nanosecond has a dollar value.”  
> Efficient caching saves money at scale by reducing total compute time and power consumption.

Next Module Preview (Week 3)
Parallel & GPU Memory Access 
- Shared vs. Global Memory (Latency & Bandwidth)  
- Thread Synchronization Effects  
- CUDA Memory Optimization Demo (`gpu_memory_demo.cu`)
