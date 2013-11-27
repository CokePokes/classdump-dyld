/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <OfficeImport/OADEffectsParent.h>
#import <OfficeImport/OADProperties3DParent.h>

@class OADFill, NSArray, OADScene3D, OADShape3D, OADStroke;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {

	OADFill* mFill;
	NSArray* mEffects;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;
	OADStroke* mStroke;
	unsigned mHasIsBehindText : 1;
	unsigned mIsBehindText : 1;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)fill;
-(id)stroke;
-(BOOL)isBehindText;
-(void)setFill:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(BOOL)hasFill;
-(BOOL)hasStroke;
-(id)effects;
-(BOOL)hasEffects;
-(void)setEffects:(id)arg1 ;
-(void)setIsBehindText:(BOOL)arg1 ;
-(id)initWithDefaults;
-(void)removeUnnecessaryOverrides;
-(void)setScene3D:(id)arg1 ;
-(void)setShape3D:(id)arg1 ;
-(BOOL)hasScene3D;
-(BOOL)hasShape3D;
-(BOOL)hasIsBehindText;
-(id)scene3D;
-(id)shape3D;
-(void)setParent:(id)arg1 ;
@end

