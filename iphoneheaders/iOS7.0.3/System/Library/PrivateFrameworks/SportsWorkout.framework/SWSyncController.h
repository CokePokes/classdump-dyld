/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsWorkout/SWSyncServiceConnectionDelegate.h>
#import <SportsWorkout/SWGeneratePINConnectionDelegate.h>
#import <SportsWorkout/SWSyncWorkoutConnectionDelegate.h>
#import <SportsWorkout/SWPINStatusConnectionDelegate.h>
#import <SportsWorkout/SWGenerateTokenConnectionDelegate.h>
#import <SportsWorkout/SWSyncCompleteConnectionDelegate.h>

@protocol SWSyncControllerDelegate;
@class , SWSyncHost, SWSyncServiceConnection, NSMutableArray, NSString;

@interface SWSyncController : NSObject <SWSyncServiceConnectionDelegate, SWGeneratePINConnectionDelegate, SWSyncWorkoutConnectionDelegate, SWPINStatusConnectionDelegate, SWGenerateTokenConnectionDelegate, SWSyncCompleteConnectionDelegate> {

	int _attemptedUploadCount;
	int _uploadCount;
	<SWSyncControllerDelegate>* _syncDelegate;
	SWSyncHost* _syncHost;
	SWSyncServiceConnection* _currentSyncConnection;
	NSMutableArray* _empedDirectoriesToSync;
	NSMutableArray* _workoutFilesToSync;
	NSString* _syncPin;
	NSString* _currentlySyncingWorkoutFilePath;
	NSString* _baseDirectoryPath;
	BOOL _shouldMoveFilesToSynchedDirectoryWhenDone;

}

@property (assign,nonatomic) BOOL shouldMoveFilesToSynchedDirectoryWhenDone;              //@synthesize shouldMoveFilesToSynchedDirectoryWhenDone=_shouldMoveFilesToSynchedDirectoryWhenDone - In the implementation block
@property (assign,nonatomic) <SWSyncControllerDelegate> * syncDelegate;                   //@synthesize syncDelegate=_syncDelegate - In the implementation block
@property (assign,nonatomic) int uploadCount;                                             //@synthesize uploadCount=_uploadCount - In the implementation block
+(BOOL)takeSyncInProgressFileLock:(BOOL)arg1 ;
+(void)releaseSyncInProgressFileLock;
-(id)initWithBaseDirectoryPath:(id)arg1 ;
-(void)visitNikeWebSite;
-(void)syncAllWorkouts;
-(void)connection:(id)arg1 didGeneratePIN:(id)arg2 ;
-(void)connection:(id)arg1 didConfirmEmail:(id)arg2 screenName:(id)arg3 ;
-(void)connection:(id)arg1 didReplaceOldPINWithNewPIN:(id)arg2 ;
-(void)connectionDidReturnStatusUnconfirmed:(id)arg1 ;
-(void)connectionDidReturnStatusInvalid:(id)arg1 ;
-(void)connection:(id)arg1 didGenerateToken:(id)arg2 ;
-(void)connectionDidCompleteSync:(id)arg1 ;
-(void)connectionDidSyncWorkout:(id)arg1 ;
-(void)_syncNextWorkout;
-(void)_syncWorkoutsForNextEmpedDirectory;
-(id)_syncHost;
-(BOOL)shouldMoveFilesToSynchedDirectoryWhenDone;
-(void)setShouldMoveFilesToSynchedDirectoryWhenDone:(BOOL)arg1 ;
-(int)uploadCount;
-(void)setUploadCount:(int)arg1 ;
-(unsigned)unsyncedWorkoutsCount;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setSyncDelegate:(id)arg1 ;
-(id)syncDelegate;
@end

