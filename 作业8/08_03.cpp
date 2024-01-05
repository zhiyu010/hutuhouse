#include <iostream>
#include <vector>
#include <algorithm>

void uniqueSort(std::vector<int>& vec);

int main() {
    std::vector<int> myVector;

    std::cout << "请输入整数（以0结束输入）：" << std::endl;
    int num;
    while (std::cin >> num && num != 0) {
        myVector.push_back(num);
    }

    uniqueSort(myVector);

    std::cout << "处理后的容器元素：";
    for (const auto &element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

void uniqueSort(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
    auto uniqueEnd = std::unique(vec.begin(), vec.end());
    vec.erase(uniqueEnd, vec.end());
}
