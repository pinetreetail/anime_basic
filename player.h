#pragma once

#include "Vec2.h"


class Player
{
public:
	// 

	// グラフィックデータ分割数
	static constexpr int kGraphicDivX = 3;
	static constexpr int kGraphicDivY = 4;
	static constexpr int kGraphicDivNum = kGraphicDivX * kGraphicDivY;

	// グラフィックデータサイズ
	static constexpr int kGraphicSizeX = 32;
	static constexpr int kGraphicSizeY = 32;

public:
	Player();
	virtual ~Player();

	// グラフィックデータ設定
	void setHandle(int index, int handle) { m_handle[index] = handle; }

	// プレイヤーの初期化
	void init();

	// 処理
	void update();
	// 描画
	void draw();

private:
	int m_handle[kGraphicDivNum];

	// 表示位置
	Vec2 m_pos;
	// 移動
	Vec2 m_vec;

	// キャラクターアニメーション
	int m_animeNo;
};