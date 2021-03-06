//
//  NSStringCategory
//
//  Created by mac on 2018/12/11.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

@interface NSString (Category)
/**
 电话号码中间4位*显示

 @param phoneNum 电话号码
 @return 135*****262
 */
+ (NSString*)gt_getSecrectStringWithPhoneNumber:(NSString*)phoneNum;


/**
 银行卡号中间8位*显示

 @param accountNo 银行卡号
 @return <#return value description#>
 */
+ (NSString*)gt_getSecrectStringWithAccountNo:(NSString*)accountNo;


/**
 转为手机格式，默认为-
 
 @param mobile
 @return <#return value description#>
 */
+ (NSString*)gt_stringMobileFormat:(NSString*)mobile;

//数组中文格式（几万）可自行添加

/**
 金额数字添加单位（暂时写了万和亿，有更多的需求请参考写法来自行添加）
 
 @param value 金额
 @return <#return value description#>
 */
+ (NSString*)gt_stringChineseFormat:(double)value;


/**
 添加数字的千位符

 @param num <#num description#>
 @return <#return value description#>
 */
+ (NSString*)gt_countNumAndChangeformat:(NSString *)num;

/**
 *  NSString转为NSNumber
 *
 *  @return NSNumber
 */
- (NSNumber*)gt_toNumber;

/**
 计算文字高度
 
 @param fontSize 字体
 @param width 最大宽度
 @return <#return value description#>
 */
- (CGFloat  )gt_heightWithFontSize:(CGFloat)fontSize width:(CGFloat)width;

/**
 计算文字宽度

 @param fontSize 字体
 @param maxHeight 最大高度
 @return <#return value description#>
 */
- (CGFloat  )gt_widthWithFontSize:(CGFloat)fontSize height:(CGFloat)maxHeight;
/**
 抹除小数末尾的0

 @return <#return value description#>
 */
- (NSString*)gt_removeUnwantedZero;

/**
 //去掉前后空格

 @return <#return value description#>
 */
- (NSString*)gt_trimmedString;

@end
