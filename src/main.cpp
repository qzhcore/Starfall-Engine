#include "core/engine.hpp"

int main() {
    Engine engine;
    
    engine.Initialize();
    engine.Run();
    engine.Shutdown();
    
    return 0;
}
