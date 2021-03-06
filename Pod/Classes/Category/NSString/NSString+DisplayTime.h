//
//  NSString+DisplayTime.h
//
//  Created by mac on 2018/12/11.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (DisplayTime)
/**
 通过时间戳计算时间差（几小时前、几天前

 @param compareDate <#compareDate description#>
 @return <#return value description#>
 */
+ (NSString *)gt_compareCurrentTime:(NSTimeInterval) compareDate;

/**
 通过时间戳得出对应的时间

 @param timestamp 时间戳
 @return <#return value description#>
 */
+ (NSString *)gt_getDateStringWithTimestamp:(NSTimeInterval)timestamp;

/**
 //通过时间戳和显示时间
 @param timestamp 时间戳
 @param formatter 格式
 @return <#return value description#>
 */
+ (NSString *)gt_getStringWithTimestamp:(NSTimeInterval)timestamp formatter:(NSString*)formatter;
@end
