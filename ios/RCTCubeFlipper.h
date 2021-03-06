//
//  RCTCubeFlipper.h
//  RCTCubeFlipper
//
//  Created by Øyvind Hauge on 30/08/16.
//  Copyright © 2016 Oyvind Hauge. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTComponent.h>

extern NSString* _Nullable const RCTCubeFlipperDidBecomeActive;

@protocol CubeFlipperDelegate <NSObject>
- (void)cubeFlipperOnPageScrollWithIndex:(NSInteger)index offset:(CGFloat)offset isDragging:(BOOL)isDragging;
- (void)cubeFlipperOnPageSelectedWithIndex:(NSInteger)index isDragging:(BOOL)isDragging;
- (void)cubeFlipperOnPageScrollStateChangedWithState:(nonnull NSString*)state;
@end


@interface RCTCubeFlipper : UIScrollView
@property (nonatomic, weak, nullable) id<CubeFlipperDelegate> cubeDelegate;
@property (nonatomic, assign) BOOL disableLeftScrolling;
@property (nonatomic, copy, nullable) RCTBubblingEventBlock onPageScroll;
@property (nonatomic, copy, nullable) RCTBubblingEventBlock onPageSelected;
@property (nonatomic, copy, nullable) RCTBubblingEventBlock onPageScrollStateChanged;

- (void)setPage:(NSInteger)page animationSpeed:(NSInteger)animationSpeed;
@end
