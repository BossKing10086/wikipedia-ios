//  Created by Monte Hurd on 8/29/15.
//  Copyright (c) 2015 Wikimedia Foundation. Provided under MIT-style license; please copy and modify!

#import <Foundation/Foundation.h>
#import "WMFAnalyticsLogging.h"

@class MWKSavedPageList, MWKTitle, MWKSavedPageList;

@interface WMFSaveButtonController : NSObject

@property (copy, nonatomic) MWKTitle* title;
@property (strong, nonatomic) UIControl* control;
@property (strong, nonatomic) UIBarButtonItem* barButtonItem;
@property (strong, nonatomic) MWKSavedPageList* savedPageList;

- (instancetype)initWithControl:(UIControl*)button
                  savedPageList:(MWKSavedPageList*)savedPageList
                          title:(MWKTitle*)title;

- (instancetype)initWithBarButtonItem:(UIBarButtonItem*)barButtonItem
                        savedPageList:(MWKSavedPageList*)savedPageList
                                title:(MWKTitle*)title;

/**
 *  Set to provide a source for logging saved pages
 */
@property (weak, nonatomic) id<WMFAnalyticsContextProviding> analyticsContext;
@property (weak, nonatomic) id<WMFAnalyticsContentTypeProviding> analyticsContentType;

@end
