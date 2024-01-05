#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

   
    std::cout << "请输入整数（以0结束输入）：" << std::endl;
    int num;
    while (std::cin >> num && num != 0) {
        myList.push_back(num);
    }

    if (!myList.empty()) {
        myList.pop_front();

        // 删除最后一个元素
        myList.pop_back();

        // 打印剩余的链表
        std::cout << "剩余的链表元素：";
        for (const auto &element : myList) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "链表为空。" << std::endl;
    }

    return 0;
}
