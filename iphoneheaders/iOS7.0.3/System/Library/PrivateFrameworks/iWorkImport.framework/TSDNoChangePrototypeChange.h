/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSDPrototypeChange.h>

@interface TSDNoChangePrototypeChange : NSObject <TSDPrototypeChange> {

	id mPrototype;

}

@property (readonly) BOOL prototypeIsBeingReplaced; 
@property (readonly) BOOL prototypeIsBeingModified; 
@property (readonly) BOOL prototypeIsBeingDeleted; 
@property (readonly) id prototype; 
@property (readonly) id replacement; 
@property (readonly) <TSSPropertySource> * propertiesBeforeChange; 
@property (readonly) <TSSPropertySource> * propertiesAfterChange; 
-(BOOL)prototypeIsBeingReplaced;
-(BOOL)prototypeIsBeingModified;
-(id)propertiesBeforeChange;
-(id)propertiesAfterChange;
-(BOOL)prototypeIsBeingDeleted;
-(id)changedPropertySet;
-(id)prototype;
-(BOOL)propertyIsChanging:(int)arg1 ;
-(BOOL)propertiesAreChanging:(id)arg1 ;
-(id)initNoChangePrototypeChangeForPrototype:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)replacement;
@end

