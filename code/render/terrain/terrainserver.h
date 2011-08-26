#pragma once
//------------------------------------------------------------------------------
/**
	@class Terrain::TerrainServer
	
	������ħ������ĵ��Σ��ײ�ʵ�ֵ��ο����Ⱦ���߼���ʵ�ֵ��εļ���ж�ز��ԡ�
	TerrainTile = 16 * 16 TerrainChunk��TerrainTile����С�ļ���ж�ص�Ԫ��
	TerrainChunk��ʾ��С����Ⱦ��Ԫ��һ��TerrainTile�洢Ϊһ��n3ģ���ļ���
	����һ��TransformNode���ڵ�(��ʾ����Tile�İ�Χ�����ڲü�)��16*16�����ο�ڵ㡣

	(C) 2011 xiongyouyi
*/
#include "core/refcounted.h"
#include "core/singleton.h"
#include "terrain/terrainrenderer.h"


//------------------------------------------------------------------------------
namespace Terrain
{
class TerrainServer : public Core::RefCounted
{
	__DeclareClass(TerrainServer);
	__DeclareSingleton(TerrainServer);
public:
	/// constructor
	TerrainServer();
	/// destructor
	virtual ~TerrainServer();

	/// open the terrain server
	void Open();
	/// close the terrain server
	void Close();
	/// return true if terrain server is open
	bool IsOpen() const;

private:
	bool isOpen;
	Ptr<TerrainRenderer> terrainRenderer;
};

//------------------------------------------------------------------------------
/**
*/
inline bool
TerrainServer::IsOpen() const
{
	return this->isOpen;
}

} // namespace Terrain
