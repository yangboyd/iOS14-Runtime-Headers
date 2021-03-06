/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNewsletterManager.h>

@protocol FCNewsletterManager <NSObject>
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long activeNewsletter; 
@property (nonatomic,readonly) long long subscription; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL canSubscribe; 
@property (nonatomic,readonly) BOOL canUnsubscribe; 
@required
-(long long)subscription;
-(id)updateSubscription;
-(void)addObserver:(id)arg1;
-(void)unsubscribe;
-(void)deletePersonalizationVector;
-(void)removeObserver:(id)arg1;
-(void)notifyObservers;
-(BOOL)isSubscribed;
-(BOOL)canSubscribe;
-(BOOL)enabled;
-(void)subscribe;
-(void)subscribeTo:(long long)arg1;
-(long long)activeNewsletter;
-(void)submitPersonalizationVector:(id)arg1;
-(long long)subscriptionStatusForNewsletter:(long long)arg1;
-(void)updateCacheWithNewsletterString:(id)arg1;
-(BOOL)shouldSubmitPersonalizationVector;
-(BOOL)canUnsubscribe;
-(id)forceUpdateSubscription;
-(BOOL)canSubscribeToNewsletter:(long long)arg1;

@end

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCAppleAccountObserver.h>

@protocol FCAppleAccount, FCNewsAppConfigurationManager;
@class FCNewsletterEndpointConnection, FCCommandQueue, NSHashTable, NSDate, NFPromise, NSString;

@interface FCNewsletterManager : NSObject <FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver> {

	long long _subscription;
	FCNewsletterEndpointConnection* _endpointConnection;
	FCCommandQueue* _endpointCommandQueue;
	id<FCAppleAccount> _appleAccount;
	id<FCNewsAppConfigurationManager> _appConfig;
	NSHashTable* _observers;
	NSDate* _cacheExpiration;
	NFPromise* _updateSubscriptionPromise;
	NSString* _cachedVector;

}

@property (assign,nonatomic) long long subscription;                                             //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,readonly) FCNewsletterEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * endpointCommandQueue;                            //@synthesize endpointCommandQueue=_endpointCommandQueue - In the implementation block
@property (nonatomic,readonly) id<FCAppleAccount> appleAccount;                                  //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfig;                      //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSDate * cacheExpiration;                                           //@synthesize cacheExpiration=_cacheExpiration - In the implementation block
@property (nonatomic,retain) NFPromise * updateSubscriptionPromise;                              //@synthesize updateSubscriptionPromise=_updateSubscriptionPromise - In the implementation block
@property (nonatomic,retain) NSString * cachedVector;                                            //@synthesize cachedVector=_cachedVector - In the implementation block
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long activeNewsletter; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL canSubscribe; 
@property (nonatomic,readonly) BOOL canUnsubscribe; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSubscription:(long long)arg1 ;
-(long long)subscription;
-(void)setUpdateSubscriptionPromise:(NFPromise *)arg1 ;
-(NSHashTable *)observers;
-(id)updateSubscription;
-(void)addObserver:(id)arg1 ;
-(void)unsubscribe;
-(void)deletePersonalizationVector;
-(void)activityObservingApplicationDidBecomeActive;
-(void)removeObserver:(id)arg1 ;
-(void)notifyObservers;
-(BOOL)isSubscribed;
-(NFPromise *)updateSubscriptionPromise;
-(FCCommandQueue *)endpointCommandQueue;
-(BOOL)canSubscribe;
-(BOOL)enabled;
-(void)subscribe;
-(NSDate *)cacheExpiration;
-(void)notifyObserversWithPreviousSubscription:(long long)arg1 ;
-(void)subscribeTo:(long long)arg1 ;
-(long long)activeNewsletter;
-(void)submitPersonalizationVector:(id)arg1 ;
-(void)appleAccountChanged;
-(id)initWithEndpointConnection:(id)arg1 endpointCommandQueue:(id)arg2 appleAccount:(id)arg3 appConfig:(id)arg4 ;
-(FCNewsletterEndpointConnection *)endpointConnection;
-(long long)subscriptionStatusForNewsletter:(long long)arg1 ;
-(void)updateCacheWithNewsletterString:(id)arg1 ;
-(id<FCAppleAccount>)appleAccount;
-(void)setCachedVector:(NSString *)arg1 ;
-(id<FCNewsAppConfigurationManager>)appConfig;
-(BOOL)shouldSubmitPersonalizationVector;
-(BOOL)canUnsubscribe;
-(NSString *)cachedVector;
-(double)cacheTimeout;
-(id)forceUpdateSubscription;
-(BOOL)canSubscribeToNewsletter:(long long)arg1 ;
-(void)setCacheExpiration:(NSDate *)arg1 ;
@end

