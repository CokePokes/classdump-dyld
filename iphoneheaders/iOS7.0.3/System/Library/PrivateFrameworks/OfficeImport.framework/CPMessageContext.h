/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface CPMessageContext : NSObject {

	NSMutableSet* m_warnings;
	NSMutableSet* m_errors;
	NSMutableArray* m_currentObjectStack;
	NSMutableDictionary* m_placeholderToObjectIdMap;

}
+(void)initialize;
+(void)reportWarning:(CPTaggedMessageStructure*)arg1 ;
+(void)reportWarningException:(id)arg1 ;
+(void)reportObjectOrPlaceholder:(id)arg1 withWarning:(CPTaggedMessageStructure*)arg2 parameters:(void*)arg3 ;
+(id)currentObjectOrPlaceholder;
+(void)setObject:(id)arg1 forPlaceholder:(id)arg2 ;
+(void)popCurrentPlaceholder:(id)arg1 ;
+(void)popCurrentObject;
+(void)reportObject:(id)arg1 withWarning:(CPTaggedMessageStructure*)arg2 ;
+(void)reportError:(CPTaggedMessageStructure*)arg1 ;
+(void)reportErrorException:(id)arg1 ;
+(void)createContextForCurrentThread;
+(void)removeContextForCurrentThread;
+(id)getWarningArray;
+(id)getErrorArray;
+(void)setIsFileStructuredStorage:(BOOL)arg1 ;
+(BOOL)isFileStructuredStorage;
+(void)pushCurrentObject:(id)arg1 ;
+(id)pushCurrentPlaceholder;
+(void)replacePlaceholdersWithObjects;
+(unsigned)saveObjectStack;
+(void)restoreObjectStack:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
@end

