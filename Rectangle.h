#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:  //メンバ変数
	//コンストラクタ
	Rectangle();
	//デストラクタ
	~Rectangle();
	//サイズ
	void Size() override;
	//描画
	void Draw() override;
};
