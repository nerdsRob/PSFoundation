//
//  PSScrollContentView.h
//  ScrollViewPins
//
//  Created by Matt Drance on 2/22/11.
//  Copyright 2011 Bookhouse Software LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * A contentView of a ScrollView that can have non-scaling subviews like 
 * the pins on a MKMapView
 */
@interface PSScrollContentView : UIView {
    NSMutableSet *nonScalingSubviews_;
}

@property (nonatomic, readonly, retain) NSMutableSet *nonScalingSubviews;

- (void)addNonScalingSubview:(UIView *)view;

@end