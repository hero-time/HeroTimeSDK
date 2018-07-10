//
//  BasePay.h
//  HeroCoinSDK
//
//  Created by 王章仲 on 2018/6/23.
//  Copyright © 2018年 zhutaofeng. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PayStatus) {
    //订单状态
    PayStatusWithApplePay_NotAllow,             //不允许程序内付费
    PayStatusWithApplePay_RequestProduct,       //请求商品信息(苹果服务器)
    PayStatusWithApplePay_NoProduct,            //没有商品（苹果服务器）
    PayStatusWithApplePay_ProductInfo,          //商品信息
    PayStatusWithApplePay_RequestProductFalse,  //请求商品信息失败(苹果服务器)
    PayStatusWithApplePay_RequestProductEnd,    //请求商品信息结束(苹果服务器)
    PayStatusWithApplePay_CreatePayOrder,       //创建支付订单
    PayStatusWithApplePay_CreatePayOrderSuccess,    //创建支付订单成功
    PayStatusWithApplePay_CreatePayOrderFalse,      //创建支付订单失败
    //支付状态
    PayStatusWithApplePay_PayPrepare,           //准备支付
    PayStatusWithApplePay_PaySuccess,           //准备成功
    PayStatusWithApplePay_PayFalse,             //准备失败
    //请求收据
    PayStatusWithApplePay_RequestReceipt,               //请求收据
    PayStatusWithApplePay_RequestReceiptSuccess         = 1,    //请求收据成功
    PayStatusWithApplePay_RequestReceiptFalse           = 2,    //请求收据失败
    PayStatusWithApplePay_RequestReceiptValidationFalse = 3,    //收据待验证
    PayStatusWithApplePay_RequestReceiptValidation      = 4,    //收据验证成功
};

// MARK: - 支付结果block
/**
 * 支付成功回调
 */
typedef void(^PaySuccessful)(id payInfo, PayStatus payStatus);
/**
 * 支付失败回调
 */
typedef void(^PayFailure)(id payInfo, PayStatus payStatus);


@interface BasePay : NSObject

@end
