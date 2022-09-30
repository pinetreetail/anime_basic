#include "DxLib.h"
#include <cassert>
#include "SceneMain.h"


namespace
{
	// 
	const char* const kPlayerGraphicFilename = "data/char.png";
	
	// 
	constexpr int kPlayerGraphicDivX = 3;
	constexpr int kPlayerGraphicDivY = 4;
	constexpr int kPlayerGraphicDivNum = kPlayerGraphicDivX * kPlayerGraphicDivY;

	// 
	constexpr int kPlayerGraphicSizeX = 32;
	constexpr int kPlayerGraphicSizeY = 32;
}

SceneMain::SceneMain()
{
	for (auto& handle : m_hPlayerGraphic)
	{
		handle = -1;
	}
}
SceneMain::~SceneMain()
{

}

// ������
void SceneMain::init()
{
	LoadDivGraph(kPlayerGraphicFilename, kPlayerGraphicDivNum,
		kPlayerGraphicDivX, kPlayerGraphicDivY,
		kPlayerGraphicSizeX, kPlayerGraphicSizeY, m_hPlayerGraphic);

	m_player.setHandle(m_hPlayerGraphic[4]);
	m_player.init();
}

// �I������
void SceneMain::end()
{
	for (auto& handle : m_hPlayerGraphic)
	{
		DeleteGraph(handle);
	}
}

// ���t���[���̏���
void SceneMain::update()
{
	m_player.update();
}

// ���t���[���̕`��
void SceneMain::draw()
{
	m_player.draw();
}