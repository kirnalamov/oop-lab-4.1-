#include <algorithm>
#include <cmath>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class CCircle  {
public:
	int x;
	int y;
	int r = 35;
	bool select = false;
	CCircle() :x(0), y(0) {};
	CCircle(const int x, const int y, const int r) :x(x), y(y), r(r) {};
	~CCircle() {};

	void is_inside(const int cursorX, const int  cursorY, bool selecton , bool groop)
	{
		double dist = sqrt(pow(x - cursorX, 2) + pow(y - cursorY, 2));
		select = ((dist < r) && (selecton|| groop)) || (select && groop);
	}

	void paint(Graphics^ grafic) {
		
		if (select) grafic->DrawEllipse(gcnew Pen(Color::LightGreen, 5), x - r, y - r, r * 2, r * 2);
		else grafic->DrawEllipse(gcnew Pen(Color::Gray, 5), x - r, y - r, r * 2, r * 2);
		
	}

};