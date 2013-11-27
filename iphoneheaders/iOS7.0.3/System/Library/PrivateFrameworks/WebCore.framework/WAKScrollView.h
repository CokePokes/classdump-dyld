/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>
#import <WebCore/WebCoreFrameScrollView.h>

@class WAKView, WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {

	WAKView* _documentView;
	WAKClipView* _contentView;
	id _delegate;
	CGPoint _scrollOrigin;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)contentView;
-(void)scrollWheel:(id)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(id)documentView;
-(id).cxx_construct;
-(BOOL)drawsBackground;
-(void)setDocumentView:(id)arg1 ;
-(void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3 ;
-(void)scrollingModes:(int*)arg1 vertical:(int*)arg2 ;
-(CGRect)actualDocumentVisibleRect;
-(CGRect)documentVisibleExtent;
-(void)setActualScrollPosition:(CGPoint)arg1 ;
-(CGRect)documentVisibleRect;
-(void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2 ;
-(CGPoint)scrollOrigin;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3 ;
-(BOOL)_selfHandleEvent:(id)arg1 ;
-(void)setHasVerticalScroller:(BOOL)arg1 ;
-(BOOL)hasVerticalScroller;
-(void)setHasHorizontalScroller:(BOOL)arg1 ;
-(BOOL)hasHorizontalScroller;
-(void)setLineScroll:(float)arg1 ;
-(float)verticalLineScroll;
-(float)horizontalLineScroll;
-(void)reflectScrolledClipView:(id)arg1 ;
-(void)setHorizontalScrollingMode:(int)arg1 ;
-(void)setVerticalScrollingMode:(int)arg1 ;
-(void)setScrollingMode:(int)arg1 ;
-(int)horizontalScrollingMode;
-(int)verticalScrollingMode;
-(BOOL)inProgrammaticScroll;
-(void)_adjustScrollers;
@end

