/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSArray, NSDictionary;

@interface CKMediaObjectManager : NSObject {

	NSMutableDictionary* _transfers;
	NSArray* _classes;
	NSDictionary* _UTITypes;
	NSDictionary* _dynTypes;

}

@property (nonatomic,copy) NSArray * classes;                              //@synthesize classes=_classes - In the implementation block
@property (nonatomic,copy) NSDictionary * UTITypes;                        //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSDictionary * dynTypes;                        //@synthesize dynTypes=_dynTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transfers;              //@synthesize transfers=_transfers - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)mediaObjectWithData:(id)arg1 UTIType:(id)arg2 filename:(id)arg3 transcoderUserInfo:(id)arg4 ;
-(id)mediaObjectWithTransferGUID:(id)arg1 message:(id)arg2 ;
-(id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(id)UTITypeForFilename:(id)arg1 ;
-(id)UTITypes;
-(Class)classForFilename:(id)arg1 ;
-(void)setTransfers:(id)arg1 ;
-(void)setUTITypes:(id)arg1 ;
-(void)setDynTypes:(id)arg1 ;
-(void)transferRemoved:(id)arg1 ;
-(id)dynTypes;
-(id)UTITypeForExtension:(id)arg1 ;
-(Class)classForUTIType:(id)arg1 ;
-(id)transfers;
-(id)transferWithTransferGUID:(id)arg1 message:(id)arg2 ;
-(id)transferWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 ;
-(id)imageDataWithData:(id)arg1 ;
-(Class)transferClass;
-(id)mediaObjectWithPasteboard:(id)arg1 itemAtIndex:(unsigned)arg2 ;
-(id)classes;
-(void)setClasses:(id)arg1 ;
-(id)fileManager;
@end

