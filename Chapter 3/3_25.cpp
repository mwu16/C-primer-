#include <iostream>
#include <vector>

int main() {
    std::vector<unsigned> scores(11,0);
    int num;
    auto beg=scores.begin();
    while (std::cin >> num) {
        ++*(beg+num/10);
    }

    for (auto it =scores.begin(); it !=scores.end(); ++it)
        std::cout << *it << std::endl;
    return 0;
}
