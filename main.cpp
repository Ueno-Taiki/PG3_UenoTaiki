#include <stdio.h>
#include <stdlib.h>

//基底クラス: Animal
typedef struct {
    void (*speak)(void);
} Animal;

//Dogクラス
typedef struct {
    Animal base;
} Dog;

void dogSpeak() {
    printf("Wan!\n");
}

Dog* newDog() {
    Dog* dog = (Dog*)malloc(sizeof(Dog));
    dog->base.speak = dogSpeak;
    return dog;
}

//Catクラス
typedef struct {
    Animal base;
} Cat;

void catSpeak() {
    printf("Nya-!\n");
}

Cat* newCat() {
    Cat* cat = (Cat*)malloc(sizeof(Cat));
    cat->base.speak = catSpeak;
    return cat;
}

//Animalインスタンスのspeakメソッドを呼び出す関数
void makeAnimalSpeak(Animal* animal) {
    animal->speak();
}

int main() {

    //DogとCatのインスタンスを生成
    Dog* dog = newDog();
    Cat* cat = newCat();

    //ポリモーフィズムによる動的な振る舞い
    makeAnimalSpeak((Animal*)dog);
    makeAnimalSpeak((Animal*)cat);

    //メモリ解放
    free(dog);
    free(cat);

	return 0;
}