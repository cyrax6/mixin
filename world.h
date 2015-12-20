/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   World.h
 * Author: cyrax
 *
 * Created on November 29, 2015, 4:42 PM
 */

#ifndef WORLD_H
#define WORLD_H

#include "vehicle_specialisations.h"
#include <cassert>

template <class CarType, class ShipType, class AircraftType>
class World  
            : CollectionType<CarType>,
              CollectionType<ShipType>,
              CollectionType<AircraftType>
{
public:

    template <class T> void Add(T& vehicle_type)
    {
        auto post_add = static_cast<CollectionType<T>*>(this)->Add(vehicle_type);
        auto default_collection = static_cast<CollectionType<T>*>(this)->GetCollection();
        
        assert(post_add.size() == default_collection.size());
    }
    ~World()
    {
    }

private:
};

#endif /* WORLD_H */
