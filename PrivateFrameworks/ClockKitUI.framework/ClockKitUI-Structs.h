/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned quadViewWillDisplay : 1;
} SCD_Struct_CL0;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_CL1;

typedef struct CLKUIAtlasBackingStructure {
	void bytes;
	unsigned bytesLength;
	unsigned width;
	unsigned height;
	unsigned planes;
	unsigned planeLength;
	unsigned bytesPerPixel;
	unsigned mipCount;
	unsigned char format;
	unsigned char filter;
	unsigned char wrap;
	BOOL mipmaps;
} CLKUIAtlasBackingStructure;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_CL3;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFAttributedString* CFAttributedStringRef;

typedef struct CLKUIQuadSize {
	int width;
	int height;
} CLKUIQuadSize;

typedef struct __CTLine* CTLineRef;
