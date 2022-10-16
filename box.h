#pragma once

class Box {
private:
	int length;
	int width;
	int height;
public:
	Box();
	Box(int l, int w, int h);
	void setData();
	void getData();
	int getVolume();
	~Box();
};