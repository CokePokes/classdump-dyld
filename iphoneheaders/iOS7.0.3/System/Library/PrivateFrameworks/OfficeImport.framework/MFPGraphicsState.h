/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface MFPGraphicsState : NSObject {

	CGAffineTransform mPageTransform;
	CGAffineTransform mWorldTransform;

}
-(void)dealloc;
-(id).cxx_construct;
-(id)initWithDefaults;
-(void)setWorldTransform:(CGAffineTransform)arg1 ;
-(void)multiplyWorldTransformBy:(CGAffineTransform)arg1 order:(int)arg2 ;
-(void)setPageTransform:(CGAffineTransform)arg1 ;
-(id)initWithGraphicsState:(id)arg1 ;
-(CGAffineTransform)pageTransform;
-(void)removeTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)worldTransform;
@end

