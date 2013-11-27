/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject {

	NSMutableData* _mutableData;
	NSData* _data;
	unsigned _offset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableData;                //@synthesize mutableData=_mutableData - In the implementation block
@property (assign,nonatomic) unsigned offset;                            //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) const char* bytes; 
@property (nonatomic,readonly) const char* currentPosition; 
+(id)decodeWithData:(id)arg1 ;
+(id)encodeWithCandidateResultSet:(id)arg1 ;
+(id)candidateTypeToClassNameMap;
+(Class)classFromCandidateType:(int)arg1 ;
-(void)dealloc;
-(const char*)bytes;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(id)candidateResultSet;
-(const char*)currentPosition;
-(unsigned long long)decodeUInt64;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(unsigned char)decodeByte;
-(id)decodeString;
-(void)encodeByte:(unsigned char)arg1 ;
-(void)encodeString:(id)arg1 ;
-(id)initForEncoding;
-(id)dataFromCandidateResultSet:(id)arg1 ;
-(id)initForDecodingWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 mutableData:(id)arg2 ;
-(id)mutableData;
-(unsigned)decodeUInt32;
-(void)encodeStringArray:(id)arg1 ;
-(void)encodeUInt32:(unsigned)arg1 ;
-(void)encodeShort:(unsigned short)arg1 ;
-(id)decodeCandidate;
-(id)decodeStringArray;
-(unsigned short)decodeShort;
-(void)encodeBool:(BOOL)arg1 ;
-(BOOL)decodeBool;
-(void)setMutableData:(id)arg1 ;
@end

