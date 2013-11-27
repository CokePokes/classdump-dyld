/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSLock, AAScriptObject;

@interface AAScriptNativeObject : NSObject {

	NSLock* _lock;
	id _nativeObject;
	id _weakNativeObject;
	AAScriptObject* _scriptObject;
	BOOL _weak;

}

@property (assign,nonatomic) id object; 
@property (assign) AAScriptObject * scriptObject; 
+(void)clearWeakReferencesToObject:(id)arg1 ;
+(id)objectWithNativeObject:(id)arg1 ;
-(id)init;
-(void)lock;
-(void)unlock;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void).cxx_destruct;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(id)scriptObject;
-(void)setScriptObject:(id)arg1 ;
@end

