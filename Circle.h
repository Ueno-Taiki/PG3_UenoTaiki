#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:  //メンバ変数
	//コンストラクタ
	Circle();
	//デストラクタ
	~Circle();
	//サイズ
	void Size() override;
	//描画
	void Draw() override;
};