#ifndef SUBJECT_H
#define SUBJECT_H


class Subject
{
public:
    virtual ~Subject();
    virtual void Attach (Observer*);
    virtual void Detach (Observer*);
    virtual void Notify();
protected:
    Subject();
private:
    List<Observer*> *_observers;
};

#endif // SUBJECT_H
