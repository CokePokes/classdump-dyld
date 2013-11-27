/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerShapeBased.h>

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign,nonatomic) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign,nonatomic) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
+(id)ASCIIToCangjieMap;
+(id)cangjieToASCIIMap;
+(id)cangjieFromASCII:(id)arg1 ;
+(id)ASCIIFromCangjie:(id)arg1 ;
+(Class)wordSearchClass;
-(unsigned)initialSelectedIndex;
-(unsigned)inputCount;
-(unsigned)inputIndex;
-(id)defaultCandidate;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)suchengEnabled;
-(void)setSupportsEnglish:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(BOOL)acceptInputString:(id)arg1 fromPopupVariant:(BOOL)arg2 ;
-(void)autoCommitPreviousCandidateIfNeccessaryByAddingInput:(id)arg1 ;
-(unsigned)cangjieInputType:(id)arg1 fromPopupVariant:(BOOL)arg2 ;
-(void)updateMarkedText;
-(BOOL)firstCandidateIsEnglish;
-(BOOL)hasUpToDateCandidates;
-(BOOL)isValidSuchengInputByAddingInput:(id)arg1 ;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(id)cangjieSet;
-(id)cangjieAlphabetSet;
-(BOOL)isPunctuationInput;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(id)cangjieInputSet;
-(TIInputManagerZephyr*)initImplementation;
-(id)nonstopPunctuationCharacters;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned*)arg4 fromVariantKey:(BOOL)arg5 ;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)rawInputString;
-(void)syncToLayoutState:(id)arg1 ;
-(id)sortingMethods;
@end

