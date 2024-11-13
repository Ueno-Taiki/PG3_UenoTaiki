#pragma once

class IShape {
public:  //メンバ変数
	//コンストラクタ
	IShape();
	//デストラクタ
	~IShape();
	//サイズ
	virtual void Size();
	//描画
	virtual void Draw();
};
