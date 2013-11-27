/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput/TIKeyboardOperation.h>

@interface TIKeyboardOperationDeleteForward : TIKeyboardOperation {

	BOOL _shouldNotify;
	unsigned _deletionCount;

}

@property (nonatomic,readonly) unsigned deletionCount;              //@synthesize deletionCount=_deletionCount - In the implementation block
@property (nonatomic,readonly) BOOL shouldNotify;                   //@synthesize shouldNotify=_shouldNotify - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)operationWithDeletionCount:(unsigned)arg1 ;
+(id)operationWithDeletionCount:(unsigned)arg1 shouldNotify:(BOOL)arg2 ;
-(void)main;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)deletionCount;
-(BOOL)shouldNotify;
-(id)propertiesForDescription;
-(id)initWithDeletionCount:(unsigned)arg1 shouldNotify:(BOOL)arg2 ;
@end

