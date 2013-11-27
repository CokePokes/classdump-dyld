/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface VOTElementHandwritingAttributes : NSObject {

	BOOL _canDeleteCharacter;
	BOOL _shouldEchoCharacter;
	BOOL _acceptsRawInput;
	BOOL _shouldPlayKeyboardSecureClickSound;
	int _preferredCharacterSet;
	int _allowedCharacterSets;

}

@property (assign,nonatomic) int preferredCharacterSet;                            //@synthesize preferredCharacterSet=_preferredCharacterSet - In the implementation block
@property (assign,nonatomic) int allowedCharacterSets;                             //@synthesize allowedCharacterSets=_allowedCharacterSets - In the implementation block
@property (assign,nonatomic) BOOL canDeleteCharacter;                              //@synthesize canDeleteCharacter=_canDeleteCharacter - In the implementation block
@property (assign,nonatomic) BOOL shouldEchoCharacter;                             //@synthesize shouldEchoCharacter=_shouldEchoCharacter - In the implementation block
@property (assign,nonatomic) BOOL acceptsRawInput;                                 //@synthesize acceptsRawInput=_acceptsRawInput - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayKeyboardSecureClickSound;              //@synthesize shouldPlayKeyboardSecureClickSound=_shouldPlayKeyboardSecureClickSound - In the implementation block
-(BOOL)shouldPlayKeyboardSecureClickSound;
-(BOOL)acceptsRawInput;
-(BOOL)shouldEchoCharacter;
-(BOOL)canDeleteCharacter;
-(int)allowedCharacterSets;
-(void)setPreferredCharacterSet:(int)arg1 ;
-(void)setAllowedCharacterSets:(int)arg1 ;
-(void)setCanDeleteCharacter:(BOOL)arg1 ;
-(void)setShouldEchoCharacter:(BOOL)arg1 ;
-(void)setShouldPlayKeyboardSecureClickSound:(BOOL)arg1 ;
-(void)setAcceptsRawInput:(BOOL)arg1 ;
-(int)preferredCharacterSet;
-(id)initWithAttributes:(id)arg1 ;
@end

