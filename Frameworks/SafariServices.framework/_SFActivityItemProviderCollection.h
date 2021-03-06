/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFActivityItemProvider, WKWebView, _SFPrintActivityItemProvider;

@interface _SFActivityItemProviderCollection : NSObject {

	BOOL _displayingDigitalHealthLockoutView;
	BOOL _displayingStandaloneImage;
	BOOL _displayingStandaloneMedia;
	_SFActivityItemProvider* _standaloneImageProvider;
	_SFActivityItemProvider* _webArchiveProvider;
	WKWebView* _webView;
	_SFActivityItemProvider* _linkProvider;
	_SFPrintActivityItemProvider* _printProvider;
	_SFActivityItemProvider* _javaScriptExtensionProvider;
	_SFActivityItemProvider* _downloadProvider;

}

@property (nonatomic,readonly) WKWebView * webView;                                              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) _SFActivityItemProvider * standaloneImageProvider;                //@synthesize standaloneImageProvider=_standaloneImageProvider - In the implementation block
@property (nonatomic,readonly) _SFActivityItemProvider * webArchiveProvider;                     //@synthesize webArchiveProvider=_webArchiveProvider - In the implementation block
@property (assign,nonatomic) BOOL displayingDigitalHealthLockoutView;                            //@synthesize displayingDigitalHealthLockoutView=_displayingDigitalHealthLockoutView - In the implementation block
@property (assign,nonatomic) BOOL displayingStandaloneImage;                                     //@synthesize displayingStandaloneImage=_displayingStandaloneImage - In the implementation block
@property (assign,nonatomic) BOOL displayingStandaloneMedia;                                     //@synthesize displayingStandaloneMedia=_displayingStandaloneMedia - In the implementation block
@property (nonatomic,retain) _SFActivityItemProvider * linkProvider;                             //@synthesize linkProvider=_linkProvider - In the implementation block
@property (nonatomic,retain) _SFPrintActivityItemProvider * printProvider;                       //@synthesize printProvider=_printProvider - In the implementation block
@property (nonatomic,retain) _SFActivityItemProvider * javaScriptExtensionProvider;              //@synthesize javaScriptExtensionProvider=_javaScriptExtensionProvider - In the implementation block
@property (nonatomic,retain) _SFActivityItemProvider * downloadProvider;                         //@synthesize downloadProvider=_downloadProvider - In the implementation block
-(WKWebView *)webView;
-(BOOL)displayingStandaloneImage;
-(void)setDisplayingStandaloneImage:(BOOL)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(_SFActivityItemProvider *)linkProvider;
-(_SFActivityItemProvider *)javaScriptExtensionProvider;
-(_SFActivityItemProvider *)standaloneImageProvider;
-(_SFPrintActivityItemProvider *)printProvider;
-(_SFActivityItemProvider *)downloadProvider;
-(BOOL)displayingDigitalHealthLockoutView;
-(_SFActivityItemProvider *)webArchiveProvider;
-(id)activityItemProvidersWithCustomizationController:(id)arg1 ;
-(void)setDisplayingDigitalHealthLockoutView:(BOOL)arg1 ;
-(BOOL)displayingStandaloneMedia;
-(void)setDisplayingStandaloneMedia:(BOOL)arg1 ;
-(void)setLinkProvider:(_SFActivityItemProvider *)arg1 ;
-(void)setPrintProvider:(_SFPrintActivityItemProvider *)arg1 ;
-(void)setJavaScriptExtensionProvider:(_SFActivityItemProvider *)arg1 ;
-(void)setDownloadProvider:(_SFActivityItemProvider *)arg1 ;
@end

