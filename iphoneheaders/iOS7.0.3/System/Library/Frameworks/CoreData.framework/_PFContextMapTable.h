/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFContextMapTable : NSObject {

	unsigned _slotLimit;
	CFDictionaryRef _objectsByTemporaryID;
	_CFDictionary* _objectsByPermanentObjectID;
	_CFDictionary* _objectsBy64bitPKID;
	unsigned* _capacitiesFor64bitPKMappings;
	struct {
		unsigned _usesWeakReferences : 1;
		unsigned _garbageCollectionEnabled : 1;
		unsigned _reservedFlags : 30;
	}  _flags;

}
-(void)_dispose;
-(id)initWithWeaksReferences:(BOOL)arg1 ;
-(void)setForUseWithModel:(id)arg1 ;
-(unsigned)getAllObjects:(id*)arg1 ;
-(void)setCapacityHint:(unsigned)arg1 forSlot:(unsigned)arg2 ;
-(void)clearTemporaryIDs;
-(void)dealloc;
-(void)finalize;
@end

