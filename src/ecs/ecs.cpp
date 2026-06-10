#include "ecs/ecs.hpp"
#include <algorithm>

Entity Registry::Create() {
    Entity entity = nextEntity++;
    entities.push_back(entity);
    return entity;
}

void Registry::Destroy(Entity entity) {
    auto it = std::find(entities.begin(), entities.end(), entity);
    if (it != entities.end()) {
        entities.erase(it);
    }
}
