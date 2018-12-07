//
//  SignalHandler.h
//  Tool
//
//  Created by liuyujia on 2018/12/7.
//  Copyright © 2018 liuyujia. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SignalHandler : NSObject


+(void)saveCreash:(NSString *)exceptionInfo;

@end

void InstallSignalHandler(void);

NS_ASSUME_NONNULL_END
