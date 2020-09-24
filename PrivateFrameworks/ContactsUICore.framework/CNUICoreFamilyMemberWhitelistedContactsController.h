/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberWhitelistedContactsDataSource.h>

@protocol CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsUpdating, CNSchedulerProvider, CNUICoreContactStoreFacade, CNCancelable;
@class NSArray, CNFuture, NSString;

@interface CNUICoreFamilyMemberWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource> {

	NSArray* _familyMemberContactItems;
	id<CNUICoreFamilyMemberContactsObserver> _observer;
	id<CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
	id<CNUICoreFamilyMemberContactsUpdating> _familyMemberContactsUpdator;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNUICoreContactStoreFacade> _familyMemberScopedContactStore;
	id<CNUICoreContactStoreFacade> _mainContactStoreFacade;
	CNFuture* _familyMemberContactItemsFuture;
	CNFuture* _addContactsToWhitelistFuture;
	CNFuture* _updateContactsInWhitelistFuture;
	CNFuture* _deleteContactsFromWhitelistFuture;
	id<CNCancelable> _contactStoreDidChangeToken;

}

@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher;                        //@synthesize modelFetcher=_modelFetcher - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsUpdating> familyMemberContactsUpdator;              //@synthesize familyMemberContactsUpdator=_familyMemberContactsUpdator - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                         //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> familyMemberScopedContactStore;                     //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> mainContactStoreFacade;                             //@synthesize mainContactStoreFacade=_mainContactStoreFacade - In the implementation block
@property (nonatomic,retain) NSArray * familyMemberContactItems;                                                  //@synthesize familyMemberContactItems=_familyMemberContactItems - In the implementation block
@property (nonatomic,retain) CNFuture * familyMemberContactItemsFuture;                                           //@synthesize familyMemberContactItemsFuture=_familyMemberContactItemsFuture - In the implementation block
@property (nonatomic,retain) CNFuture * addContactsToWhitelistFuture;                                             //@synthesize addContactsToWhitelistFuture=_addContactsToWhitelistFuture - In the implementation block
@property (nonatomic,retain) CNFuture * updateContactsInWhitelistFuture;                                          //@synthesize updateContactsInWhitelistFuture=_updateContactsInWhitelistFuture - In the implementation block
@property (nonatomic,retain) CNFuture * deleteContactsFromWhitelistFuture;                                        //@synthesize deleteContactsFromWhitelistFuture=_deleteContactsFromWhitelistFuture - In the implementation block
@property (nonatomic,readonly) id<CNCancelable> contactStoreDidChangeToken;                                       //@synthesize contactStoreDidChangeToken=_contactStoreDidChangeToken - In the implementation block
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer;                            //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) BOOL familyMemberContainerIsEmpty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactByRemovingSensitiveDataFromContact:(id)arg1 ;
+(id)propertyKeysContainingSenstiveData;
+(id)controllerWithFamilyMember:(id)arg1 options:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)dealloc;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(long long)fetchStatus;
-(void)setObserver:(id<CNUICoreFamilyMemberContactsObserver>)arg1 ;
-(NSArray *)familyMemberContactItems;
-(id<CNUICoreContactStoreFacade>)familyMemberScopedContactStore;
-(id)contactRepresentingItem:(id)arg1 ;
-(void)updateWhitelistByAddingContacts:(id)arg1 ;
-(void)updateWhitelistByRemovingContacts:(id)arg1 ;
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(BOOL)familyMemberContainerIsEmpty;
-(void)updateWhitelistByUpdatingContacts:(id)arg1 ;
-(void)finishWhitelistedContactsTasks;
-(id)initWithFamilyMember:(id)arg1 options:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)initWithModelFetcher:(id)arg1 familyMemberContactsUpdator:(id)arg2 familyMemberScopedContactStoreFacade:(id)arg3 mainContactStoreFacade:(id)arg4 schedulerProvider:(id)arg5 ;
-(void)setupChangeNotificationResponse;
-(void)triggerContactItemsFetch;
-(void)cancelContactItemsFetch;
-(CNFuture *)familyMemberContactItemsFuture;
-(id<CNUICoreFamilyMemberContactsModelFetching>)modelFetcher;
-(id)contactItemFutureFromFetcher;
-(void)setFamilyMemberContactItemsFuture:(CNFuture *)arg1 ;
-(void)setFamilyMemberContactItems:(NSArray *)arg1 ;
-(CNFuture *)addContactsToWhitelistFuture;
-(id<CNUICoreFamilyMemberContactsUpdating>)familyMemberContactsUpdator;
-(void)setAddContactsToWhitelistFuture:(CNFuture *)arg1 ;
-(CNFuture *)updateContactsInWhitelistFuture;
-(void)setUpdateContactsInWhitelistFuture:(CNFuture *)arg1 ;
-(CNFuture *)deleteContactsFromWhitelistFuture;
-(void)setDeleteContactsFromWhitelistFuture:(CNFuture *)arg1 ;
-(id<CNUICoreContactStoreFacade>)mainContactStoreFacade;
-(id<CNCancelable>)contactStoreDidChangeToken;
@end
