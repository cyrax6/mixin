/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cyrax
 *
 * Created on November 28, 2015, 12:51 AM
 */

#include <iostream>
#include <vector>
#include <list>
#include "ship.h"
#include "car.h"
#include "aircraft.h"
#include "vehicle.h"
#include "collection_type.h"
#include "vehicle_specialisations.h"
#include "world.h"

using namespace std;

/*
 * 
 */
int
main(int argc, char** argv)
{
  Vehicle<Car> car;
  car.StartEngine();
  
  Vehicle<Ship> ship;
  ship.SetSail();
  
  Vehicle<Aircraft> aircraft;
  aircraft.TakeOff();
  
  World<Vehicle<Car>, Vehicle<Ship>, Vehicle<Aircraft>> world;
  world.Add(car);
  
  return 0;
}
