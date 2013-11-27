/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIWebSelectionBlock;
#import <UIKit/UIKit-Structs.h>
@class UIWebDocumentView, , UITextSelection;

@interface UIWebSelection : NSObject {

	UIWebDocumentView* _documentView;
	<UIWebSelectionBlock>* _base;
	<UIWebSelectionBlock>* _extent;
	CGSize _desiredSize;
	UITextSelection* _textSelection;

}

@property (nonatomic,readonly) UIWebDocumentView * documentView;              //@synthesize documentView=_documentView - In the implementation block
@property (nonatomic,readonly) UITextSelection * textSelection;               //@synthesize textSelection=_textSelection - In the implementation block
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,@dynamic,readonly) CGRect boundingRect; 
@property (assign,nonatomic) CGSize desiredSize;                              //@synthesize desiredSize=_desiredSize - In the implementation block
@property (getter=isTextOnly,nonatomic,readonly) BOOL textOnly; 
@property (nonatomic,retain) <UIWebSelectionBlock> * base;                    //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) <UIWebSelectionBlock> * extent;                  //@synthesize extent=_extent - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)extent;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(id)webView;
-(id)documentView;
-(void)selectionChanged;
-(id)textSelection;
-(id)webFrame;
-(id)textSelectionRects;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(id)initWithDocumentView:(id)arg1 ;
-(void)setSelectionWithPoint:(CGPoint)arg1 ignoringLargeBlocks:(BOOL)arg2 ;
-(BOOL)valid;
-(CGRect)boundingRect;
-(BOOL)isTextOnly;
-(CGRect)boundingTextSelectionRectAndInsideFixedPosition:(int*)arg1 ;
-(CGRect)boundingRectAndInsideFixedPosition:(int*)arg1 ;
-(BOOL)blockContainsPoint:(CGPoint)arg1 ;
-(id)base;
-(void)applySelectionToWebDocumentView;
-(void)setBase:(id)arg1 ;
-(void)setExtent:(id)arg1 ;
-(id)blockAtPoint:(CGPoint)arg1 ;
-(CGSize)desiredSize;
-(id)asDomRange;
-(id)webArchive;
-(void)shrinkSelectionFromPoint:(CGPoint)arg1 towardsPoint:(CGPoint)arg2 withNewRect:(CGRect)arg3 ;
-(void)growSelectionTowardsPoint:(CGPoint)arg1 ;
-(void)useBlock;
-(float)distanceBetweenFirstRect:(CGRect)arg1 second:(CGRect)arg2 edge:(int)arg3 ;
-(id)duplicate;
-(void)setDesiredSize:(CGSize)arg1 ;
-(BOOL)tryToShrinkToBaseAndExtent;
-(BOOL)isEqualToSelection:(id)arg1 ;
-(void)growFromEdge:(int)arg1 ;
-(void)shrinkFromEdge:(int)arg1 ;
-(id)domDocument;
-(id)blockOfSameWidthAtPoint:(CGPoint)arg1 ;
-(id)textRepresentation;
-(void)adjustSelectionFromPoint:(CGPoint)arg1 towardsPoint:(CGPoint)arg2 withNewRect:(CGRect)arg3 ;
-(void)moveEdge:(int)arg1 outwards:(BOOL)arg2 ;
-(CGRect)boundingTextSelectionRect;
@end

