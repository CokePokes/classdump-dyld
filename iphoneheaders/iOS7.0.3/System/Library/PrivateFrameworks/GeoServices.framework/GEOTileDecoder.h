/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GEOTileDecoder <NSObject>
@required
-(BOOL)canDecodeTile:(const GEOTileKey*)arg1 quickly:(BOOL*)arg2;
-(id)decodeTile:(id)arg1 forKey:(const GEOTileKey*)arg2;
@end

