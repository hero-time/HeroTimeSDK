//
//  TradeResuleStatus.h
//  HeroCoinSDK
//
//  Created by 王章仲 on 2018/6/23.
//  Copyright © 2018年 zhutaofeng. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, TradeStatus) {
    //请求收据
    TradeStatusWithAppleTrade_RequestReceipt,               //请求收据
    TradeStatusWithAppleTrade_RequestReceiptSuccess         = 1,    //请求收据成功
    TradeStatusWithAppleTrade_RequestReceiptFalse           = 2,    //请求收据失败
    TradeStatusWithAppleTrade_RequestReceiptValidationFalse = 3,    //收据待验证
    TradeStatusWithAppleTrade_RequestReceiptValidation      = 4,    //收据验证成功
    //网络中断
    TradeStatusWithAppleTrade_NoNetWork,                //网络中断
    //支付前判断用户身份
    TradeStatusWithAppleTrade_BindAccount,              //游客 去绑定
    TradeStatusWithAppleTrade_HaveOldTrade_Delete,      //有支付完成订单在支付队列，删除
    //请求支付平台商品id
    TradeStatusWithAppleTrade_RequestChannelProductIDFalse,  //请求商品信息失败(SDK服务器)
    //订单状态
    TradeStatusWithAppleTrade_NotAllow,             //不允许程序内付费
    TradeStatusWithAppleTrade_RequestProduct,       //请求商品信息(苹果服务器)
    TradeStatusWithAppleTrade_NoProduct,            //没有商品（苹果服务器）
    TradeStatusWithAppleTrade_ProductInfo,          //商品信息
    TradeStatusWithAppleTrade_RequestProductFalse,  //请求商品信息失败(苹果服务器)
    TradeStatusWithAppleTrade_RequestProductEnd,    //请求商品信息结束(苹果服务器)
    TradeStatusWithAppleTrade_CreateTradeOrder,       //创建支付订单
    TradeStatusWithAppleTrade_CreateTradeOrderSuccess,    //创建支付订单成功
    TradeStatusWithAppleTrade_CreateTradeOrderFalse,      //创建支付订单失败
    //支付状态
    TradeStatusWithAppleTrade_TradePrepare,           //准备支付(添加商品进支付列表)
    TradeStatusWithAppleTrade_TradeSuccess,           //苹果支付通讯成功
    TradeStatusWithAppleTrade_TradeFalse,             //苹果支付通讯失败
    TradeStatusWithAppleTrade_TradeEnd,               //苹果支付通讯结束

};

// MARK: - 支付结果block
/**
 * 支付成功回调
 */
typedef void(^TradeSuccessful)(id TradeInfo, TradeStatus tradeStatus);
/**
 * 支付失败回调
 */
typedef void(^TradeFailure)(id TradeInfo, TradeStatus tradeStatus);


@interface TradeResuleStatus : NSObject

@end
