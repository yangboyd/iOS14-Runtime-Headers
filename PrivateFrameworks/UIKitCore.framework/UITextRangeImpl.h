/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextRange.h>

@class DOMRange;

@interface UITextRangeImpl : UITextRange {

	DOMRange* _domRange;
	long long _affinityIfCollapsed;

}

@property (nonatomic,retain) DOMRange * domRange;              //@synthesize domRange=_domRange - In the implementation block
@property (assign,nonatomic) long long affinity;               //@synthesize affinityIfCollapsed=_affinityIfCollapsed - In the implementation block
+(id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2 ;
+(id)wrapDOMRange:(id)arg1 ;
-(id)end;
-(void)setDomRange:(DOMRange *)arg1 ;
-(void)setAffinity:(long long)arg1 ;
-(void)dealloc;
-(id)start;
-(BOOL)isEqual:(id)arg1 ;
-(void)adjustAffinityOfPosition:(id)arg1 isStart:(BOOL)arg2 ;
-(BOOL)isEmpty;
-(DOMRange *)domRange;
-(id)description;
-(long long)affinity;
@end
