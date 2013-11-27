/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EKObject, NSString;

@interface EKObjectRelation : NSObject {

	EKObject* _owner;
	NSString* _relationName;
	BOOL _dirty;
	BOOL _loaded;
	NSString* _inverseName;

}

@property (nonatomic,readonly) EKObject * owner;                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSString * relationName;              //@synthesize relationName=_relationName - In the implementation block
@property (nonatomic,readonly) NSString * inverseName;               //@synthesize inverseName=_inverseName - In the implementation block
-(void)didCommit;
-(BOOL)validate:(id*)arg1 ;
-(id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3 ;
-(void)updatePersistentObject;
-(id)committedValue;
-(void)relatedObjectDidChange;
-(id)inverseName;
-(BOOL)isWeak;
-(void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3 ;
-(id)relationName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)reset;
-(void)refresh;
-(id)owner;
-(void)rollback;
-(BOOL)isDirty;
@end

