//
//  UncaughtExceptionHandler.h
//  Tool
//
//  Created by liuyujia on 2018/12/7.
//  Copyright © 2018 liuyujia. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UncaughtExceptionHandler : NSObject

@end


void InstallUncaughtExceptionHandler(void);

NS_ASSUME_NONNULL_END
