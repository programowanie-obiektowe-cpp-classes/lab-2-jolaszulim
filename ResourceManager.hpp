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


    ~ResourceManager() {}

private:
    Resource r;
};
