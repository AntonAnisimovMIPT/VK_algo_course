#include <list>
#include "../../include/week_2.hpp"

/*
bool checkCycleList(MyList<int>& input) {
    if (input.head() != nullptr || input.head().next() != nullptr) {
        return false;
    }

    auto sl_ptr = input.head();
    auto fst_ptr = input.head().next();

    while (sl_ptr != fst_ptr) {
        if (fst_ptr == nullptr || fst_ptr.next() == nullptr) {
            return false;
        }

        sl_ptr = sl_ptr.next();
        fst_ptr = fst_ptr.next().next();
    }
    return true;
}

void reverseList(MyList<int>& input) {
    auto prev_ptr = nullptr;
    auto cur_ptr = input.head();

    while (cur_ptr != nullptr) {
        auto next_ptr = cur_ptr.next();
        cur_ptr.next() = prev_ptr;
        prev_ptr = cur_ptr;
        cur_ptr = next_ptr;
    }

    // todo
}

auto& findMidNode(MyList<int>& input) {
    auto sl_ptr = input.head();
    auto fst_ptr = input.head();
    while (fst_ptr != nullptr && fst_ptr.next() != nullptr) {
        sl_ptr = sl_ptr.next();
        fst_ptr = fst_ptr.next().next();
    }
    return sl_ptr;
}

// removeElement
MyList<int> removeElementList(MyList<int>& input, int val) {
    MyList<int> result;

    auto dummy = new ListNode;
    dummy.next() = input.head();

    auto pr_ptr = dummy;
    auto cur_ptr = input.head();

    while (cur_ptr != nullptr) {
        if (cur_ptr.val() == val) {
            pr_ptr.next() = cur_ptr.next();
        }
        cur_ptr = cur_ptr.next();
    }

    // todo

    return result;
}
*/