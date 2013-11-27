/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface PTPObjectInfoDataset : NSObject {

	unsigned long _storageID;
	unsigned short _objectFormat;
	unsigned short _protectionStatus;
	unsigned long long _objectCompressedSize;
	unsigned short _thumbFormat;
	unsigned long _thumbCompressedSize;
	unsigned long _thumbOffset;
	unsigned long _thumbPixWidth;
	unsigned long _thumbPixHeight;
	unsigned long _imagePixWidth;
	unsigned long _imagePixHeight;
	unsigned long _imageBitDepth;
	unsigned long _parentObject;
	unsigned short _associationType;
	unsigned long _associationDesc;
	unsigned long _sequenceNumber;
	NSString* _filename;
	NSString* _captureDate;
	NSString* _modificationDate;
	NSString* _keywords;
	unsigned long _thmFileSize;
	unsigned long _objectHandle;

}
-(unsigned long)sequenceNumber;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(id)content;
-(void)setSequenceNumber:(unsigned long)arg1 ;
-(unsigned long)parentObject;
-(unsigned long)storageID;
-(unsigned short)protectionStatus;
-(unsigned short)objectFormat;
-(unsigned short)associationType;
-(unsigned long)objectHandle;
-(unsigned long long)objectCompressedSize64;
-(unsigned long)thumbCompressedSize;
-(unsigned long)imagePixWidth;
-(unsigned long)imagePixHeight;
-(unsigned long)imageBitDepth;
-(void)setObjectHandle:(unsigned long)arg1 ;
-(void)setObjectCompressedSize:(unsigned long long)arg1 ;
-(id)initWithData64:(id)arg1 ;
-(unsigned long)objectCompressedSize;
-(id)content64;
-(void)setStorageID:(unsigned long)arg1 ;
-(void)setObjectFormat:(unsigned short)arg1 ;
-(void)setProtectionStatus:(unsigned short)arg1 ;
-(unsigned short)thumbFormat;
-(void)setThumbFormat:(unsigned short)arg1 ;
-(void)setThumbCompressedSize:(unsigned long)arg1 ;
-(unsigned long)thmFileSize;
-(void)setThmFileSize:(unsigned long)arg1 ;
-(unsigned long)thumbOffset;
-(void)setThumbOffset:(unsigned long)arg1 ;
-(unsigned long)thumbPixWidth;
-(void)setThumbPixWidth:(unsigned long)arg1 ;
-(unsigned long)thumbPixHeight;
-(void)setThumbPixHeight:(unsigned long)arg1 ;
-(void)setImagePixWidth:(unsigned long)arg1 ;
-(void)setImagePixHeight:(unsigned long)arg1 ;
-(void)setImageBitDepth:(unsigned long)arg1 ;
-(void)setParentObject:(unsigned long)arg1 ;
-(void)setAssociationType:(unsigned short)arg1 ;
-(unsigned long)associationDesc;
-(void)setAssociationDesc:(unsigned long)arg1 ;
-(void)setKeywords:(id)arg1 ;
-(id)keywords;
-(id)filename;
-(void)setModificationDate:(id)arg1 ;
-(void)setFilename:(id)arg1 ;
-(void)setCaptureDate:(id)arg1 ;
-(id)modificationDate;
-(id)captureDate;
@end

