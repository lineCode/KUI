#pragma once

#include "Graphics.h"

class GdiPlusGraphicsDelegate;

class GdiPlusGraphics : public Graphics
{
public:
    GdiPlusGraphics(int width, int height);
    virtual ~GdiPlusGraphics();

	// Graphics
	virtual void* lockBits() override;
	virtual void unlockBits() override;
	virtual void clear(const Color& color) override;
	virtual bool drawLine(KPen* pen, int x1, int y1, int x2, int y2) override;
	virtual bool drawRect(KPen* pen, KRect& rect) override;
	virtual bool fillRect(KBrush* brush, KRect& rect) override;
	virtual bool drawImage(Image* image, int x, int y, int nAlpha = 255) override;
	virtual bool drawImage(Image* image, int x, int y, float degrees) override;
	virtual bool drawString(const KString& str, int len, const KFont& font, const KPoint& pt, KBrush* brush) override;
	virtual bool setClip(const KRect& rect, ak::opMode mode) override;
	virtual bool resetClip() override;

private:
    GdiPlusGraphicsDelegate* _gdiPlusGraphicsDelegate;
};