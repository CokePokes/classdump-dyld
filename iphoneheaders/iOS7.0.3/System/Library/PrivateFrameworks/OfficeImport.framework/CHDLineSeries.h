/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CHDSeries.h>
#import <OfficeImport/CHDMarkerOwner.h>

@class CHDMarker;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {

	CHDMarker* mMarker;
	bool mSmooth;

}
-(void)dealloc;
-(id)marker;
-(id)initWithChart:(id)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setSmooth:(bool)arg1 ;
-(bool)isSmooth;
@end

