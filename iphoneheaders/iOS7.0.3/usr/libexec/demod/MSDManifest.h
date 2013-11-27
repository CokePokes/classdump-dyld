/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSString, MSDProgressUpdater, NSSet, NSDictionary;

@interface MSDManifest : NSObject {

	NSMutableDictionary* _dict;
	NSString* _rootPath;
	MSDProgressUpdater* _progressUpdater;

}

@property (getter=pathSet,readonly) NSSet * pathSet; 
@property (retain) NSString * rootPath;                               //@synthesize rootPath=_rootPath - In the implementation block
@property (retain) NSDictionary * dict;                               //@synthesize dict=_dict - In the implementation block
@property (retain) MSDProgressUpdater * progressUpdater;              //@synthesize progressUpdater=_progressUpdater - In the implementation block
-(id)progressUpdater;
-(long long)calculateTotalFileSize:(id)arg1 ;
-(void)setMetadata:(id)arg1 forFile:(id)arg2 ;
-(id)metadataForFile:(id)arg1 ;
-(BOOL)addFilesFromPath:(id)arg1 relativeTo:(id)arg2 ;
-(id)pathSet;
-(void)setRootPath:(id)arg1 ;
-(void)setProgressUpdater:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)rootPath;
-(void)setDict:(id)arg1 ;
-(id)dict;
-(void).cxx_destruct;
@end

