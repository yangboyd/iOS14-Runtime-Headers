/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSURL, NSString;

@interface CLSArchivedAsset : CLSObject <CLSRelationable> {

	NSURL* _url;
	BOOL _uploaded;
	BOOL _addedToFilePresenter;
	BOOL _shared;
	long long _totalUnitCount;
	long long _completedUnitCount;
	NSString* _ownerPersonID;
	NSString* _brItemID;
	NSString* _brOwnerName;
	NSString* _brZoneName;
	NSString* _brShareName;
	NSString* _ubiquitousContainerName;
	NSString* _relativePathWithinContainer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * ownerPersonID;                            //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,retain) NSString * brItemID;                                 //@synthesize brItemID=_brItemID - In the implementation block
@property (nonatomic,retain) NSString * brOwnerName;                              //@synthesize brOwnerName=_brOwnerName - In the implementation block
@property (nonatomic,retain) NSString * brZoneName;                               //@synthesize brZoneName=_brZoneName - In the implementation block
@property (nonatomic,retain) NSString * brShareName;                              //@synthesize brShareName=_brShareName - In the implementation block
@property (nonatomic,retain) NSString * ubiquitousContainerName;                  //@synthesize ubiquitousContainerName=_ubiquitousContainerName - In the implementation block
@property (nonatomic,retain) NSString * relativePathWithinContainer;              //@synthesize relativePathWithinContainer=_relativePathWithinContainer - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)_init;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ownerPersonID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSString *)brItemID;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(NSString *)brZoneName;
-(NSString *)brOwnerName;
-(void)urlSuitableForOpeningWithCompletion:(/*^block*/id)arg1 ;
-(void)setBrItemID:(NSString *)arg1 ;
-(void)setBrOwnerName:(NSString *)arg1 ;
-(void)setBrZoneName:(NSString *)arg1 ;
-(NSString *)brShareName;
-(void)setBrShareName:(NSString *)arg1 ;
-(NSString *)ubiquitousContainerName;
-(void)setUbiquitousContainerName:(NSString *)arg1 ;
-(NSString *)relativePathWithinContainer;
-(void)setRelativePathWithinContainer:(NSString *)arg1 ;
@end
