/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class OAXClient, OCPPackagePart, OADStyleMatrix, OAXTableStyleCache, NSMutableDictionary, OADBlipCollection, NSMutableArray, OAVState, OADColorScheme, OADColorMap, OADFontScheme;

@interface OAXDrawingState : NSObject {

	OAXClient* mClient;
	OCPPackagePart* mPackagePart;
	OADStyleMatrix* mStyleMatrix;
	OAXTableStyleCache* mTableStyleCache;
	NSMutableDictionary* mShapeIdMap;
	id mDocumentState;
	OADBlipCollection* mTgtBlipCollection;
	NSMutableDictionary* mSrcURLToTgtBlipIndexMap;
	NSMutableArray* mTgtBulletBlips;
	NSMutableDictionary* mSrcURLToTgtBulletBlipIndexMap;
	OAVState* mOavState;
	OADColorScheme* mColorScheme;
	OADColorMap* mColorMap;
	OADFontScheme* mFontScheme;
	unsigned mGroupDepth;

}

@property (nonatomic,retain) NSMutableDictionary * sourceURLToTargetBlipIndexMap; 
@property (nonatomic,retain) NSMutableDictionary * sourceURLToTargetBulletBlipIndexMap; 
-(void)dealloc;
-(id)init;
-(void)setDocumentState:(id)arg1 ;
-(id)documentState;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)styleMatrix;
-(BOOL)isInsideGroup;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
-(id)fontScheme;
-(id)packagePart;
-(void)setStyleMatrix:(id)arg1 ;
-(void)setFontScheme:(id)arg1 ;
-(void)clearTargetBlipCollection;
-(id)targetBlipCollection;
-(void)setTargetBlipCollection:(id)arg1 ;
-(void)setPackagePart:(id)arg1 ;
-(id)oavState;
-(void)setOavState:(id)arg1 ;
-(void)resetForNewDrawing;
-(void)setDrawable:(id)arg1 forShapeId:(unsigned long)arg2 ;
-(id)drawableForShapeId:(unsigned long)arg1 ;
-(id)blipRefForURL:(id)arg1 ;
-(id)blipRefWithURL:(id)arg1 blipArray:(id)arg2 blipURLtoIndexMap:(id)arg3 ;
-(id)tableStyleCache;
-(void)setTableStyleCache:(id)arg1 ;
-(void)setTargetBulletBlipArray:(id)arg1 ;
-(id)bulletBlipRefForURL:(id)arg1 ;
-(void)pushGroup;
-(void)popGroup;
-(id)sourceURLToTargetBlipIndexMap;
-(void)setSourceURLToTargetBlipIndexMap:(id)arg1 ;
-(id)sourceURLToTargetBulletBlipIndexMap;
-(void)setSourceURLToTargetBulletBlipIndexMap:(id)arg1 ;
-(id)client;
-(id)initWithClient:(id)arg1 ;
@end

