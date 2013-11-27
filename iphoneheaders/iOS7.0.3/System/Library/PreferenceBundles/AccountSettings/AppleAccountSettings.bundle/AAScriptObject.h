/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, AAScriptObjectInvocationBatch, NSLock, AAScriptNativeObject, NSMutableSet, NSString;

@interface AAScriptObject : NSObject {

	NSMutableArray* _eventListeners;
	AAScriptObjectInvocationBatch* _invocationBatch;
	NSLock* _lock;
	AAScriptNativeObject* _nativeObject;
	AAScriptObject* _parentScriptObject;
	NSMutableSet* _scriptObjects;
	unsigned _checkOutWhenHidden : 1;
	unsigned _isVisible : 1;
	NSString* _className;

}

@property (retain) AAScriptNativeObject * nativeObject; 
@property (assign) AAScriptObject * parentScriptObject; 
@property (readonly) BOOL sourceIsTrusted; 
@property (readonly) NSMutableArray * scriptAttributeKeys; 
@property (getter=_className,readonly) NSString * className; 
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
-(void)set_class:(id)arg1 ;
-(id)_copyGlobalRootObject;
-(void)dealloc;
-(id)init;
-(id)parentViewController;
-(void)lock;
-(void)unlock;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void).cxx_destruct;
-(void)finalizeForWebScript;
-(id)stringRepresentation;
-(void)checkInScriptObject:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg1 ;
-(void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3 ;
-(void)setNativeObject:(id)arg1 ;
-(void)tearDownUserInterface;
-(void)checkInScriptObjects:(id)arg1 ;
-(id)nativeObject;
-(void)setParentScriptObject:(id)arg1 ;
-(void)checkOutScriptObjects:(id)arg1 ;
-(id)parentScriptObject;
-(id)_copyListenersForName:(id)arg1 ;
-(BOOL)scriptObjectIsCheckedIn:(id)arg1 ;
-(void)_checkOutAfterVisibilityChange;
-(void)checkOutScriptObject:(id)arg1 ;
-(void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3 ;
-(BOOL)equals:(id)arg1 ;
-(void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3 ;
-(BOOL)sourceIsTrusted;
@end

