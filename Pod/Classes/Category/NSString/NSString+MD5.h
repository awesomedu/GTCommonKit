//
//  NSString+MD.h
//
//  Created by mac on 2019/01/09.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MD5)
// 32位小写
+(NSString *)gt_MD5ForLower32Bate:(NSString *)str;
// 32位大写
+(NSString *)gt_MD5ForUpper32Bate:(NSString *)str;
// 16为大写
+(NSString *)gt_MD5ForUpper16Bate:(NSString *)str;
// 16位小写
+(NSString *)gt_MD5ForLower16Bate:(NSString *)str;
@end
