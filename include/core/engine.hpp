#pragma once

class Engine {
public:
    Engine();
    ~Engine();

    void Initialize();
    void Run();
    void Shutdown();

private:
    bool isRunning;
};
