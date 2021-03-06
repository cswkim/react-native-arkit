//
//  RCTARKitIO.h
//  RCTARKit
//
//  Created by Zehao Li on 9/9/17.
//  Copyright © 2017 HippoAR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SceneKit/SceneKit.h>
#import <React/RCTBridgeModule.h>

@interface RCTARKitIO : NSObject

+ (instancetype)sharedInstance;

- (SCNNode *)loadModel:(NSString *)path nodeName:(NSString *)nodeName withAnimation:(BOOL)withAnimation;
- (SCNNode *)loadMDLModel:(NSString *)path nodeName:(NSString *)nodeName withAnimation:(BOOL)withAnimation;
    
- (void)saveScene:(SCNScene *)scene as:(NSString *)filename resolve:(RCTPromiseResolveBlock)resolve;

@end
