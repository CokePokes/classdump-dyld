/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <CoreThemeDefinition/TDElementAttributes.h>

@class TDThemeState, TDThemePresentationState, TDThemeValue, TDThemeSize, TDThemeDirection, TDThemePart, TDThemeElement, TDThemeDrawingLayer, TDThemeIdiom;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes> {

	unsigned _dimension1;
	unsigned _dimension2;
	unsigned _scaleFactor;
	unsigned _subtype;
	unsigned _nameIdentifier;
	renditionkeytoken _stackScratchKey[16];
	renditionkeytoken* _scratchKey;

}

@property (nonatomic,@dynamic,retain) TDThemeState * state; 
@property (nonatomic,@dynamic,retain) TDThemePresentationState * presentationState; 
@property (nonatomic,@dynamic,retain) TDThemeValue * value; 
@property (nonatomic,@dynamic,retain) TDThemeSize * size; 
@property (nonatomic,@dynamic,retain) TDThemeDirection * direction; 
@property (nonatomic,@dynamic,retain) TDThemePart * part; 
@property (nonatomic,@dynamic,retain) TDThemeElement * element; 
@property (nonatomic,@dynamic,retain) TDThemeDrawingLayer * layer; 
@property (nonatomic,@dynamic,retain) TDThemeIdiom * idiom; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(unsigned)subtype;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setSubtype:(unsigned)arg1 ;
-(const renditionkeytoken*)key;
-(unsigned)scaleFactor;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(void)setDimension1:(unsigned)arg1 ;
-(void)setDimension2:(unsigned)arg1 ;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(unsigned)nameIdentifier;
-(void)setNameIdentifier:(unsigned)arg1 ;
-(void)getKey:(renditionkeytoken*)arg1 ;
-(id)scaleFactorString;
-(void)setScaleFactorString:(id)arg1 ;
-(void)setAttributesFromRenditionKey:(const renditionkeytoken*)arg1 withDocument:(id)arg2 ;
-(id)keyDescription;
-(void)setScaleFactor:(unsigned)arg1 ;
-(unsigned)dimension1;
-(unsigned)dimension2;
-(const renditionkeyfmt*)keyFormat;
-(int)attributeCount;
@end

