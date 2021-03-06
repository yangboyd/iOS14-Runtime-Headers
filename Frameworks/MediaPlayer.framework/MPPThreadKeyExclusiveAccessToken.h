/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPExclusiveAccessToken.h>

@interface MPPThreadKeyExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {

	unsigned long long _key;
	id _owner;

}
+(id)tokenWithKey:(unsigned long long)arg1 owner:(id)arg2 ;
-(id)_init;
-(void)assertHasExclusiveAccessForOwner:(id)arg1 ;
@end

