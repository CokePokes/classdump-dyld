/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob {

	NSArray* _albumCloudGUIDsToDelete;

}

@property (nonatomic,retain) NSArray * albumCloudGUIDsToDelete;              //@synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete - In the implementation block
+(void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)albumCloudGUIDsToDelete;
-(void)setAlbumCloudGUIDsToDelete:(id)arg1 ;
@end

