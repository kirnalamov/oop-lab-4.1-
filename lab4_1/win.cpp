#include "win.h"
#include "objects.h"
#include <vector>

std::vector<CCircle> allCircle;
bool selectGropsCtrl = false;
bool selectGrops = false;
const int RADIUS = 40;

System::Void lab41::win::win_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    return System::Void();
}


System::Void lab41::win::win_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
  
    int x = e->X;
    int y = e->Y;
    bool noCircles = selectGropsCtrl || selectGrops;
    bool noCircle = true; 
    int count = 0;
    for (int i = 0; i < allCircle.size(); i++) {
        allCircle[i].is_inside(x, y , noCircle , noCircles);
        if (allCircle[i].select) {
            noCircle = false;
    
        }
    }
    if (noCircle) {
        allCircle.push_back(CCircle(x, y, RADIUS));
        allCircle.back().select = true;
    }
    PaintWin();
    return System::Void();
}


System::Void lab41::win::win_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{

    PaintWin();
    return System::Void();
}


System::Void lab41::win::PaintWin()
{
    Graphics^ grafic = Graphics::FromHwnd(this->Handle);
    for (int i = 0; i < allCircle.size(); i++)
    {
        allCircle[i].paint(grafic);
    }
    return System::Void();
}

System::Void lab41::win::win_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{

    if (e->KeyCode == Keys::ControlKey) {
        selectGropsCtrl = true;
        checkBox2->Checked = true; 
    }
    if (e->KeyCode == Keys::Delete) {
        for (std::vector<CCircle>::iterator it = allCircle.begin(); it != allCircle.end();)
        {
            if ((*it).select)
                it = allCircle.erase(it);
            else
                ++it;
        }

        if (allCircle.size() != 0) allCircle.back().select = true;
        Graphics^ g = Graphics::FromHwnd(this->Handle);
        g->Clear(Color::White);
        PaintWin();
    }

    return System::Void();
}

System::Void lab41::win::win_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    if (e->KeyCode == Keys::ControlKey) {
        selectGropsCtrl = false;
        checkBox2->Checked = false;
    }
    return System::Void();
}

System::Void lab41::win::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox1->Checked) {
        selectGrops =true;
    }
    else {
        selectGrops = false;
    }
    return System::Void();
}
