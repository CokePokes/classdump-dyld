/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/BulletinBoardPlugins/PassesBulletinBoardPlugin.bundle/PassesBulletinBoardPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BBDataProvider.h>

@class NSString, NSData;

@interface WLBulletinBoardDataProvider : NSObject <BBDataProvider> {

	NSString* _sectionIdentifier;
	NSString* _sectionDisplayName;
	NSData* _sectionIconData;

}

@property (copy) NSString * sectionIdentifier;               //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (copy) NSString * sectionDisplayName;              //@synthesize sectionDisplayName=_sectionDisplayName - In the implementation block
@property (retain) NSData * sectionIconData;                 //@synthesize sectionIconData=_sectionIconData - In the implementation block
+(id)dataProviderWithSectionInfo:(id)arg1 ;
-(id)initWithSectionInfo:(id)arg1 ;
-(void)setSectionIconData:(id)arg1 ;
-(void)dealloc;
-(id)sectionIdentifier;
-(void)setSectionIdentifier:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
-(id)sectionDisplayName;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sectionIconData;
-(void)setSectionDisplayName:(id)arg1 ;
-(id)sortDescriptors;
@end

