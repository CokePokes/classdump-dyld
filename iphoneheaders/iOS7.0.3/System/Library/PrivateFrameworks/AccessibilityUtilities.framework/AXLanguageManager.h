/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class AXDialectMap, NSArray, NSCharacterSet, NSLocale, NSString;

@interface AXLanguageManager : NSObject {

	AXDialectMap* _dialectForSystemLanguage;
	AXDialectMap* _dialectForCurrentLocale;
	NSArray* _langMaps;
	NSCharacterSet* _commonCharacters;
	NSLocale* _userLocale;

}

@property (nonatomic,retain) NSArray * langMaps;                                   //@synthesize langMaps=_langMaps - In the implementation block
@property (nonatomic,readonly) NSString * systemLanguageID; 
@property (nonatomic,copy) NSLocale * userLocale;                                  //@synthesize userLocale=_userLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * commonCharacters;                    //@synthesize commonCharacters=_commonCharacters - In the implementation block
@property (assign,nonatomic) AXDialectMap * dialectForSystemLanguage; 
@property (assign,nonatomic) AXDialectMap * dialectForCurrentLocale; 
+(id)sharedInstance;
+(id)nonlocalizedNameForLanguage:(id)arg1 ;
+(id)commonPunctuationCharacters;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 ;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)basicDescription;
-(id)userLocale;
-(BOOL)isCharacterCommon:(unsigned short)arg1 ;
-(void)setUserLocale:(id)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg1 ;
-(void)setCommonCharacters:(id)arg1 ;
-(id)_loadLangMaps;
-(void)setLangMaps:(id)arg1 ;
-(void)setDialectForSystemLanguage:(id)arg1 ;
-(void)setDialectForCurrentLocale:(id)arg1 ;
-(id)langMaps;
-(id)dialectForSystemLanguage;
-(id)dialectForCurrentLocale;
-(void)updateCachedDialects;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)_preferredLanguageIDsFromUserSelectedKeyboards;
-(id)dialectForLanguageID:(id)arg1 ;
-(id)commonCharacters;
-(id)systemLanguageID;
-(id)characterSetForRanges:(id)arg1 ;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2 ;
@end

