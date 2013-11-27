/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SUManagerClientInterface
@required
-(void)downloadDidFinish:(id)arg1;
-(void)scanRequestDidStartForOptions:(id)arg1;
-(void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
-(void)downloadDidStart:(id)arg1;
-(void)downloadProgressDidChange:(id)arg1;
-(void)downloadDidFail:(id)arg1 withError:(id)arg2;
-(void)installDidStart:(id)arg1;
-(void)installDidFail:(id)arg1 withError:(id)arg2;
-(void)installDidFinish:(id)arg1;
@end

