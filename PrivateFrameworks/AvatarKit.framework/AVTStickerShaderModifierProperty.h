/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCNMaterialProperty;

@interface AVTStickerShaderModifierProperty : NSObject {

	NSString* _name;
	NSString* _type;
	id _value;
	id _originalValue;
	SCNMaterialProperty* _materialProperty;

}

@property (nonatomic,retain) id originalValue;                                      //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,readonly) SCNMaterialProperty * materialProperty;              //@synthesize materialProperty=_materialProperty - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                                            //@synthesize value=_value - In the implementation block
+(id)shaderModifierPropertyCache;
+(id)shaderModifierPropertyFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
-(id)originalValue;
-(void)setOriginalValue:(id)arg1 ;
-(NSString *)type;
-(id)value;
-(NSString *)name;
-(id)dictionaryWithTargetPath:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(id)arg2 value:(id)arg3 originalValue:(id)arg4 ;
-(SCNMaterialProperty *)materialProperty;
@end

