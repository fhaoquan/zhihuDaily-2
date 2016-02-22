//
//  SYStory.h
//  zhihuDaily
//
//  Created by yang on 16/2/22.
//  Copyright © 2016年 yang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SYImage.h"
@interface SYStory : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *ga_prefix;
@property (nonatomic, strong) NSArray<NSString *> *images;
@property (nonatomic, assign) BOOL multipic;
@property (nonatomic, assign) int type;
@property (nonatomic, assign) long long id;

@property (nonatomic, assign, getter=isTop) BOOL top;

@end