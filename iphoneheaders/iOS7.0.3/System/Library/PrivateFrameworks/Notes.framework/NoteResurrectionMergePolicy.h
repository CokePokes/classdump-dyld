/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy
+(id)sharedNoteResurrectionMergePolicy;
-(id)snapshotFromRecord:(id)arg1 ;
-(id)localStoreForNote:(id)arg1 ;
-(BOOL)accountExists:(id)arg1 ;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
@end

