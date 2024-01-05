#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> myQueue;

    while (true) {
        std::cout << "请输入命令(push <数字>, pop, print, exit）: ";
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int num;
            std::cin >> num;
            myQueue.push_back(num);
            std::cout << num << " 入队成功。" << std::endl;
        } else if (command == "pop") {
            if (!myQueue.empty()) {
                int frontElement = myQueue.front();
                myQueue.pop_front();
                std::cout << frontElement << " 出队成功。" << std::endl;
            } else {
                std::cout << "队列已空，无法出队。" << std::endl;
            }
        } else if (command == "print") {
            if (!myQueue.empty()) {
                std::cout << "队列中的元素：";
                for (const auto &element : myQueue) {
                    std::cout << element << " ";
                }
                std::cout << std::endl;
            } else {
                std::cout << "队列为空。" << std::endl;
            }
        } else if (command == "exit") {
            std::cout << "程序退出。" << std::endl;
            break;
        } 
    }

    return 0;
}
