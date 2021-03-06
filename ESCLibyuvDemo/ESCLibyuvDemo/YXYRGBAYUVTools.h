//
//  YXYRGBAYUVTools.h
//
//
//  Created by xiang on 2019/5/5.
//  Copyright © 2019 yxy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXYRGBAYUVTools : NSObject

+ (void)getImageRGBADataWithImage:(UIImage *)image
                         rgbaData:(uint8_t *)rgbaData
                           length:(int *)length;

+ (UIImage *)getImageFromRGBAData:(uint8_t *)rgbaData
                            width:(int)width
                           height:(int)height;

+ (BOOL)yuvDataConverteARGBDataWithYdata:(uint8_t *)ydata
                                   udata:(uint8_t *)udata
                                   vdata:(uint8_t *)vdata
                                argbData:(uint8_t *_Nullable*_Nullable)argbData
                                   width:(int)width
                                  height:(int)height;

+ (BOOL)yuvDataConverteARGBDataFunc2WithYdata:(uint8_t *)ydata
                                        udata:(uint8_t *)udata
                                        vdata:(uint8_t *)vdata
                                     argbData:(uint8_t *_Nullable*_Nullable)argbData
                                        width:(int)width
                                       height:(int)height;

+ (BOOL)argbDataConverteYUVDataWithARGBData:(uint8_t *)argbData
                                      ydata:(uint8_t *_Nullable*_Nullable)ydata
                                      udata:(uint8_t *_Nullable*_Nullable)udata
                                      vdata:(uint8_t *_Nullable*_Nullable)vdata
                                      width:(int)width
                                     height:(int)height;

+ (BOOL)argbDataConverteYUVDataFunc2WithARGBData:(uint8_t *)argbData
                                           ydata:(uint8_t *_Nullable*_Nullable)ydata
                                           udata:(uint8_t *_Nullable*_Nullable)udata
                                           vdata:(uint8_t *_Nullable*_Nullable)vdata
                                           width:(int)width
                                          height:(int)height;

+(CVPixelBufferRef*)pixelBufferFromYUV:(uint8_t *)yBuffer vBuffer:(uint8_t *)uBuffer uBuffer:(uint8_t *)vBuffer width:(int)width;

@end

NS_ASSUME_NONNULL_END
