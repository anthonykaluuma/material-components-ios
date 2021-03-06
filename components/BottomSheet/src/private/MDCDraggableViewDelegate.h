// Copyright 2020-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

@class MDCDraggableView;

/**
 * Delegate protocol to control when dragging should be allowed and to respond to dragging events.
 */
@protocol MDCDraggableViewDelegate <NSObject>

/**
 * Allows the delegate to specify a maximum threshold height that the view cannot be dragged above.
 * @param view The draggable view.
 * @return The maximum height this view can be dragged to be.
 */
- (CGFloat)maximumHeightForDraggableView:(nonnull MDCDraggableView *)view;

/**
 * Called when an attempt is made to drag the view up or down.
 * @return NO to prevent a new drag from starting.
 * @param view The draggable view.
 * @param velocity The current velocity of the drag gesture. This only contains a vertical
 *   component.
 */
- (BOOL)draggableView:(nonnull MDCDraggableView *)view
    shouldBeginDraggingWithVelocity:(CGPoint)velocity;

/**
 * Called when a new drag starts.
 * @param view The draggable view.
 */
- (void)draggableViewBeganDragging:(nonnull MDCDraggableView *)view;

/**
 * Called when a drag ends.
 * @param view The draggable view.
 * @param velocity The current velocity of the drag gesture. This only contains a vertical
 *   component.
 */
- (void)draggableView:(nonnull MDCDraggableView *)view draggingEndedWithVelocity:(CGPoint)velocity;

- (void)draggableView:(nonnull MDCDraggableView *)view didPanToOffset:(CGFloat)offset;

@end
