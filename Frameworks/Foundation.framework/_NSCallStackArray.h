/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface _NSCallStackArray : NSArray {

	void* _frames;
	unsigned long long _cnt;
	unsigned long long _ignore;
	char** _pcstrs;
	BOOL _wantSyms;

}
+(id)arrayWithFrames:(void*)arg1 count:(unsigned long long)arg2 symbols:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
@end
