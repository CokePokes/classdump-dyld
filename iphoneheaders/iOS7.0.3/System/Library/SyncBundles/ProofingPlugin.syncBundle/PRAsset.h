/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface PRAsset : NSObject {

	NSString* _assetID;
	NSString* _path;
	int _modifyType;
	NSString* _contentsHash;

}

@property (nonatomic,readonly) NSString * assetID; 
@property (nonatomic,retain) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int modifyType;                       //@synthesize modifyType=_modifyType - In the implementation block
@property (nonatomic,retain) NSString * contentsHash;              //@synthesize contentsHash=_contentsHash - In the implementation block
+(id)assetFromDictionary:(id)arg1 ;
+(id)assetForPath:(id)arg1 modifyType:(int)arg2 contentsHash:(id)arg3 ;
+(id)path:(id)arg1 renamingRootTo:(id)arg2 ;
+(id)simpleContentsHashForFileAtPath:(id)arg1 ;
+(id)pathRootName:(id)arg1 ;
-(void)setContentsHash:(id)arg1 ;
-(id)assetID;
-(id)dictionaryRepresentationRenamingRootTo:(id)arg1 ;
-(int)modifyType;
-(id)contentsHash;
-(void)setModifyType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)path;
-(void)setPath:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

