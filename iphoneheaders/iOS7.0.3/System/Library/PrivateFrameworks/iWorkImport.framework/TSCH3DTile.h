/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DTile : NSObject {

	box<glm::detail::tvec2<float> > mBounds;

}

@property (assign,nonatomic) box<glm::detail::tvec2<float> > bounds; 
-(BOOL)renderIntoContext:(CGContextRef)arg1 ;
-(box<glm::detail::tvec2<float> >)bounds;
-(void)setBounds:(box<glm::detail::tvec2<float> >)arg1 ;
-(id).cxx_construct;
-(id)initWithBounds:(const box<glm::detail::tvec2<float> >*)arg1 ;
@end

