/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADArcToPathElement : OADPathElement {

	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;

}
-(OADAdjustCoord)startAngle;
-(id)initWithSemiaxes:(OADAdjustPoint)arg1 startAngle:(OADAdjustCoord)arg2 angleLength:(OADAdjustCoord)arg3 ;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)angleLength;
@end

