/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SUDownloadPolicy <NSObject>
@property (nonatomic,retain) SUDescriptor * descriptor; 
@required
-(BOOL)isDownloadable;
-(void)setDescriptor:(id)arg1;
-(id)descriptor;
-(BOOL)isDownloadFreeForCellular;
-(BOOL)isPowerRequired;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)isSamePolicy:(id)arg1;
-(BOOL)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3;
-(BOOL)hasEnoughDiskSpace;
-(id)initWithDescriptor:(id)arg1;
-(BOOL)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(BOOL*)arg2;
@end

