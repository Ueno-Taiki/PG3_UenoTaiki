//リストで駅名の配列を定義して表示するサンプル
//このサンプルに2回駅を追加して2回for文で表示する処理を追加する
#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
    // 駅名のリストを定義
    list<const char*> rosen = { "田端", "日暮里", "西日暮里" };

    // 初期状態のリストを表示
    cout << "初期の駅リスト:" << endl;
    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
        cout << *itr << endl;
    }

    // 駅を追加
    rosen.push_back("上野");
    rosen.push_back("御徒町");

    // 駅追加後のリストを表示
    cout << "\n駅を追加した後のリスト:" << endl;
    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
        cout << *itr << endl;
    }

    // さらに駅を追加
    rosen.push_back("秋葉原");
    rosen.push_back("神田");

    // さらに追加後のリストを表示
    cout << "\nさらに駅を追加した後のリスト:" << endl;
    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
        cout << *itr << endl;
    }

    return 0;
}