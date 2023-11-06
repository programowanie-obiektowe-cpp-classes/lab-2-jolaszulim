#pragma once

#include "Resource.hpp"

class ResourceManager : Resource
{
  public:
    ResourceManager() : r() {}

    ResourceManager(const ResourceManager&) = default;
    ResourceManager& operator=(const ResourceManager&) = default;
    ResourceManager(ResourceManager&&) = default;
    ResourceManager& operator=(ResourceManager&&) = default;
    ~ResourceManager() = default;

    double get() { return r.get();}

private:
    Resource r;

};
