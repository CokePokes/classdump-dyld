/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@interface TSPPasteboardMetadata : TSPObject {

	PasteboardMetadata* _message;
	BOOL _isCrossAppPaste;
	BOOL _isCrossDocumentPaste;

}

@property (nonatomic,readonly) BOOL isCrossAppPaste;                   //@synthesize isCrossAppPaste=_isCrossAppPaste - In the implementation block
@property (nonatomic,readonly) BOOL isCrossDocumentPaste;              //@synthesize isCrossDocumentPaste=_isCrossDocumentPaste - In the implementation block
+(id)appNameAndVersion;
+(id)bundleIdentifier;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(long long)tsp_identifier;
-(BOOL)isCrossAppPaste;
-(BOOL)isCrossDocumentPaste;
-(PasteboardMetadata*)message;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

