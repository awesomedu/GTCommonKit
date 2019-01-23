//
//  NSString+Safe.h
//
//  Created by mac on 2019/01/09.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Safe)
/// 安全获取子字符串
- (NSString *)gt_safeSubstringFromIndex:(NSUInteger)from;

- (NSString *)gt_safeSubstringToIndex:(NSUInteger)to;

- (NSString *)gt_safeSubstringWithRange:(NSRange)range;

- (NSRange)gt_safeRangeOfString:(NSString *)aString;

- (NSRange)gt_safeRangeOfString:(NSString *)aString options:(NSStringCompareOptions)mask;

- (NSString *)gt_safeStringByAppendingString:(NSString *)aString;

@end
