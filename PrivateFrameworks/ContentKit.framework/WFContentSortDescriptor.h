/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class WFContentProperty, NSSet;

@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer> {

	BOOL _ascending;
	WFContentProperty* _property;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) WFContentProperty * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) id comparator;                        //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)sortDescriptorWithProperty:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
+(id)randomSortDescriptor;
-(WFContentProperty *)property;
-(BOOL)ascending;
-(id)comparator;
-(id)description;
-(NSSet *)containedProperties;
-(id)initWithProperty:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
@end
