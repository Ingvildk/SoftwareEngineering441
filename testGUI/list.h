#ifndef LIST_H
#define LIST_H

template <class Item>

class List : public AbstractAggregate {
public:
    List (long size = DEFAULT_LIST_CAPACITY);

    long Count() const;
    Item& Get (long index) const;
    //...
    // and the method to provide the iterator...
    Iterator<Item>* CreateIterator() const;
};

#endif // LIST_H
