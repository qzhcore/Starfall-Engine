#include "core/engine.hpp"

Engine::Engine() : isRunning(false) {}

Engine::~Engine() {}

void Engine::Initialize() {
    isRunning = true;
}

void Engine::Run() {
    while (isRunning) {
        
    }
}

void Engine::Shutdown() {
    isRunning = false;
}
