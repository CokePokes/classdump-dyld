/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/BulletinBoardPlugins/CMASBBPlugin.bundle/CMASBBPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BBDataProvider.h>

@class NSMutableArray, NSArray, BBSectionParameters, BBSectionInfo, NSMutableDictionary, NSString;

@interface CMASBBPlugin : NSObject <BBDataProvider> {

	NSMutableArray* _alerts;
	NSArray* _sortDescriptors;
	BBSectionParameters* _sectionParameters;
	BBSectionInfo* _sectionInfo;
	NSMutableDictionary* _toneMap;
	NSString* _sectionIdentifier;

}
-(void)_registerCMASToneWithURL:(id)arg1 ;
-(id)_placeholderVibe;
-(BOOL)_saveBulletins;
-(id)_priorAlertsDirectory;
-(id)_priorAlertsURL;
-(void)_populatePriorBulletins;
-(void)_cellBroadcastMessageReceived:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(id)sectionDisplayName;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sortDescriptors;
@end

