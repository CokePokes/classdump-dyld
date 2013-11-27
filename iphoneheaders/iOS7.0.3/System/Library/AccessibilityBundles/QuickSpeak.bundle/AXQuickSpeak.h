/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickSpeak/QuickSpeak-Structs.h>
#import <WebCore/AVSpeechSynthesizerDelegate.h>

@class AXLanguageTaggedContent, AVSpeechSynthesizer, NSMutableArray, QSSelectionHighlightView, NSArray, AXTimer, NSString;

@interface AXQuickSpeak : NSObject <AVSpeechSynthesizerDelegate> {

	int _speechJobStartLocationInSelectedTextRange;
	CGPoint _lastQuickSpeakOffset;
	BOOL _cachedIdleTimerPref;
	BOOL _paused;
	AXLanguageTaggedContent* _selectedContent;
	AXLanguageTaggedContent* _speakingContent;
	AVSpeechSynthesizer* _speechSynthesizer;
	NSMutableArray* _speechSequenceItems;
	id _quickSpeakInitiator;
	QSSelectionHighlightView* _highlightView;
	NSArray* _hiddenTextSelectionViews;
	NSArray* _hiddenTextSelectionDelegates;
	AXTimer* _highlightViewDispatcher;
	id _contentOwner;

}

@property (nonatomic,copy) NSString * content; 
@property (nonatomic,retain) id contentOwner;                                         //@synthesize contentOwner=_contentOwner - In the implementation block
@property (nonatomic,retain) AXLanguageTaggedContent * selectedContent;               //@synthesize selectedContent=_selectedContent - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                             //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) AXLanguageTaggedContent * speakingContent;               //@synthesize speakingContent=_speakingContent - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesizer * speechSynthesizer;                 //@synthesize speechSynthesizer=_speechSynthesizer - In the implementation block
@property (assign,nonatomic) BOOL cachedIdleTimerPref;                                //@synthesize cachedIdleTimerPref=_cachedIdleTimerPref - In the implementation block
@property (nonatomic,retain) NSMutableArray * speechSequenceItems;                    //@synthesize speechSequenceItems=_speechSequenceItems - In the implementation block
@property (nonatomic,retain) id quickSpeakInitiator;                                  //@synthesize quickSpeakInitiator=_quickSpeakInitiator - In the implementation block
@property (nonatomic,retain) QSSelectionHighlightView * highlightView;                //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) AXTimer * highlightViewDispatcher;                       //@synthesize highlightViewDispatcher=_highlightViewDispatcher - In the implementation block
@property (nonatomic,retain) NSArray * hiddenTextSelectionViews;                      //@synthesize hiddenTextSelectionViews=_hiddenTextSelectionViews - In the implementation block
@property (nonatomic,retain) NSArray * hiddenTextSelectionViewDelegates;              //@synthesize hiddenTextSelectionDelegates=_hiddenTextSelectionDelegates - In the implementation block
+(BOOL)isQuickSpeakSelector:(SEL)arg1 ;
+(BOOL)quickSpeakClassIsBlacklisted:(id)arg1 ;
+(BOOL)contentIsSpeakable:(id)arg1 ;
+(id)sharedInstance;
+(void)initialize;
-(void)setSelectedContent:(id)arg1 ;
-(void)_handleAppDidEnterBackground:(id)arg1 ;
-(void)resumeAction:(id)arg1 ;
-(id)speechSequenceItems;
-(BOOL)cachedIdleTimerPref;
-(void)_updateCalloutBar;
-(void)_cleanupTextSelectionViews;
-(NSRange)_updatedRangeForComposedCharacters:(NSRange)arg1 string:(id)arg2 ;
-(void)_handlePauseCallback;
-(id)highlightViewDispatcher;
-(void)setHighlightViewDispatcher:(id)arg1 ;
-(void)_willSpeakRange:(NSRange)arg1 string:(id)arg2 ;
-(id)_textSelectionViews;
-(id)hiddenTextSelectionViews;
-(id)_viewsWithBlock:(/*^block*/ id)arg1 ;
-(id)_textInputInitiator;
-(void)_scrollToTextRect:(CGRect)arg1 withScrollView:(id)arg2 ;
-(void)speakAction:(id)arg1 withPreferredLanguage:(id)arg2 ;
-(BOOL)selectedContentIsSpeakable;
-(BOOL)selectedContentRequiresUserChoice;
-(void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2 ;
-(id)hiddenTextSelectionViewDelegates;
-(void)setSpeechSynthesizer:(id)arg1 ;
-(void)setSpeechSequenceItems:(id)arg1 ;
-(void)setHiddenTextSelectionViews:(id)arg1 ;
-(void)setHiddenTextSelectionViewDelegates:(id)arg1 ;
-(void)setContentOwner:(id)arg1 ;
-(id)quickSpeakInitiator;
-(id)speechSynthesizer;
-(void)_startSpeakingSequence;
-(void)setCachedIdleTimerPref:(BOOL)arg1 ;
-(void)_manipulateOtherTextViews:(BOOL)arg1 ;
-(void)_speakNextItemInSequence;
-(id)contentOwner;
-(id)selectedContent;
-(void)_handleAppWillResignActive:(id)arg1 ;
-(void)setQuickSpeakInitiator:(id)arg1 ;
-(void)setSpeakingContent:(id)arg1 ;
-(void)stopAction:(id)arg1 ;
-(id)speakingContent;
-(void)pauseAction:(id)arg1 ;
-(BOOL)isPaused;
-(id)highlightView;
-(void)setHighlightView:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setPaused:(BOOL)arg1 ;
-(id)content;
-(BOOL)isSpeaking;
-(void)setContent:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3 ;
@end

