/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class MFEmailSet, NSString, NSSet;

@interface MFVIPSender : NSObject <NSCopying> {

	MFEmailSet* _emailAddresses;
	void* _existingPerson;
	NSString* _uniqueReference;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * uniqueReference;              //@synthesize uniqueReference=_uniqueReference - In the implementation block
@property (nonatomic,copy) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSSet * emailAddresses; 
-(id)uniqueReference;
-(void*)existingPersonUsingAddressBook:(void*)arg1 ;
-(void)addEmailAddresses:(id)arg1 ;
-(void)setUniqueReference:(id)arg1 ;
-(void*)copyUnknownPerson;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)displayName;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
@end

