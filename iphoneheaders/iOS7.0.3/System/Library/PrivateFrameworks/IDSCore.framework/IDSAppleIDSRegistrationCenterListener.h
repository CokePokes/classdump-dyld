/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol IDSAppleIDSRegistrationCenterListener
@required
-(void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4;
-(void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;
-(void)center:(id)arg1 failedRegistration:(id)arg2 error:(int)arg3 info:(id)arg4;
-(void)center:(id)arg1 succeededRegistration:(id)arg2;
-(void)center:(id)arg1 allSucceededRegistrations:(id)arg2;
-(void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(int)arg3 info:(id)arg4;
-(void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;
@end

