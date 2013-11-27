/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/SLRequest.h>

@interface SLInternalTencentWeiboRequest : SLRequest {

	BOOL _shouldSign;

}

@property (assign) BOOL shouldSign;              //@synthesize shouldSign=_shouldSign - In the implementation block
-(BOOL)shouldSign;
-(id)signedTencentRequestFromRequest:(id)arg1 ;
-(void)_addAuthenticationParameters:(id)arg1 ;
-(void)setShouldSign:(BOOL)arg1 ;
-(void)performRequestWithHandler:(/*^block*/ id)arg1 ;
@end

