#ifndef __GRID_H__
#define	__GRID_H__

#include "Game.h" 
#include "GSprite.h"  
#include "Brick.h"
#include "define.h"

using namespace std;

#define GRID_CELL_WIDTH (SCREEN_WIDTH/4.0f)
#define GRID_CELL_HEIGHT (SCREEN_HEIGHT/4.0f)



#define GRID_CELL_MAX_ROW 20 // số dòng tối đa;
#define GRID_CELL_MAX_COLUMN 100 // số cột tối đa


class Grid
{  
private:
	vector<GameObject*> cells[GRID_CELL_MAX_ROW][GRID_CELL_MAX_COLUMN];
	const char * filepath;

public:
	Grid();
	~Grid();

	void SetFile(const char * str); // Đọc các object từ file
	void ReloadGrid();


	GameObject * GetNewObject(int type, float x, float y, int w, int h, int Model);
	void Insert(int id, int type, int direction, float x, float y, int w, int h, int Model); //Thêm object vào grid
	void GetListObject(vector<GameObject*>& ListObj, Camera * camera);
	
};

#endif
