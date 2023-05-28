#ifndef TIP_PRACTICE_SET_H
#define TIP_PRACTICE_SET_H
#include <set>
#include <stdexcept>

class Set {
private:
    std::set<int> data;

public:
    void addElement(int value) {
        data.insert(value);
    }

    bool containsElement(int value) const {
        if (data.empty())
            throw std::out_of_range("Set is empty");

        return data.count(value) > 0;
    }
};


#endif //TIP_PRACTICE_SET_H
