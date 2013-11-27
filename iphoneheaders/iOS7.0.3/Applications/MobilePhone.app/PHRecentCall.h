/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MobilePhone/MobilePhone-Structs.h>
@class NSString, NSDate;

@interface PHRecentCall : NSObject {

	int _category;
	int _type;
	NSString* _destination;
	CFPhoneNumberRef _destinationPhoneNumber;
	NSDate* _date;
	double _duration;
	NSString* _compositeName;
	NSString* _destinationLabel;
	NSString* _destinationLocation;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSString* _isoCountryCode;
	NSString* _CNAPFirstName;
	NSString* _CNAPSecondNames;
	int _uid;
	void* _addressBookRecord;
	int _identifier;
	unsigned _destinationIsFormatted : 1;
	unsigned _destinationIsBlocked : 1;
	CTCallRef _underlyingCTCall;
	int _unreadCount;
	double _bytesOfDataUsed;

}

@property (assign) double bytesOfDataUsed;                               //@synthesize bytesOfDataUsed=_bytesOfDataUsed - In the implementation block
@property (copy) NSString * _CNAPFirstName;                              //@synthesize CNAPFirstName=_CNAPFirstName - In the implementation block
@property (copy) NSString * _CNAPSecondNames;                            //@synthesize CNAPSecondNames=_CNAPSecondNames - In the implementation block
@property (retain) NSString * mobileCountryCode;                         //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (retain) NSString * mobileNetworkCode;                         //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (retain) NSString * isoCountryCode;                            //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign) CFPhoneNumberRef destinationPhoneNumber; 
@property (assign) int unreadCount;                                      //@synthesize unreadCount=_unreadCount - In the implementation block
@property (readonly) int uid; 
@property (assign) void* addressBookRecord; 
@property (assign) int destinationIdentifier; 
+(int)callStatusForCall:(CTCallRef)arg1 ;
+(int)callCategoryForCall:(CTCallRef)arg1 ;
-(void)uncacheIdentity;
-(void)setBytesOfDataUsed:(double)arg1 ;
-(void)setDestinationPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(void)setCNAPFirstNameAndSecondNamesFromString:(id)arg1 ;
-(CFPhoneNumberRef)destinationPhoneNumber;
-(void*)addressBookRecord;
-(int)destinationIdentifier;
-(BOOL)destinationIsEmailAddress;
-(void)setDestinationLocation:(id)arg1 ;
-(id)destinationLabel;
-(id)destinationLocation;
-(id)underlyingCTCalls;
-(id)formattedDestination;
-(BOOL)destinationIsBlocked;
-(id)initWithCTCall:(CTCallRef)arg1 ;
-(BOOL)canCoalesceWithCall:(id)arg1 ;
-(id)addressBookDestination;
-(id)destinationToDialAssisted:(BOOL*)arg1 ;
-(void)setDestinationIsBlocked:(BOOL)arg1 ;
-(id)destinationStringForDisplay;
-(id)callOccurrences;
-(BOOL)representsCallAtDate:(id)arg1 ;
-(void)setAddressBookRecord:(void*)arg1 ;
-(void)setDestinationIdentifier:(int)arg1 ;
-(void)deleteUnderlyingCTCall;
-(id)callerDisplayName;
-(int)numberOfOccurrences;
-(id)_CNAPFirstName;
-(void)set_CNAPFirstName:(id)arg1 ;
-(id)_CNAPSecondNames;
-(void)set_CNAPSecondNames:(id)arg1 ;
-(double)bytesOfDataUsed;
-(id)mobileNetworkCode;
-(id)mobileCountryCode;
-(id)isoCountryCode;
-(void)setMobileCountryCode:(id)arg1 ;
-(void)setMobileNetworkCode:(id)arg1 ;
-(void)setIsoCountryCode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)date;
-(void)setDate:(id)arg1 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(void)setCategory:(int)arg1 ;
-(int)category;
-(int)uid;
-(id)compositeName;
-(int)unreadCount;
-(void)setUnreadCount:(int)arg1 ;
@end

