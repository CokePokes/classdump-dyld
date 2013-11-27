/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDOneCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	CGSize mSize;
	BOOL mIsRelative;

}
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id).cxx_construct;
-(EDCellAnchorMarker)from;
-(BOOL)isRelative;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setRelative:(BOOL)arg1 ;
@end

