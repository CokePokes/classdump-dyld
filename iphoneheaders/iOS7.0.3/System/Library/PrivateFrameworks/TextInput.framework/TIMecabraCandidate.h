/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString, NSNumber;

@interface TIMecabraCandidate : TIKeyboardCandidate {

	BOOL _emojiCandidate;
	BOOL _extensionCandidate;
	BOOL _isForShortcutConversion;
	NSString* _candidate;
	NSString* _input;
	NSNumber* _mecabraCandidatePointerValue;

}

@property (nonatomic,retain) NSNumber * mecabraCandidatePointerValue;              //@synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)input;
-(id)candidate;
-(BOOL)isForShortcutConversion;
-(BOOL)isExtensionCandidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(void)setMecabraCandidatePointerValue:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(BOOL)arg4 isEmoji:(BOOL)arg5 isShortcut:(BOOL)arg6 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)mecabraCandidatePointerValue;
-(BOOL)isEmojiCandidate;
@end

