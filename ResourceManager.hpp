#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager() { r = new Resource(); }
    ResourceManager(const ResourceManager& x) { r = new Resource(*x.r);}
    ResourceManager& operator=(const ResourceManager& x) {
        delete r;
        r = new Resource(*x.r);
        return *this;
    }
    ResourceManager(ResourceManager&& x) { 
        r = x.r;
        x.r = nullptr;
    }
    ResourceManager& operator=(ResourceManager&& x3) noexcept {
        delete r;
        r = x.r;
        x.r = nullptr;
        return *this;
    }
   double get() { return r->get();}
   ~ResourceManager() { delete r; }

private:
    Resource* r;

};
