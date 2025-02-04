#include <iostream>
#include <string>
#include <chrono>

int main() {
    // 10万文字の 'a' で初期化
    std::string a(100000, 'a');

    // コピーの計測
    auto start_copy = std::chrono::high_resolution_clock::now();
    std::string b = a; // コピー
    auto end_copy = std::chrono::high_resolution_clock::now();

    // 移動の計測
    auto start_move = std::chrono::high_resolution_clock::now();
    std::string c = std::move(a); // ムーブ
    auto end_move = std::chrono::high_resolution_clock::now();

    // 時間の計算と表示
    auto copy_time = std::chrono::duration_cast<std::chrono::microseconds>(end_copy - start_copy).count();
    auto move_time = std::chrono::duration_cast<std::chrono::microseconds>(end_move - start_move).count();

    std::cout << "Copy time: " << copy_time << " us" << std::endl;
    std::cout << "Move time: " << move_time << " us" << std::endl;

    return 0;
}
