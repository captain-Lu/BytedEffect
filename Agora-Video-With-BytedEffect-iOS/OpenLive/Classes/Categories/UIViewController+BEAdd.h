// Copyright (C) 2019 Beijing Bytedance Network Technology Co., Ltd.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (BEAdd)

- (void)displayContentController:(UIViewController*)content inView:(UIView *)view;

- (void)hideContentController:(UIViewController*)content;


@end

NS_ASSUME_NONNULL_END
