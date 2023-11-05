#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager() : r() {}

    ResourceManager(const ResourceManager& x) : r(x.r) {}

    double get() { return r.get();}

    ResourceManager& operator=(const ResourceManager &x1) {
        if (this != &x1) {
            r = x1.r;
        }
        return *this;
    }

ResourceManager& operator=(ResourceManager&& x3) noexcept {
    if (this != &x3) {
        r = std::move(x3.r);
    }
    return *this;
}

    ~ResourceManager() {}

private:
    Resource r;
};
