/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface AOSLostModeInfo : NSObject <NSSecureCoding> {

	BOOL _lostModeEnabled;
	NSString* _message;
	NSString* _phoneNumber;

}

@property (assign,nonatomic) BOOL lostModeEnabled;                //@synthesize lostModeEnabled=_lostModeEnabled - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)phoneNumber;
-(BOOL)lostModeEnabled;
-(void)setLostModeEnabled:(BOOL)arg1 ;
@end

