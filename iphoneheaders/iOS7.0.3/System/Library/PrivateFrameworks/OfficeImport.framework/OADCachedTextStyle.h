/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADCachedTextStyle : NSObject {

	OADCachedTextStyleData mData;
	unsigned mHash;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id).cxx_construct;
-(id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5 ;
-(void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
-(void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
@end

