/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <HomeSharing/HSRequest.h>

@interface HSCloudArtworkInfoRequest : HSRequest
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 ;
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 sessionID:(unsigned)arg3 ;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 sessionID:(unsigned)arg3 ;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

