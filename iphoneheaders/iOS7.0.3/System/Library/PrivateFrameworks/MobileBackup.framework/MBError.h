/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MBError : NSObject
+(id)errorWithCode:(int)arg1 format:(id)arg2 ;
+(id)errorWithCode:(int)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)posixErrorWithCode:(int)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)descriptionForError:(id)arg1 ;
+(int)codeForNSError:(id)arg1 ;
+(int)codeForErrno:(int)arg1 ;
+(id)errorWithCode:(int)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(int)arg1 error:(id)arg2 format:(id)arg3 ;
+(id)descriptionForError:(id)arg1 paths:(BOOL)arg2 ;
+(id)dictionaryRepresentationForError:(id)arg1 ;
+(id)errorWithDictionaryRepresentation:(id)arg1 ;
+(BOOL)isUnexpectedErrorCode:(int)arg1 ;
+(BOOL)isTransientError:(id)arg1 ;
+(int)errnoForError:(id)arg1 ;
+(BOOL)isError:(id)arg1 withCode:(int)arg2 ;
+(BOOL)isError:(id)arg1 withCodes:(int)arg2 ;
+(BOOL)isNSError:(id)arg1 withCode:(int)arg2 ;
+(BOOL)isRetryAfterError:(id)arg1 retryAfterDate:(id*)arg2 ;
+(id)sanitizedError:(id)arg1 ;
+(id)errorWithCode:(int)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4 ;
+(id)errorWithCode:(int)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4 ;
+(id)errorWithDomain:(id)arg1 code:(int)arg2 format:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(int)arg2 path:(id)arg3 format:(id)arg4 ;
+(id)posixErrorWithFormat:(id)arg1 ;
+(id)posixErrorWithPath:(id)arg1 format:(id)arg2 ;
+(id)posixErrorWithCode:(int)arg1 format:(id)arg2 ;
+(id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorForHTTPURLResponse:(id)arg1 error:(id)arg2 ;
@end

