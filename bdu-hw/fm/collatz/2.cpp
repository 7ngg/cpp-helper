#include <iostream>
#include <vector>

struct CollatzResult
{
    int initial_number;
    int max;
    int lucky;
    int count = 1;
};

CollatzResult* Process(int n) {
    CollatzResult* r = new CollatzResult();

    r->initial_number = n;

    int count = 1;
    int max = n;

    while (n > 1) {
        std::cout << n << ' ';

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }

        count += 1;

        if (max < n) {
            max = n;
        }
    }

    std::cout << n << std::endl;

    r->count = count;
    r->max = max;
    r->lucky = max + count;

    return r;
}

int main() {
    int k;
    std::cin >> k;

    std::vector<CollatzResult*>* v = new std::vector<CollatzResult*>();

    int input;
    for (size_t i = 0; i < k; i++)
    {
        std::cin >> input;

        v->push_back(Process(input));
    }

    CollatzResult* max = v->at(0);
    CollatzResult* luckiest = v->at(0);
    CollatzResult* oldest = v->at(0);

    for (size_t i = 0; i < v->size(); i++) {
        if (max->max < v->at(i)->max) max = v->at(i);
        if (luckiest->lucky < v->at(i)->lucky) luckiest = v->at(i);
        if (oldest->count < v->at(i)->count) oldest = v->at(i);
    }

    std::cout 
            << "Oldest: " << oldest->initial_number << '\t' << oldest->count << '\n'
            << "Max: " << max->initial_number << '\t' << max->max << '\n'
            << "Luckiest: " << luckiest->initial_number << '\t' << luckiest->lucky << std::endl;

    for (size_t i = 0; i < v->size(); i++)
    {
        delete v->at(i);
    }
    delete v;

    return 0;
}