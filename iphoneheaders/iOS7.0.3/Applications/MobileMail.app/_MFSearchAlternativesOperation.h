/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSOperation.h>

@class NSNumber, NSString, NSArray, MFSearchAlternativesManager;

@interface _MFSearchAlternativesOperation : NSOperation {

	NSNumber* _identifier;
	NSString* _phrase;
	NSArray* _generators;
	MFSearchAlternativesManager* _manager;

}
+(id)alternativesOperationWithPhrase:(id)arg1 manager:(id)arg2 identifier:(id)arg3 ;
-(id)_initWithPhrase:(id)arg1 manager:(id)arg2 identifier:(id)arg3 ;
-(void)dealloc;
-(void)main;
@end

