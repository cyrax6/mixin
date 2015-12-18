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


template <class CarType, class ShipType, class AircraftType>
class World  
            : CollectionType<CarType>,
              CollectionType<ShipType>,
              CollectionType<AircraftType>
{
public:

    template <class T> void Add(T& vehicle_type)
    {
        auto collection = static_cast<CollectionType<T>*>(this)->GetCollection(vehicle_type);
        //collection.push_back(vehicle_type);
    }
    ~World()
    {
    }

private:

//    CollectionType<CarType> cars;
//    CollectionType<ShipType> ships;
//    CollectionType<AircraftType> aircrafts;

    //std::vector<T>& GetCollection() const { }
//
//    CollectionType<CarType>& GetCollection(const CarType& car)
//    {
//        return cars;
//    }
//
//    CollectionType<ShipType>& GetCollection(const ShipType& ship)
//    {
//        return ships;
//    }
//
//    CollectionType<AircraftType>& GetCollection(const AircraftType& aircraft)
//    {
//        return aircrafts;
//    }
};

#endif /* WORLD_H */
