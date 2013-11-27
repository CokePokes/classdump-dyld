/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSData, NSString, NSDictionary;

@interface TRNowPlayingArtworkUpdatePacketEvent : TRPacketEvent {

	NSData* _artworkData;
	NSString* _artworkMIMEType;
	NSDictionary* _nowPlayingInfo;

}

@property (nonatomic,readonly) NSData * artworkData;                       //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,readonly) NSString * artworkMIMEType;                 //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
@property (nonatomic,readonly) NSDictionary * nowPlayingInfo;              //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
+(unsigned)_packetEventType;
-(id)artworkMIMEType;
-(id)nowPlayingInfo;
-(id)description;
-(id)artworkData;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initArtworkData:(id)arg1 artworkMIMEType:(id)arg2 nowPlayingInfo:(id)arg3 ;
-(void).cxx_destruct;
@end

