class MemoryController {
private:
    double cacheHitRate;
    int cacheAccessTime;
    int memoryAccessTime;

public:
    MemoryController(double hit, int cacheT, int memT)
        : cacheHitRate(hit), cacheAccessTime(cacheT), memoryAccessTime(memT) {}

    double getAverageAccessTime() const {
        return (cacheHitRate * cacheAccessTime) +
               ((1 - cacheHitRate) * memoryAccessTime);
    }

    void printReport() const {
        cout << "Cache Hit Rate: " << cacheHitRate * 100 << "%\n"
             << "Cache Access Time: " << cacheAccessTime << " ns\n"
             << "Memory Access Time: " << memoryAccessTime << " ns\n"
             << "Average Access Time: " << getAverageAccessTime() << " ns\n";
    }
};
