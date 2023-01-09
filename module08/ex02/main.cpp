#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    std::cout << "\n\n######test cast 1#############################\n\n";

    {
        MutantStack<int> mstack;
        std::list<int> lst;

        mstack.push(5);
        lst.push_back(5);

        mstack.push(17);
        lst.push_back(17);
        std::cout << mstack.top() << std::endl;
        std::cout << lst.back() << std::endl;

        mstack.pop();
        lst.pop_back();

        std::cout << mstack.size() << std::endl;
        std::cout << lst.size() << std::endl;

        mstack.push(3);
        lst.push_back(3);

        mstack.push(5);
        lst.push_back(5);

        mstack.push(737);
        lst.push_back(737);

        mstack.push(0);
        lst.push_back(0);

        MutantStack<int>::iterator it = mstack.begin();
        std::list<int>::iterator lit = lst.begin();

        MutantStack<int>::iterator ite = mstack.end();
        std::list<int>::iterator lite = lst.end();
        ++it;
        ++lit;
        --it;
        --lit;
        std::cout << "----------------MutantStack-----------------" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << "------------------list--------------------" << std::endl;
        while (lit != lite)
        {
            std::cout << *lit << std::endl;
            ++lit;
        }
    }
    std::cout << "\n\n######test cast 2#############################\n\n";
    {
        MutantStack<int> mstack;
        std::list<int> lst;

        mstack.push(5);
        lst.push_back(5);

        mstack.push(17);
        lst.push_back(17);
        std::cout << mstack.top() << std::endl;
        std::cout << lst.back() << std::endl;

        mstack.pop();
        lst.pop_back();

        std::cout << mstack.size() << std::endl;
        std::cout << lst.size() << std::endl;

        mstack.push(3);
        lst.push_back(3);

        mstack.push(5);
        lst.push_back(5);

        mstack.push(737);
        lst.push_back(737);

        mstack.push(0);
        lst.push_back(0);

        MutantStack<int>::reverse_iterator rit = mstack.rbegin();
        std::list<int>::reverse_iterator rlit = lst.rbegin();

        MutantStack<int>::reverse_iterator rite = mstack.rend();
        std::list<int>::reverse_iterator rlite = lst.rend();
        ++rit;
        ++rlit;
        --rit;
        --rlit;
        std::cout << "----------------MutantStack reverse-----------------" << std::endl;
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
        std::cout << "------------------list reverse--------------------" << std::endl;
        while (rlit != rlite)
        {
            std::cout << *rlit << std::endl;
            ++rlit;
        }
    }

    std::cout << "\n\n######test cast 3#############################\n\n";
    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);
        MutantStack<int> cmstack(mstack);
        std::cout << mstack.top() << std::endl;
        std::cout << cmstack.top() << std::endl;
    }
    std::cout << "\n\n######test cast 4#############################\n\n";
    {
        MutantStack<int> mstack;
        std::list<int> lst;

        mstack.push(5);
        lst.push_back(5);

        mstack.push(17);
        lst.push_back(17);
        std::cout << mstack.top() << std::endl;
        std::cout << lst.back() << std::endl;

        mstack.pop();
        lst.pop_back();

        std::cout << mstack.size() << std::endl;
        std::cout << lst.size() << std::endl;

        mstack.push(3);
        lst.push_back(3);

        mstack.push(5);
        lst.push_back(5);

        mstack.push(737);
        lst.push_back(737);

        mstack.push(0);
        lst.push_back(0);

        MutantStack<int>::const_reverse_iterator rit = mstack.rbegin();
        std::list<int>::const_reverse_iterator rlit = lst.rbegin();

        MutantStack<int>::const_reverse_iterator rite = mstack.rend();
        std::list<int>::const_reverse_iterator rlite = lst.rend();
        ++rit;
        ++rlit;
        --rit;
        --rlit;
        std::cout << "----------------MutantStack reverse-----------------" << std::endl;
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
        std::cout << "------------------list reverse--------------------" << std::endl;
        while (rlit != rlite)
        {
            std::cout << *rlit << std::endl;
            ++rlit;
        }
    }
    return 0;
}
