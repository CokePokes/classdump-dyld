/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface MBRestoreDirectoryAnnotator : NSObject {

	NSString* _path;
	int _engineType;
	BOOL _restoredSystemFiles;

}
+(BOOL)isRestoredPath:(id)arg1 ;
+(id)restoreDirectoryAnnotatorWithPath:(id)arg1 engineType:(int)arg2 restoredSystemFiles:(BOOL)arg3 ;
-(id)_baseRestorePathForDomain:(id)arg1 ;
-(id)annotateDomains:(id)arg1 ;
-(id)initWithPath:(id)arg1 engineType:(int)arg2 restoredSystemFiles:(BOOL)arg3 ;
-(id)annotateDomain:(id)arg1 ;
-(id)_annotateNotBackedUpDomain:(id)arg1 relativePath:(id)arg2 ;
-(id)_annotateRestoredDomain:(id)arg1 relativePath:(id)arg2 ;
-(id)_makeEmptyAnnotationFileWithPath:(id)arg1 value:(id)arg2 ;
-(id)_annotatePath:(id)arg1 value:(id)arg2 ;
-(id)_makeAnnotatedIntermediatePaths:(id)arg1 ;
-(void)dealloc;
@end

