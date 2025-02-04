//リストで駅名の配列を定義して表示するサンプル
//このサンプルに2回駅を追加して2回for文で表示する処理を追加する
#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
    // 駅名のリストを定義
    list<const char*> rosen = { "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
        "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro",
        "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya",
        "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho",
        "Shimbashi", "Yurakucho" };

    // 初期状態のリストを表示
    cout << "初期の駅リスト:" << endl;
    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
        cout << *itr << endl;
    }

    // 駅を追加
    rosen.push_back("Tabata");

    // 駅追加後のリストを表示
    cout << "\n駅を追加した後のリスト:" << endl;
    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
        cout << *itr << endl;
    }

    // さらに駅を追加
    rosen.push_back("Tamachi");

    // さらに追加後のリストを表示
    cout << "\nさらに駅を追加した後のリスト:" << endl;
    for (list<const char*>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr) {
        cout << *itr << endl;
    }

    return 0;
}