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

template <class CarType, class ShipType, class AircraftType>
class World
{
public:

    template <class T> void Add(const T& vehicle_type)
    {
        std::vector<T>& collection = GetCollection(vehicle_type);
    }
    ~World()
    {
        cars.empty();
        ships.empty();
        aircrafts.empty();
    }

private:

    std::vector<CarType> cars;
    std::vector<ShipType> ships;
    std::vector<AircraftType> aircrafts;

    //std::vector<T>& GetCollection() const { }

    std::vector<CarType>& GetCollection(const CarType& car)
    {
        return cars;
    }

    std::vector<ShipType>& GetCollection(const ShipType& ship)
    {
        return ships;
    }

    std::vector<AircraftType>& GetCollection(const AircraftType& aircraft)
    {
        return aircrafts;
    }
};

#endif /* WORLD_H */
