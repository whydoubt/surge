//-------------------------------------------------------------------------------------------------------
//
//	Shortcircuit
//
//	Copyright 2004 Claes Johanson
//
//-------------------------------------------------------------------------------------------------------

#pragma once

#include "vstgui/vstgui.h"

class CAboutBox : public VSTGUI::CControl
{
public:
   CAboutBox(const VSTGUI::CRect& size,
             VSTGUI::IControlListener* listener,
             long tag,
             VSTGUI::CBitmap* background,
             VSTGUI::CRect& toDisplay,
             VSTGUI::CPoint& offset,
             VSTGUI::CBitmap* aboutBitmap);
   virtual ~CAboutBox();

   virtual void draw(VSTGUI::CDrawContext*);
   virtual bool hitTest(const VSTGUI::CPoint& where, const VSTGUI::CButtonState& buttons = -1);
   // virtual void mouse (VSTGUI::CDrawContext *pContext, VSTGUI::CPoint &where, long button = -1);
   virtual VSTGUI::CMouseEventResult
   onMouseDown(VSTGUI::CPoint& where,
               const VSTGUI::CButtonState& buttons); ///< called when a mouse down event occurs
   virtual void unSplash();

   void boxShow();
   void boxHide(bool invalidateframe = true);

   CLASS_METHODS(CAboutBox, CControl)

protected:
   VSTGUI::CRect toDisplay;
   VSTGUI::CRect keepSize;
   VSTGUI::CPoint offset;
   VSTGUI::SharedPointer<VSTGUI::CBitmap> _aboutBitmap;
   bool bvalue;

   static SharedPointer<CFontDesc> infoFont;
};
