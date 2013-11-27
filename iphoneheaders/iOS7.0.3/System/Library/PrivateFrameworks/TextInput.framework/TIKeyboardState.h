/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput/TextInput-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, TIKeyboardLayout, TIKeyboardLayoutState, TIDocumentState, TIKeyboardCandidate;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI9 _mask;
	NSString* _inputMode;
	TIKeyboardLayout* _keyLayout;
	TIKeyboardLayoutState* _layoutState;
	TIDocumentState* _documentState;
	NSString* _inputForMarkedText;
	NSString* _searchStringForMarkedText;
	TIKeyboardCandidate* _currentCandidate;

}

@property (nonatomic,copy) NSString * inputMode;                                  //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                        //@synthesize keyLayout=_keyLayout - In the implementation block
@property (nonatomic,copy) TIKeyboardLayoutState * layoutState;                   //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,retain) TIDocumentState * documentState;                     //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,copy) NSString * inputForMarkedText;                         //@synthesize inputForMarkedText=_inputForMarkedText - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                  //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * currentCandidate;              //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (assign,nonatomic) BOOL userSelectedCurrentCandidate; 
@property (assign,nonatomic) BOOL shouldSkipCandidateSelection; 
@property (assign,nonatomic) BOOL suppressingCandidateSelection; 
@property (assign,nonatomic) BOOL needsCandidateMetadata; 
@property (assign,nonatomic) BOOL keyboardEventsLagging; 
@property (assign,nonatomic) BOOL hardwareKeyboardMode; 
@property (assign,nonatomic) BOOL splitKeyboardMode; 
@property (assign,nonatomic) BOOL wordLearningEnabled; 
@property (assign,nonatomic) BOOL autocorrectionEnabled; 
@property (assign,nonatomic) BOOL shortcutConversionEnabled; 
@property (assign,nonatomic) BOOL typologyLoggingEnabled; 
@property (assign,nonatomic) BOOL autocapitalizationEnabled; 
@property (assign,nonatomic) unsigned autocapitalizationType; 
@property (assign,nonatomic) unsigned keyboardType; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)autocapitalizationType;
-(void)setAutocapitalizationType:(unsigned)arg1 ;
-(unsigned)keyboardType;
-(void)setKeyboardType:(unsigned)arg1 ;
-(id)currentCandidate;
-(void)setHardwareKeyboardMode:(BOOL)arg1 ;
-(void)setTypologyLoggingEnabled:(BOOL)arg1 ;
-(void)setInputMode:(id)arg1 ;
-(id)layoutState;
-(void)setLayoutState:(id)arg1 ;
-(void)setCurrentCandidate:(id)arg1 ;
-(void)setNeedsCandidateMetadata:(BOOL)arg1 ;
-(void)setShortcutConversionEnabled:(BOOL)arg1 ;
-(id)keyLayout;
-(void)setKeyLayout:(id)arg1 ;
-(void)setAutocorrectionEnabled:(BOOL)arg1 ;
-(BOOL)splitKeyboardMode;
-(void)setSplitKeyboardMode:(BOOL)arg1 ;
-(void)setWordLearningEnabled:(BOOL)arg1 ;
-(void)setDocumentState:(id)arg1 ;
-(void)setShouldSkipCandidateSelection:(BOOL)arg1 ;
-(void)setInputForMarkedText:(id)arg1 ;
-(void)setSearchStringForMarkedText:(id)arg1 ;
-(id)documentState;
-(id)searchStringForMarkedText;
-(id)inputMode;
-(BOOL)hardwareKeyboardMode;
-(void)setAutocapitalizationEnabled:(BOOL)arg1 ;
-(BOOL)shouldSkipCandidateSelection;
-(BOOL)suppressingCandidateSelection;
-(void)setSuppressingCandidateSelection:(BOOL)arg1 ;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(BOOL)userSelectedCurrentCandidate;
-(id)inputForMarkedText;
-(void)setKeyboardEventsLagging:(BOOL)arg1 ;
-(BOOL)typologyLoggingEnabled;
-(BOOL)autocapitalizationEnabled;
-(BOOL)autocorrectionEnabled;
-(BOOL)keyboardEventsLagging;
-(BOOL)wordLearningEnabled;
-(BOOL)needsCandidateMetadata;
-(BOOL)shortcutConversionEnabled;
@end

