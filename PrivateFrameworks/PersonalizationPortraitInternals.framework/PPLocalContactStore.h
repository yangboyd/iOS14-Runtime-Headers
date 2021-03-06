/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>

@class PPContactStorage;

@interface PPLocalContactStore : NSObject <PPFeedbackAccepting> {

	PPContactStorage* _contactStorage;

}
+(id)defaultStore;
-(id)initWithStorage:(id)arg1 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)contactHandlesForTopics:(id)arg1 error:(id*)arg2 ;
-(id)rankedContactsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)contactsWithQuery:(id)arg1 error:(id*)arg2 ;
-(void)clearChangeHistoryForClient:(id)arg1 historyResult:(id)arg2 ;
-(id)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 ;
-(id)init;
-(BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)chineseBirthdayFound;
-(id)contactHandlesForSource:(id)arg1 error:(id*)arg2 ;
-(id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(id)arg3 error:(id*)arg4 ;
-(id)scoredContactsWithContacts:(id)arg1 ;
-(id)meCard;
-(id)contactsChangeHistoryForClient:(id)arg1 error:(id*)arg2 ;
@end

