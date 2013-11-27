/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/SFUSimpleOutputStream.h>

@protocol SFUOutputStream;
@class SFUMoveableFileOutputStream, OISFUCryptoKey, NSData, NSMutableArray, SFUZipOutputEntry, , SFUZipFreeSpaceEntry;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {

	SFUMoveableFileOutputStream* mOutputStream;
	OISFUCryptoKey* mCryptoKey;
	NSData* mPassphraseHint;
	NSData* mEncryptedDocumentUuid;
	NSMutableArray* mEntries;
	SFUZipOutputEntry* mCurrentEntry;
	SFUZipOutputEntry* mLastEntryInFile;
	<SFUOutputStream>* mEntryOutputStream;
	char* mBuffer;
	NSMutableArray* mFreeList;
	SFUZipFreeSpaceEntry* mCurrentFreeSpace;
	unsigned long long mFreeBytes;

}
+(unsigned long)approximateBytesForEntryHeaderWithName:(id)arg1 ;
-(id)entryNames;
-(void)dealloc;
-(void)flush;
-(void)close;
-(void)reset;
-(id)initWithPath:(id)arg1 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(void)moveToPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3 ;
-(id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3 ;
-(void)finishEntry;
-(unsigned long)writeLocalFileHeaderForEntry:(id)arg1 ;
-(void)beginEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 uncompressedSize:(unsigned long long)arg3 ;
-(void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 ;
-(void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(BOOL)arg2 ;
-(void)writeEndOfCentralDirectoryWithOffset:(long long)arg1 ;
-(id)beginUncompressedUnknownSizeEntryWithName:(id)arg1 ;
-(void)setCrc32ForCurrentEntry:(unsigned)arg1 ;
-(BOOL)canRemoveEntryWithName:(id)arg1 ;
-(void)removeEntryWithName:(id)arg1 ;
-(void)setEncryptedDocumentUuid:(id)arg1 ;
-(id)entriesAtPath:(id)arg1 ;
-(unsigned long long)freeBytes;
-(unsigned)crc32ForEntry:(id)arg1 ;
-(void)coalesceAndTruncateFreeSpace;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 ;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1 ;
@end

