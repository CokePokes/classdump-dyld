/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MUSearchResultActivityProvider.h>
#import <UIKit/UIActivityItemSource.h>
#import <UIKit/UIActivityItemSocialSource.h>

@interface MUPlaceCardURLProvider : MUSearchResultActivityProvider <UIActivityItemSource, UIActivityItemSocialSource>
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
@end

