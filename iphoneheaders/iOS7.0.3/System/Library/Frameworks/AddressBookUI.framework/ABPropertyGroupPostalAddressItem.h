/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABPropertyGroupItem.h>

@class CNPostalAddress;

@interface ABPropertyGroupPostalAddressItem : ABPropertyGroupItem

@property (nonatomic,readonly) CNPostalAddress * address; 
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(id)normalizedValue;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)_isMinimalAddress:(id)arg1 ;
-(id)address;
@end

