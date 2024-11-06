#include <stdio.h>
#include <Windows.h>

typedef struct Enemy Enemy;

//状態を表す関数ポインタ型
typedef void (*StateFunc)(Enemy*);

//Enemyクラスの定義
struct Enemy {
    StateFunc currentState;  //現在の状態を示す関数ポインタ
    int distance;            //プレイヤーとの距離を表す
};

//各状態を表す関数
void approach(Enemy* enemy);
void shoot(Enemy* enemy);
void retreat(Enemy* enemy);

//状態遷移関数
void changeState(Enemy* enemy, StateFunc newState) {
    enemy->currentState = newState;
}

//接近状態
void approach(Enemy* enemy) {
    printf("敵はプレイヤーに接近しています...\n");
    enemy->distance -= 1;
    if (enemy->distance <= 1) {
        changeState(enemy, shoot);  // 射撃状態に移行
    }
}

//射撃状態
void shoot(Enemy* enemy) {
    printf("敵はプレイヤーに射撃しています！\n");
    changeState(enemy, retreat);  // 射撃後は離脱状態に移行
}

//離脱状態
void retreat(Enemy* enemy) {
    printf("敵はプレイヤーから離脱しています...\n");
    enemy->distance += 2;
    if (enemy->distance >= 10) {
        changeState(enemy, approach);  //一定距離離れたら再び接近状態に移行
    }
}

int main() {
    //敵オブジェクトの初期化
    Enemy enemy = { approach, 5 };  //初期状態は接近で、距離5から開始

    //状態遷移のシミュレーション
    for (int i = 0; i < 10; ++i) {
        enemy.currentState(&enemy);  //現在の状態を実行
    }

    return 0;
}