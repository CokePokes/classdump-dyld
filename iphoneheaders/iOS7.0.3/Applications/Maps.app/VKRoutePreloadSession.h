/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VKRoutePreloadSession <NSObject>
@required
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(int)preloadStateForTile:(const GEOTileKey*)arg1;
-(void)getPreloadSetCoordinates:(SCD_Struct_Si10*)arg1 maxLength:(unsigned)arg2 actualLength:(unsigned*)arg3;
-(BOOL)fullDebuggingEnabled;
-(BOOL)loggingEnabled;
@end

