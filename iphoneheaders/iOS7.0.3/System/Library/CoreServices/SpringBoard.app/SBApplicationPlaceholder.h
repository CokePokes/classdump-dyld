/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBLeafIconDataSource.h>

@class LSApplicationProxy, NSString, NSProgress, NSMutableDictionary, NSMutableSet;

@interface SBApplicationPlaceholder : NSObject <SBLeafIconDataSource> {

	LSApplicationProxy* _appProxy;
	NSString* _applicationBundleID;
	NSString* _applicationDisplayName;
	NSProgress* _progress;
	double _fractionProgress;
	BOOL _installing;
	BOOL _isNewsstand;
	BOOL _observingKVO;
	unsigned _installType;
	BOOL _invalidated;
	NSMutableDictionary* _generatedIconImagesByKey;
	NSMutableSet* _formatsPendingGeneration;

}

@property (nonatomic,retain) LSApplicationProxy * appProxy;                //@synthesize appProxy=_appProxy - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;                 //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,copy) NSString * applicationDisplayName;              //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
+(id)backgroundQueue;
-(id)appProxy;
-(void)setAppProxy:(id)arg1 ;
-(id)initWithProxy:(id)arg1 ;
-(id)icon:(id)arg1 imageWithFormat:(int)arg2 ;
-(id)applicationBundleID;
-(id)iconFormattedAccessoryString:(id)arg1 ;
-(unsigned)iconPriority:(id)arg1 ;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2 ;
-(BOOL)iconCanEllipsizeLabel:(id)arg1 ;
-(BOOL)iconAppearsInNewsstand:(id)arg1 ;
-(int)iconProgressState:(id)arg1 ;
-(float)iconProgressPercent:(id)arg1 ;
-(BOOL)iconProgressIsPaused:(id)arg1 ;
-(id)iconBadgeNumberOrString:(id)arg1 ;
-(int)iconAccessoryType:(id)arg1 ;
-(BOOL)iconIsRecentlyUpdated:(id)arg1 ;
-(BOOL)iconAllowsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(BOOL)iconAllowsLaunch:(id)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(int)arg2 ;
-(id)fetchIconImageWithFormat:(int)arg1 ;
-(id)applicationDisplayName;
-(void)setApplicationProxy:(id)arg1 ;
-(void)_removeKVOObserversForProgress;
-(BOOL)isInstalling;
-(void)_progressMayHaveChanged;
-(void)setApplicationBundleID:(id)arg1 ;
-(void)setApplicationDisplayName:(id)arg1 ;
-(void)noteDownloadStatusChanged;
-(void)_reloadThumbnailImage;
-(id)_getOrGenerateIconImageWithFormat:(int)arg1 ;
-(void)_addKVOObserversForProgress;
-(void)_progressChanged;
-(id)_iconImageKeyForBundleID:(id)arg1 format:(int)arg2 ;
-(void)_generateIconImageWithFormat:(int)arg1 ;
-(int)_newsstandImageOptions;
-(void)_generatePendingIconFormats;
-(BOOL)_shouldDisplayAppName;
-(id)_downloadingLabel;
-(id)_defaultIconImageWithFormat:(int)arg1 ;
-(void)_prioritize;
-(void)iconChanged;
-(id)iconDisplayName:(id)arg1 ;
-(BOOL)isDownloading;
-(BOOL)isFailed;
-(BOOL)isPausable;
-(BOOL)isPaused;
-(unsigned)installType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isActive;
-(void)invalidate;
-(void)cancel;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(BOOL)isDone;
-(id)proxy;
-(BOOL)isNewsstand;
-(BOOL)isCancelable;
-(BOOL)isContentRestricted;
@end

