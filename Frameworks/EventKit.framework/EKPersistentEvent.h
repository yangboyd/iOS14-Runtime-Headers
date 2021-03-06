/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentEvent : EKPersistentCalendarItem
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(id)eventWithRandomUUID;
-(void)setTravelTime:(id)arg1 ;
-(long long)availability;
-(int)entityType;
-(id)travelTime;
-(id)proposedStartDate;
-(void)setEndDateRaw:(id)arg1 ;
-(void)setFiredTTL:(BOOL)arg1 ;
-(id)birthdayContactName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)conferenceURL;
-(BOOL)canForward;
-(long long)travelAdvisoryBehavior;
-(void)setProposedStartDate:(id)arg1 ;
-(id)participationStatusModifiedDate;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setStatus:(long long)arg1 ;
-(unsigned)invitationChangedProperties;
-(id)actions;
-(void)setBirthdayContactIdentifier:(id)arg1 ;
-(void)setCanForward:(BOOL)arg1 ;
-(id)recurrenceSet;
-(void)setBirthdayID:(id)arg1 ;
-(unsigned long long)junkStatus;
-(id)originalStartDate;
-(BOOL)firedTTL;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(BOOL)pushDirtyProperties:(id*)arg1 ;
-(void)setConferenceURL:(id)arg1 ;
-(long long)status;
-(void)setLocationPredictionState:(long long)arg1 ;
-(void)setSuggestionInfo:(id)arg1 ;
-(id)birthdayID;
-(id)birthdayContactIdentifier;
-(id)endDate;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(void)setDisallowProposeNewTime:(BOOL)arg1 ;
-(id)organizer;
-(void)setBirthdayContactName:(id)arg1 ;
-(id)suggestionInfo;
-(long long)locationPredictionState;
-(id)endDateRaw;
-(void)setPrivacyLevel:(long long)arg1 ;
-(void)setJunkStatus:(unsigned long long)arg1 ;
-(void)setActions:(id)arg1 ;
-(void)setInvitationChangedProperties:(unsigned)arg1 ;
-(void)setResponseComment:(id)arg1 ;
-(void)setExternalTrackingStatus:(int)arg1 ;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(void)setAvailability:(long long)arg1 ;
-(void)setOriginalStartDate:(id)arg1 ;
-(long long)privacyLevel;
-(unsigned long long)invitationStatus;
-(BOOL)disallowProposeNewTime;
-(id)description;
-(id)responseComment;
-(void)setParticipationStatusModifiedDate:(id)arg1 ;
-(int)externalTrackingStatus;
-(void)setEndDate:(id)arg1 ;
-(void)setRecurrenceSet:(id)arg1 ;
@end

