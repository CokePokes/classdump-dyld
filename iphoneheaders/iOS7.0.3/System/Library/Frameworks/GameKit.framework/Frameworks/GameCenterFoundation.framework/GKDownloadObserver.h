/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/SSDownloadManagerObserver.h>

@class SSDownloadManager;

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _downloadManager;

}

@property (retain) SSDownloadManager * downloadManager;              //@synthesize downloadManager=_downloadManager - In the implementation block
+(id)sharedObserver;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(BOOL)isDownloadingGame:(id)arg1 ;
-(void)setDownloadManager:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)downloadManager;
@end

