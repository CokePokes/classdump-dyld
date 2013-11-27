/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface NSFileWatcherObservations : NSObject {

	BOOL _attributesChanged;
	BOOL _contentsChanged;
	BOOL _deleted;
	BOOL _moved;
	NSString* _lastObservedPath;
	BOOL _didResetPath;
	NSString* _path;

}
-(void)addAttributeChange;
-(void)addContentsChange;
-(void)addDeletion;
-(void)addDetectedMoveToPath:(id)arg1 ;
-(void)addAnnouncedMoveToPath:(id)arg1 ;
-(void)notifyObserver:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

