#ifndef ABSTRACTAGGREGATE_H
#define ABSTRACTAGGREGATE_H

template<class Item>

class AbstractAggregate{
public:
    virtual Iterator<Item>* CreateIterator() const = 0;

};

#endif // ABSTRACTAGGREGATE_H
