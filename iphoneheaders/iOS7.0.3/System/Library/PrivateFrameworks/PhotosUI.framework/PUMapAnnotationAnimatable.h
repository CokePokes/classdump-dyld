/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PUMapAnnotationAnimatable <NSObject,MKAnnotation,NSCopying>
@property (nonatomic,readonly) SCD_Struct_PU8 originalCoordinate; 
@property (assign,nonatomic) SCD_Struct_PU8 coordinate; 
@property (nonatomic,readonly) NSObject * itemId; 
@property (nonatomic,readonly) NSDate * dateCreated; 
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) NSArray * mapItems; 
@property (nonatomic,readonly) NSMutableSet * subAnnotations; 
@property (assign,nonatomic) unsigned relativeOrder; 
@required
-(unsigned)count;
-(int)compare:(id)arg1;
-(id)dateCreated;
-(SCD_Struct_PU8*)coordinate;
-(id)newestMaxMapItems:(unsigned)arg1;
-(id)compactDescription;
-(id)itemId;
-(id)mapItems;
-(SCD_Struct_PU8*)originalCoordinate;
-(void)setCoordinate:(SCD_Struct_PU8)arg1;
-(void)resetCoordinateToOriginal;
-(BOOL)containsAnnotation:(id)arg1;
-(int)annotationSortingCompareWithAnnotation:(id)arg1;
-(id)subAnnotations;
-(unsigned)relativeOrder;
-(void)setRelativeOrder:(unsigned)arg1;
@end

