/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerRange : NSManagedObject

@property (nonatomic,@dynamic,retain) NSNumber * peerStart; 
@property (nonatomic,@dynamic,retain) NSNumber * end; 
@property (nonatomic,@dynamic,retain) NSNumber * peerEnd; 
@property (nonatomic,@dynamic,retain) NSString * peerEntityName; 
@property (nonatomic,@dynamic,retain) NSNumber * start; 
@property (nonatomic,@dynamic,retain) PFUbiquityPeer * peer; 
@property (nonatomic,@dynamic,retain) PFUbiquityStoreMetadata * storeMetadata; 
-(void)loadFromBaselineDictionary:(id)arg1 ;
@end

