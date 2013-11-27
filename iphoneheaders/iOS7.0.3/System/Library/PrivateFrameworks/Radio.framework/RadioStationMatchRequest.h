/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/RadioRequest.h>

@class NSArray, SSURLConnectionRequest;

@interface RadioStationMatchRequest : RadioRequest {

	NSArray* _libraryTrackDictionaries;
	SSURLConnectionRequest* _request;

}
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)cancel;
-(id)initWithLibraryTrackDictionaries:(id)arg1 ;
-(void).cxx_destruct;
@end

