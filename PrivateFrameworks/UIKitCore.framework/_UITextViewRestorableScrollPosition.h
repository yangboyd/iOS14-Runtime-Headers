/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {

	NSRange _range;
	double _offsetInLine;

}
+(id)restorableScrollPositionForTextView:(id)arg1 ;
+(id)restorableScrollPositionForStateRestoration:(id)arg1 ;
+(id)restorableScrollPositionWithDictionary:(id)arg1 ;
+(id)restorableScrollPositionWithRange:(NSRange)arg1 ;
-(NSRange)range;
-(id)initWithTextView:(id)arg1 ;
-(id)debugDescription;
-(double)offsetWithinLine;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTextViewForStateRestoration:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

