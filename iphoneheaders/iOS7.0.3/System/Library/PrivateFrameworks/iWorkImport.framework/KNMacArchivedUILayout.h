/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>

@class KNMacUILayout;

@interface KNMacArchivedUILayout : TSPObject {

	KNMacUILayout* mUILayout;

}

@property (nonatomic,readonly) KNMacUILayout * uiLayout; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithUILayout:(id)arg1 context:(id)arg2 ;
-(id)uiLayout;
-(void)dealloc;
@end

