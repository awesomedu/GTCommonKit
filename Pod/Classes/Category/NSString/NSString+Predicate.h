//
//  NSString+Predicate.h
//
//  Created by mac on 2019/01/09.
//  Copyright © 2018年 mac. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface NSString (Predicate)

/// 有效的电话号码
- (BOOL)gt_isValidMobileNumber;

/// 有效的真实姓名
- (BOOL)gt_isValidRealName;

/// 是否只有中文
- (BOOL)gt_isOnlyChinese;

/// 有效的验证码(根据自家的验证码位数进行修改)
- (BOOL)gt_isValidVerifyCode;

/// 有效的银行卡号
- (BOOL)gt_isValidBankCardNumber;

/// 有效的邮箱
- (BOOL)gt_isValidEmail;

/// 有效的字母数字密码
- (BOOL)gt_isValidAlphaNumberPassword;

/// 检测有效身份证
/// 15位
- (BOOL)gt_isValidIdentifyFifteen;

/// 18位
- (BOOL)gt_isValidIdentifyEighteen;

/// 限制只能输入数字
- (BOOL)gt_isOnlyNumber;

@end
