/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UICollectionViewAnimationContext;
@class _UICollectionViewAnimationContext;

@interface _UICollectionViewAnimator : NSObject <NSCopying> {

	id<_UICollectionViewAnimationContext> _animationContext;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) id handler;                                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) _UICollectionViewAnimationContext * animationContext; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UICollectionViewAnimationContext *)animationContext;
-(void)setAnimationContext:(_UICollectionViewAnimationContext *)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)handler;
@end
