/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFPrivacyReportTrackingTableViewCell.h>

@class WBSTrackedFirstParty;

@interface SFPrivacyReportWebsiteTableViewCell : SFPrivacyReportTrackingTableViewCell {

	WBSTrackedFirstParty* _website;

}

@property (nonatomic,retain) WBSTrackedFirstParty * website;              //@synthesize website=_website - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WBSTrackedFirstParty *)website;
-(void)setWebsite:(WBSTrackedFirstParty *)arg1 ;
@end

