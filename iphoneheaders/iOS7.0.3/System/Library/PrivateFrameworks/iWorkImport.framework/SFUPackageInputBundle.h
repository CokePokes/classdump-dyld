/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/SFUInputBundle.h>

@class NSString;

@interface SFUPackageInputBundle : NSObject <SFUInputBundle> {

	NSString* _rootPath;

}
-(BOOL)hasEntryWithName:(id)arg1 ;
-(id)inputStreamForEntry:(id)arg1 ;
-(id)bufferedInputStreamForEntry:(id)arg1 ;
-(long long)lengthOfEntry:(id)arg1 ;
-(void)copyEntry:(id)arg1 toFile:(id)arg2 ;
-(id)_existingPathForEntryName:(id)arg1 isGz:(BOOL*)arg2 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(unsigned)crc32ForEntry:(id)arg1 ;
@end

