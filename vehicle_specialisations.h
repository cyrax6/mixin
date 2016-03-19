/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vehicle_specialisations.h
 * Author: cyrax
 *
 * Created on December 4, 2015, 7:32 PM
 */

#ifndef VEHICLE_SPECIALISATIONS_H
#define VEHICLE_SPECIALISATIONS_H

#include "collection_type.h"


template<>
class CollectionType<Vehicle<Car>> : public GenericCollectionType<Vehicle<Car>, std::vector<Vehicle<Car>>>
{
};

template<>
class CollectionType<Vehicle<Ship>> : public GenericCollectionType<Vehicle<Ship>, std::vector<Vehicle<Ship>>>
{
};

template<>
class CollectionType<Vehicle<Aircraft>> : public GenericCollectionType<Vehicle<Aircraft>, std::list<Vehicle<Aircraft>>>
{
    public:
        // Example for specialisation overrides. We don't have to implement std::list Add as the interface push_back is already
        // implemented in stl
        std::list<Vehicle<Aircraft>>& Add(const Vehicle<Aircraft>& aircraft)
        {
            auto collection = GetCollection();
            collection.push_back(aircraft);
            return GetCollection();
        }
};

#endif /* VEHICLE_SPECIALISATIONS_H */

