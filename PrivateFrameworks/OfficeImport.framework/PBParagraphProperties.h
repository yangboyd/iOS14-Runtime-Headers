/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBParagraphProperties : NSObject
+(void)readAlign:(id)arg1 pptAlignmentType:(int)arg2 ;
+(short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2 ;
+(int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1 ;
+(int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1 ;
+(void)readParagraphProperties:(id)arg1 paragraphProperty:(PptParaProperty*)arg2 bulletStyle:(PptParaProperty9*)arg3 isMaster:(BOOL)arg4 state:(id)arg5 ;
+(void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(PptParaRun*)arg2 bulletStyle:(PptParaProperty9*)arg3 state:(id)arg4 ;
@end

