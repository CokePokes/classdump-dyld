/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SAStartRequest.h>

@class SAUIDomainObjectPicker, SADomainObject;

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (nonatomic,retain) SAUIDomainObjectPicker * domainObjectPicker; 
@property (nonatomic,retain) SADomainObject * selectedItem; 
+(id)domainObjectPickerSelection;
+(id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSelectedItem:(id)arg1 ;
-(id)selectedItem;
-(id)encodedClassName;
-(id)domainObjectPicker;
-(void)setDomainObjectPicker:(id)arg1 ;
@end

