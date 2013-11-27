/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIWebFindOnPageHighlighter.h>

@protocol UIWebFindOnPageHighlighterDelegate;
@class NSString, NSMutableArray, NSArray, UIView, UIWebDocumentView, UIScrollView, ;

@interface NotesFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {

	NSMutableArray* _highlightBubbleViews;
	NSArray* _pdfHighlightViews;
	UIView* _highlightHostView;
	UIWebDocumentView* _documentView;
	UIScrollView* _scrollView;
	NSString* _searchText;
	<UIWebFindOnPageHighlighterDelegate>* _delegate;
	unsigned _numberOfMatches;
	unsigned _highlightedMatchIndex;

}

@property (nonatomic,readonly) NSString * searchText;                                      //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) <UIWebFindOnPageHighlighterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned numberOfMatches;                                   //@synthesize numberOfMatches=_numberOfMatches - In the implementation block
@property (nonatomic,readonly) unsigned highlightedMatchIndex;                             //@synthesize highlightedMatchIndex=_highlightedMatchIndex - In the implementation block
+(BOOL)expandedRectsWouldIntersect:(id)arg1 ;
-(BOOL)hasActiveHighlights;
-(void)fadeOutFinished;
-(id)initWithDocumentView:(id)arg1 inScrollView:(id)arg2 ;
-(void)clearSelectionAnimated:(BOOL)arg1 ;
-(void)_clearHighlightViews:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)searchText;
-(BOOL)updateHighlightBubbleWobble:(BOOL)arg1 ;
-(void)_clearHighlightViews;
-(void)_addContentViewAtIndex:(unsigned)arg1 withRect:(CGRect)arg2 ;
-(void)_setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentImage:(CGImageRef)arg3 contentViews:(id)arg4 wobble:(BOOL)arg5 ;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentImage:(CGImageRef)arg3 wobble:(BOOL)arg4 ;
-(unsigned)findOnPageOptions;
-(void)_updateHighlightedMatchIndex:(BOOL)arg1 ;
-(BOOL)_highlightSelection;
-(void)_highlightFindOnPageMatch:(BOOL)arg1 ;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned)arg2 ;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4 ;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(unsigned)numberOfMatches;
-(unsigned)highlightedMatchIndex;
-(void).cxx_destruct;
@end

