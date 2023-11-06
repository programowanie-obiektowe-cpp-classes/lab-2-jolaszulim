#pragma once

#include "Resource.hpp"

class ResourceManager
{
  public:
    ResourceManager() : resource() {}

    ResourceManager(const ResourceManager&) = default;
    ResourceManager& operator=(const ResourceManager&) = default;
    ResourceManager(ResourceManager&&) = default;
    ResourceManager& operator=(ResourceManager&&) = default;
    ~ResourceManager() = default;

    double get() { return resource.get();}

private:
    Resource resource;

};
