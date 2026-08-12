#include <iterator>

#include "IteratorLib.h"

namespace mystd {
    void advance(It &it, DifferenceType n) {
        std::advance(it, n);
    }

    mystd::DifferenceType distance(It first, It last) {
        return std::distance(first, last);
    }

    mystd::It next(mystd::It it, mystd::DifferenceType n) {
        return std::next(it, n);
    }

    mystd::It prev(mystd::It it, mystd::DifferenceType n) {
        return std::prev(it, n);
    }
}
