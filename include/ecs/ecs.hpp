#pragma once
#include <vector>
#include <cstdint>

using Entity = std::uint32_t;

class Registry {
public:
    Entity Create();
    void Destroy(Entity entity);

private:
    std::vector<Entity> entities;
    Entity nextEntity = 0;
};
