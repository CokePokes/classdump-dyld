/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CMArchiveManager.h>

@class NSMutableString, NSMutableDictionary, NSString;

@interface CMDictArchiveManager : CMArchiveManager {

	NSMutableString* mCssString;
	NSMutableDictionary* mStyleCache;
	NSMutableDictionary* mResources;
	NSString* mPrefix;
	NSString* mResourceUrlProtocol;
	NSMutableString* mMainHtml;
	NSString* mName;
	bool mIsFrameset;

}
-(void)dealloc;
-(id)name;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(id)copyResourceWithName:(id)arg1 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(int)resourceCount;
-(id)addCssStyle:(id)arg1 ;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2 ;
-(void)setIsFrameset;
-(id)copyDictionaryWithSizeInfos:(BOOL)arg1 ;
-(id)resourceUrlProtocol;
@end

