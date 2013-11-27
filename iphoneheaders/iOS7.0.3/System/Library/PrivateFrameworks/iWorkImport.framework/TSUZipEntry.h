/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface TSUZipEntry : NSObject {

	BOOL _compressed;
	unsigned short _nameLength;
	unsigned short _extraFieldLength;
	NSString* _name;
	unsigned _CRC;
	unsigned long long _size;
	unsigned long long _compressedSize;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned CRC;                                     //@synthesize CRC=_CRC - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) unsigned long long compressedSize;                //@synthesize compressedSize=_compressedSize - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                        //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned short nameLength;                        //@synthesize nameLength=_nameLength - In the implementation block
@property (assign,nonatomic) unsigned short extraFieldLength;                  //@synthesize extraFieldLength=_extraFieldLength - In the implementation block
-(void)setCRC:(unsigned)arg1 ;
-(void)setNameLength:(unsigned short)arg1 ;
-(void)setExtraFieldLength:(unsigned short)arg1 ;
-(unsigned)CRC;
-(void)setCompressed:(BOOL)arg1 ;
-(unsigned short)nameLength;
-(unsigned short)extraFieldLength;
-(unsigned long long)size;
-(id)description;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(BOOL)isCompressed;
-(void)setCompressedSize:(unsigned long long)arg1 ;
-(unsigned long long)compressedSize;
-(void).cxx_destruct;
@end

