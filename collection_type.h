/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollectionType.h
 * Author: cyrax
 *
 * Created on December 4, 2015, 6:07 PM
 */

#ifndef COLLECTIONTYPE_H
#define COLLECTIONTYPE_H

template<class T, class Collection>
class GenericCollectionType
{
    Collection collection;
public:
    
    Collection& GetCollection() 
    {
        return collection;
    }
    
    Collection& Add(const T& element)
    {
        collection.push_back(element);
        return collection;
    }
    ~GenericCollectionType() {}
private:

};

template<class T>
class CollectionType {};

#endif /* COLLECTIONTYPE_H */

