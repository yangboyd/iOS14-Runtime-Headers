/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol TUConversationManagerDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * conversationsByGroupUUID; 
@property (assign,nonatomic,__weak) id<TUConversationManagerDataSourceDelegate> delegate; 
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDataSourceDelegate> mediaDelegate; 
@required
-(void)registerWithCompletionHandler:(/*^block*/id)arg1;
-(void)buzzMember:(id)arg1 conversation:(id)arg2;
-(void)invalidate;
-(void)setMediaDelegate:(id)arg1;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
-(void)setDelegate:(id)arg1;
-(id<TUConversationManagerDataSourceDelegate>)delegate;
-(void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2;
-(NSDictionary *)conversationsByGroupUUID;
-(id<TUConversationMediaControllerDataSourceDelegate>)mediaDelegate;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2;

@end
