/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UserFSVolume <NSObject>
@property (nonatomic,readonly) NSString * deviceName; 
@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@required
-(id)rootDirectory;
-(BOOL)flush;
-(BOOL)isLocked;
-(BOOL)close;
-(id)itemAtPath:(id)arg1;
-(BOOL)deleteFiles:(id)arg1;
-(id)deviceName;
@end

