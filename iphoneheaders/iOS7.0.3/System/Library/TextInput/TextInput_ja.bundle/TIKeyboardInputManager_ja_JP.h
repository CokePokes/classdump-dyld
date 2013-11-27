/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@class TIWordSearch, TIWordSearchCandidateResultSet, NSCache, NSString, TICandidateSorter, NSOperationQueue;

@interface TIKeyboardInputManager_ja_JP : TIKeyboardInputManagerZephyr {

	BOOL _isCandidateSelectionSuppressed;
	TIWordSearch* _kbws;
	TIWordSearchCandidateResultSet* _wordSearchCandidateResultSet;
	NSCache* _candidatesCache;
	NSString* _convertStringForCurrentCandidates;
	BOOL _isPhraseBoundarySet;
	unsigned _remainingInputLength;
	BOOL _shouldLearnAcceptedCandidate;
	BOOL _isEmojiFacemarkMode;
	NSString* _alternateDisplayString;
	TICandidateSorter* _candidateSorter;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic) BOOL isEmojiFacemarkMode; 
@property (nonatomic,copy) NSString * alternateDisplayString;                                            //@synthesize alternateDisplayString=_alternateDisplayString - In the implementation block
@property (readonly) TICandidateSorter * candidateSorter;                                                //@synthesize candidateSorter=_candidateSorter - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * wordSearchCandidateResultSet;              //@synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet - In the implementation block
@property (nonatomic,retain) NSCache * candidatesCache;                                                  //@synthesize candidatesCache=_candidatesCache - In the implementation block
+(id)sortTitleFromSort:(unsigned)arg1 ;
+(unsigned)sortFromSortTitle:(id)arg1 ;
+(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(void)setInput:(id)arg1 ;
-(id)operationQueue;
-(void)dealloc;
-(void)suspend;
-(BOOL)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned)initialSelectedIndex;
-(id)keyboardBehaviors;
-(void)clearInput;
-(BOOL)usesAutoDeleteWord;
-(unsigned)inputCount;
-(BOOL)supportsSetPhraseBoundary;
-(id)searchStringForMarkedText;
-(id)inputString;
-(BOOL)shouldExtendPriorWord;
-(unsigned)inputIndex;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 continuation:(/*^block*/ id)arg3 ;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(id)replacementForDoubleSpace;
-(unsigned)phraseBoundary;
-(void)lastAcceptedCandidateCorrected;
-(id)defaultCandidate;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(void)setIsEmojiFacemarkMode:(BOOL)arg1 ;
-(void)setAlternateDisplayString:(id)arg1 ;
-(void)_addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 ;
-(void)_cancelCandidatesThread;
-(BOOL)isEmojiFacemarkMode;
-(void)_deleteFromInput;
-(id)_inputString;
-(id)alternateDisplayString;
-(id)_convertString;
-(unsigned)actualInputIndex;
-(id)_convertStringWithBoundary:(unsigned)arg1 ;
-(BOOL)shouldSendToTIWordSearch:(id)arg1 ;
-(void)makeCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(id)candidatesWithSyntheticStrings:(id)arg1 ;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(id)_candidatesWithSyntheticStrings:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)hasGroupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(id)candidateSorter;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(unsigned)remainingInputLengthOfString:(id)arg1 index:(unsigned)arg2 candidate:(id)arg3 ;
-(unsigned)remainingInputLengthOfCandidate:(id)arg1 ;
-(id)wordSearchCandidateResultSet;
-(void)setWordSearchCandidateResultSet:(id)arg1 ;
-(void*)mecabraCandidateRefFromCandidate:(id)arg1 ;
-(void)loadAddressBook;
-(id)initWithInputMode:(id)arg1 ;
-(id)candidatesCache;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(void)setCandidatesCache:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(void)loadDictionaries;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)loadFavoniusLanguageModel;
-(void)acceptInput;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(void)clearDynamicDictionary;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned*)arg4 fromVariantKey:(BOOL)arg5 ;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(void)inputLocationChanged;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)wordCharacters;
-(id)geometryModelData;
-(BOOL)isPartialCandidate;
-(id)rawInputString;
-(void)setPhraseBoundary:(unsigned)arg1 ;
-(id)sortingMethods;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(void)didAcceptCandidate:(id)arg1 ;
-(id)remainingInput;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/ id)arg3 ;
@end

