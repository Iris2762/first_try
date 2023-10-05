#include <iostream>
#include <vector>

// 计算从start到end范围内不相邻地取数的不同方案数量
int countWays(int start, int end) {
    if (start > end) {
        return 0;  // 无效范围
    }
    if (start == end) {
        return 1;  // 只有一个数，只有一种方案
    }
    
    // 选择第一个数，并跳过下一个数的范围，或者不选择第一个数
    return countWays(start + 1, end) + countWays(start + 2, end);
}

int main() {
    int totalWays = countWays(1, 4);
    std::cout << "从1到10000中不相邻地取数的不同方案数量：" << totalWays << std::endl;
    return 0;
}
