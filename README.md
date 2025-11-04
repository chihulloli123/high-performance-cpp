# high-performance-cpp
Self-guided systems engineering and C++ performance study. Exploring computer architecture, parallel programming, and optimization through small-scale projects and experiments.


Study Framework

This repository follows a structured path combining:

- Gaddis – _Starting Out with C++ (8th ed., ISBN 9780133769395)
- Null & Lobur – _Essentials of Computer Organization & Architecture

Each week connects software practice to hardware understanding.

| Week | Focus | Deliverable |
|------|--------|-------------|
| 1 | C++ syntax, control structures, CPU pipelines | `hello_world.cpp`, `pipeline_simulator.cpp` |
| 2 | Memory hierarchy, pointers, cache simulation | `memory_demo.cpp` |
| 3 | Object-oriented design & resource management | `MemoryController` class |
| 4 | Parallelism & CUDA introduction | `vector_add.cu`, runtime benchmarks |
| 5 | Performance analysis & documentation | Comparison reports + charts |

---

### Build & Run
```bash
g++ week01_basics/hello_world.cpp -o hello_world
./hello_world

