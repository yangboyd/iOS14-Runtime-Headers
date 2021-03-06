/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ETLossDefinition : NSObject {

	NSString* _inputName;
	NSString* _targetInputName;
	NSString* _lossOutputName;
	unsigned long long _mode;
	NSString* _outputName;

}

@property (retain) NSString * outputName;                     //@synthesize outputName=_outputName - In the implementation block
@property (readonly) NSString * inputName;                    //@synthesize inputName=_inputName - In the implementation block
@property (readonly) NSString * targetInputName;              //@synthesize targetInputName=_targetInputName - In the implementation block
@property (readonly) NSString * lossOutputName;               //@synthesize lossOutputName=_lossOutputName - In the implementation block
@property (readonly) unsigned long long mode;                 //@synthesize mode=_mode - In the implementation block
+(id)BuiltInLoss:(id)arg1 ;
+(id)L2LossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3 ;
+(id)crossEntropyLossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3 ;
-(unsigned long long)mode;
-(NSString *)lossOutputName;
-(NSString *)inputName;
-(NSString *)targetInputName;
-(id)initWithMode:(unsigned long long)arg1 inputName:(id)arg2 targetName:(id)arg3 lossOutputName:(id)arg4 ;
-(NSString *)outputName;
-(void)setOutputName:(NSString *)arg1 ;
@end

