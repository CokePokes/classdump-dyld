/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput/TIKeyboardOperation.h>

@class NSString;

@interface TIKeyboardOperationInsertTextAfterSelection : TIKeyboardOperation {

	NSString* _textInsertion;

}

@property (nonatomic,readonly) NSString * textInsertion;              //@synthesize textInsertion=_textInsertion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)operationWithTextInsertion:(id)arg1 ;
-(void)main;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)textInsertion;
-(id)propertiesForDescription;
-(id)initWithTextInsertion:(id)arg1 ;
@end

