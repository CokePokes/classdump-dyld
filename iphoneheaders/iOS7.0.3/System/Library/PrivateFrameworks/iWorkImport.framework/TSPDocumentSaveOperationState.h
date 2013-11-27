/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPSaveOperationState.h>

@protocol TSPPackage;
@class NSURL, TSPDocumentProperties, TSPObject, , NSUUID;

@interface TSPDocumentSaveOperationState : TSPSaveOperationState {

	BOOL _shouldLeavePendingEndSave;
	NSURL* _URL;
	NSURL* _relativeURLForExternalData;
	TSPDocumentProperties* _documentProperties;
	TSPObject* _documentObject;
	TSPObject* _supportObject;
	<TSPPackage>* _documentPackage;
	<TSPPackage>* _supportPackage;
	NSUUID* _documentUUID;

}

@property (nonatomic,readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSURL * relativeURLForExternalData;                        //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
@property (nonatomic,retain) TSPDocumentProperties * documentProperties;              //@synthesize documentProperties=_documentProperties - In the implementation block
@property (nonatomic,retain) TSPObject * documentObject;                              //@synthesize documentObject=_documentObject - In the implementation block
@property (nonatomic,retain) TSPObject * supportObject;                               //@synthesize supportObject=_supportObject - In the implementation block
@property (nonatomic,retain) <TSPPackage> * documentPackage;                          //@synthesize documentPackage=_documentPackage - In the implementation block
@property (nonatomic,retain) <TSPPackage> * supportPackage;                           //@synthesize supportPackage=_supportPackage - In the implementation block
@property (nonatomic,copy) NSUUID * documentUUID;                                     //@synthesize documentUUID=_documentUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldLeavePendingEndSave;                          //@synthesize shouldLeavePendingEndSave=_shouldLeavePendingEndSave - In the implementation block
-(void)setDocumentObject:(id)arg1 ;
-(id)initWithURL:(id)arg1 updateType:(unsigned)arg2 ;
-(void)setDocumentUUID:(id)arg1 ;
-(void)setRelativeURLForExternalData:(id)arg1 ;
-(void)setDocumentProperties:(id)arg1 ;
-(id)documentProperties;
-(id)documentUUID;
-(void)setSupportObject:(id)arg1 ;
-(id)supportObject;
-(id)relativeURLForExternalData;
-(void)setDocumentPackage:(id)arg1 ;
-(id)documentPackage;
-(void)setSupportPackage:(id)arg1 ;
-(id)supportPackage;
-(void)setShouldLeavePendingEndSave:(BOOL)arg1 ;
-(BOOL)shouldLeavePendingEndSave;
-(id)documentObject;
-(id)init;
-(id)URL;
-(void).cxx_destruct;
@end

