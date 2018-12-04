//-------------------------------------------------------------------------------------------------------
//	Copyright 2005 Claes Johanson & Vember Audio
//-------------------------------------------------------------------------------------------------------
#pragma once
#include "vstgui/vstgui.h"

enum vutypes
{
   vut_off,
   vut_vu,
   vut_vu_stereo,
   vut_gain_reduction,
   n_vut,
};

class CSurgeVuMeter : public CControl
{
public:
   CSurgeVuMeter(const CRect& size);
   virtual void draw(CDrawContext* dc);
   void setType(int vutype);
   // void setSecondaryValue(float v);
   void setValueR(float f);
   bool stereo;

private:
   float valueR;
   int type;
   CLASS_METHODS(CSurgeVuMeter, CControl)
};