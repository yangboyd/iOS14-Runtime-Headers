/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSUUID, NSDictionary, NSArray;

@interface ATXHomeScreenCachedSuggestions : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	NSUUID* _uuid;
	NSDictionary* _cachedSuggestionWidgetLayouts;
	NSDictionary* _cachedAppPredictionPanelLayouts;
	NSDictionary* _cachedStackLayouts;
	NSArray* _fallbackSuggestions;

}

@property (nonatomic,readonly) NSUUID * uuid;                                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedSuggestionWidgetLayouts;                //@synthesize cachedSuggestionWidgetLayouts=_cachedSuggestionWidgetLayouts - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedAppPredictionPanelLayouts;              //@synthesize cachedAppPredictionPanelLayouts=_cachedAppPredictionPanelLayouts - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedStackLayouts;                           //@synthesize cachedStackLayouts=_cachedStackLayouts - In the implementation block
@property (nonatomic,readonly) NSArray * fallbackSuggestions;                               //@synthesize fallbackSuggestions=_fallbackSuggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)protoForBiome;
-(id)encodeAsProto;
-(id)jsonRawData;
-(id)_protoLayoutsFromLayoutDictionary:(id)arg1 orderedByKeys:(id)arg2 ;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(NSArray *)fallbackSuggestions;
-(id)_jsonRawDataForWidgetLayoutMapping:(id)arg1 ;
-(id)_layoutDictionaryWithKeys:(id)arg1 protoLayouts:(id)arg2 ;
-(NSDictionary *)cachedAppPredictionPanelLayouts;
-(NSDictionary *)cachedStackLayouts;
-(id)init;
-(id)minSuggestionsInCachedSuggestionsWithoutPreviewsOrFallbacks;
-(id)initWithUUID:(id)arg1 suggestionWidgetLayouts:(id)arg2 appPredictionPanelLayouts:(id)arg3 stackLayouts:(id)arg4 fallbackSuggestions:(id)arg5 ;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)allSuggestionsInCachedSuggestions;
-(NSDictionary *)cachedSuggestionWidgetLayouts;
-(id)descriptionWithoutPreviews;
-(id)description;
@end

