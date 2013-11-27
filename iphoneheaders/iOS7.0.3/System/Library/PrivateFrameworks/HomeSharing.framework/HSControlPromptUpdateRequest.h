/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <HomeSharing/HSRequest.h>

@interface HSControlPromptUpdateRequest : HSRequest {

	unsigned _promptID;

}
+(id)requestWithInterfaceID:(unsigned)arg1 promptID:(unsigned)arg2 ;
-(BOOL)isConcurrent;
-(double)timeoutInterval;
-(id)initWithInterfaceID:(unsigned)arg1 promptID:(unsigned)arg2 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

