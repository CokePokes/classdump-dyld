/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface RTAddressBook : NSObject {

	void* _addressBook;
	NSArray* _meCards;

}

@property (nonatomic,retain) NSArray * meCards;              //@synthesize meCards=_meCards - In the implementation block
-(id)getMeCardLocationsOfType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)meCards;
-(void)setMeCards:(id)arg1 ;
-(void).cxx_destruct;
@end

