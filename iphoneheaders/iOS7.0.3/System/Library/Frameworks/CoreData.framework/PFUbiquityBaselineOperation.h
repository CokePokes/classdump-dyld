/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/PFUbiquityImportOperation.h>

@class NSString, NSManagedObjectModel;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {

	NSString* _modelVersionHash;
	NSManagedObjectModel* _model;

}

@property (nonatomic,readonly) NSString * modelVersionHash;               //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (nonatomic,readonly) NSManagedObjectModel * model;              //@synthesize model=_model - In the implementation block
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(id)modelVersionHash;
-(void)dealloc;
-(id)description;
-(id)model;
@end

