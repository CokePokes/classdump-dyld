/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DSplineGenerator : NSObject {

	float mDetail;
	float mTension;
	float mAdaptiveThreshold;
	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mControlPts;
	vector<int, std::__1::allocator<int> >* mSplineExclude;

}

@property (assign,nonatomic) float detail; 
@property (assign,nonatomic) float tension; 
@property (assign,nonatomic) float adaptiveThreshold; 
+(id)generator;
-(vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)controlPts;
-(void)setTension:(float)arg1 ;
-(void)setAdaptiveThreshold:(float)arg1 ;
-(void)generatePoints:(vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(void)calcControlMatrix:(tmat4x4<float>*)arg1 pointNum:(int)arg2 ;
-(vector<int, std::__1::allocator<int> >*)splineExclude;
-(float)tension;
-(float)adaptiveThreshold;
-(id)init;
-(void)setDetail:(float)arg1 ;
-(id).cxx_construct;
-(BOOL)isClosed;
-(void).cxx_destruct;
-(float)detail;
@end

