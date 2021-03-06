/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSArray;

@interface DECondition : NSObject {

	shared_ptr<siri::dialogengine::Condition>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Condition>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSArray * entries; 
-(shared_ptr<siri::dialogengine::Condition>*)This;
-(void)setThis:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(void)addEntry:(id)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(id)init;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)getSharedPtr;
-(void)setName:(NSString *)arg1 ;
-(BOOL)validate:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(NSArray *)entries;
-(NSString *)name;
@end

