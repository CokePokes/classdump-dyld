/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDate;

@interface MBServiceRestoreSession : NSObject {

	NSString* _backupUDID;
	unsigned _snapshotID;
	NSDate* _startDate;
	BOOL _finishing;
	BOOL _cancelled;

}

@property (nonatomic,retain) NSString * backupUDID;                           //@synthesize backupUDID=_backupUDID - In the implementation block
@property (assign,nonatomic) unsigned snapshotID;                             //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,getter=isFinishing,nonatomic) BOOL finishing;               //@synthesize finishing=_finishing - In the implementation block
@property (assign,getter=wasCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
+(id)currentRestoreSession;
+(void)clearCurrentRestoreSession;
+(id)restoreSessionWithPropertyList:(id)arg1 ;
-(BOOL)isFinishing;
-(void)setBackupUDID:(id)arg1 ;
-(void)setSnapshotID:(unsigned)arg1 ;
-(void)setFinishing:(BOOL)arg1 ;
-(void)saveAtPath:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)wasCancelled;
-(id)backupUDID;
-(unsigned)snapshotID;
-(id)startDate;
-(void)setStartDate:(id)arg1 ;
-(id)initWithPropertyList:(id)arg1 ;
@end

