/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface EARKeywordFinder : NSObject {

	unique_ptr<quasar::KeywordFinder, std::__1::default_delete<quasar::KeywordFinder> >* _kwf;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(id)correctedResultWithKeyword:(id)arg1 tokenizedKeyword:(id)arg2 preItnSausage:(id)arg3 preItnOneBest:(id)arg4 preItnOneBestIndices:(id)arg5 nbestSize:(long long)arg6 ;
@end

