/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol StarkNavigationStartupDelegate <NSObject>
@optional
-(BOOL)navigationStartupSession:(id)arg1 shouldPresentError:(id)arg2;

@required
-(void)navigationStartupSession:(id)arg1 willRouteFromWaypoint:(id)arg2 toWaypoint:(id)arg3;
-(void)navigationStartupSession:(id)arg1 didFinishWithError:(id)arg2;
@end

