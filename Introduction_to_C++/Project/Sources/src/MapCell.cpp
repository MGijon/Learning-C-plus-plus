#include "MapCell.h"

MapCell::MapCell(){
	// Constructor
	id = 0;
}

MapCell::~MapCell(){
	// Destructor
}

bool MapCell::IsBlocked(){
	if(id == '1'){
		return true;
	}else{
		return false;
	}

}
