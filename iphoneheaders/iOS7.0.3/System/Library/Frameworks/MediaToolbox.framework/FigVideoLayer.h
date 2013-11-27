/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/CALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer {

	FigVideoLayerInternal* _videoLayer;

}
-(BOOL)isVideoLayerBeingServiced;
-(void)notificationBarrier;
-(id)layerDisplayName;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithLayer:(id)arg1 ;
-(void)finalize;
@end

