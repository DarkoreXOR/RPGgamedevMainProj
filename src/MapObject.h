#ifndef MAP_OBJECTS
#define MAP_OBJECTS

class MapObject
{
	char m_Symbol;
	float m_xAxis;
	float m_yAxis;
	float m_Size;
	int m_i;
	int m_j;
    
public:
    MapObject();
    MapObject(char symbol, float xAxis, float yAxis, float size);

	char getSymbol();
	float getXAxis();
	float getYAxis();
	float getSize();

	void setSymbol(char symbol);
	void setXAxis(float xAxis);
	void setYAxis(float yAxis);
	void setSize(float size);
	void setI(int i);
	void setJ(int j);
};

#endif
